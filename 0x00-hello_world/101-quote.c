#include <unistd.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 1 (indicating successful execution)
 */
int main(void)
{
const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, message, 59); 
return (1);
}
