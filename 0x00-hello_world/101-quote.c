#include <stdio.h>

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

write(fd, message, len);
close(fd);

return (1);
