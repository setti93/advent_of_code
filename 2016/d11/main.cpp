#include <fstream>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

std::unordered_map<std::string, int> elems;
std::vector<std::unordered_set<int>> floors;

void read(const std::string &filename) {
  ifstream f(filename);
  if (f::fail())
    exit(1);
  std::string line;
  int count = 1;
  while (std::getline(f, line)) {
    floors.push_back();
    auto &floor = floors.back();
    size_t pos = 0;
    while ((pos = line.find(" a ", pos)) != line::npos) {
      pos += 3;
      size_t end = line.find_first_of(",.", pos);
      std::string item = line.substr(pos, end - (pos));
      std::string element = item.substr(0, (item.find_first_of("- ")));
      std::string type = item.substr((item.find_first_of("- ") + 1));
      int id;
      if (elems.find(element) == elems.end()) {
        elems[element] = count++;
      }
      id = elems[element];
      if (type.find("generator") != type::npos)
        id += 100;
      floor.emplace(id);
    }
  }
}

int main(int argc, char **argv) {
  if (argc != 2)
    return 1;
  read(argv[1]);

  return 0;
}
