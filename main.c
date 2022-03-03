#include "get_next_line.h"

int main()
{
	char str[100];

	int fd = open("test010.txt",O_RDONLY| O_CREAT);
	printf("%s", get_next_line(fd));	
	printf("%s", get_next_line(fd));	
	printf("%s", get_next_line(fd));	
	printf("%s", get_next_line(fd));	
	printf("%s", get_next_line(fd));	
	printf("%s", get_next_line(fd));	
	printf("%s", get_next_line(fd));	
	printf("%s", get_next_line(fd));	
	printf("%s", get_next_line(fd));	
	printf("%s", get_next_line(fd));	
	printf("%s", get_next_line(fd));	
	printf("%s", get_next_line(fd));	
	printf("%s", get_next_line(fd));	
	//printf("%s", get_next_line(fd));	
}
