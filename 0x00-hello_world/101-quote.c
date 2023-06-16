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
const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
ssize_t len = 59;

	write(1, message, len); 

return (1);
}
