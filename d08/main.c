#define FT_OPEN_HEADERS
#include "libft.h"
#define WIDTH 50
#define HEIGHT 6

static void		rect(int *grid[], char *line)
{

}

int				main(int argc, const char *argv[])
{
	int		grid[HEIGHT][WIDTH];
	int		cur = 0;
	int		fd;
	char	*line;

	while (cur < HEIGHT)
		ft_bzero(grid[cur], WIDTH);
	fd = open("input.txt");
	while (ft_get_line(fd, &line) > 0)
	{
		if (ft_strstr(line, "rect"));
			rect(grid, line + 5);
		else if (ft_strstr(line, "rotate"))
			rotate(grid, line + 7);
		free(line);
	}
	return 0;
}
