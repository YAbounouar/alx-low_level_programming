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

fd = open("/dev/stderr", O_WRONLY);
if (fd == -1)
return (1);

while (message[len] != '\0')
len++;

write(2,  “the text\n” ,  59);

return (1);
