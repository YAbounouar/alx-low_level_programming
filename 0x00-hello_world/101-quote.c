#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 1 (indicating successful execution)
 */

int main(void)
{
int fd;
const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
ssize_t len = 0;

	write(fd, message, len);
	close(fd); 

return (1);
}
