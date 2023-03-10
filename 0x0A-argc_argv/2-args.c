#include "main.h"
/**
 * main - prints all arguments it recieves
 * @argc: number of arguments
 * @argv: arrays of arguments
 * Returns: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
