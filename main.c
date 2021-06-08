#include "get_next_line.h"

int	main()
{
	char        *line;
	int		    fd;

	fd = open("/Users/pjeffere/CLionProjects/1gnl/GNL_lover/test_files_GNL/test_file8", O_RDONLY);
	while (get_next_line(fd, &line))
        printf("%s\n\n", line);
	printf("%s\n\n", line);
	free (line);
	return (0);
}
