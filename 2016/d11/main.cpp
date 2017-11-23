#include <fstream>
#include <iostream>
#include <set>
#include <string>
#include <unordered_map>
#include <vector>

int read(const std::string &filename, std::vector<std::set<int>> &floors) {
  int tot = 0;
  std::ifstream f(filename);
  if (f.fail())
    exit(1);
  std::string line;
  int count = 10;
  std::unordered_map<std::string, int> elems;
  while (std::getline(f, line)) {
    floors.emplace_back();
    auto &floor = floors.back();
    size_t pos = 0;
    while ((pos = line.find(" a ", pos)) != std::string::npos) {
      pos += 3;
      size_t end = line.find_first_of(",.", pos);
      std::string item = line.substr(pos, end - (pos));
      std::string element = item.substr(0, (item.find_first_of("- ")));
      std::string type = item.substr((item.find_first_of("- ") + 1));
      int id;
      if (elems.find(element) == elems.end()) {
        elems[element] = count;
        count += 10;
      }
      id = elems[element];
      if (type.find("generator") == std::string::npos)
        id += 5;
      floor.emplace(id);
      ++tot;
    }
  }
  return tot;
}

enum class Go { Up, Down };

bool try_move(std::vector<std::set<int>> &floors, int &e, Go direction,
              int amount) {
    
}

int main(int argc, char **argv) {
  std::string filename;
  if (argc == 1)
    filename = "input.txt";
  if (argc > 2)
    return 1;
  filename = std::string(argv[1]);
  std::vector<std::set<int>> floors;
  auto total = read(filename, floors);
  for (auto &floor : floors) {
    std::cout << "new f:\n";
    for (auto &item : floor) {
      if (item % 10 == 0)
        std::cout << "  " << item / 10 << "G\n";
      else
        std::cout << "  " << item / 10 << "M\n";
    }
  }
  int e = 0;
  while (floors.back().size() != total) {
    if (try_move(floors, e, Go::Up, 2))
      ;
    else if (try_move(floors, e, Go::Up, 1))
      ;
    else if (try_move(floors, e, Go::Down, 1))
      ;
    else if (try_move(floors, e, Go::Down, 2))
      ;
    else
      break;
  }
  return 0;
}
