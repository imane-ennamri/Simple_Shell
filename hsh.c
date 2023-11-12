#include "shell.h"

/**
 * main - entry point of shell
 * @ni: number of arguments
 * @argv: array containing number of argumnets
 * Return: Always 0.
 */

int main(int ni, char **argv)
{
	char *prompt = "NtswakImane $";
	const char *delim = "\n";
	char *lineptr = NULL, *lineptr_copy = NULL;
	size_t n = 0;
	ssize_t chars_read;	

	(void)ni; (void)argv;

	while(1)
	{
		printf("%s", prompt);
	chars_read = getline(&lineptr, &n, stdin);
	if(chars_read == -1)
	{
		printf("exit\n");
		return(-1);
	}
	printf("%s", lineptr);

	free(lineptr);
	
	return(0);
	}
}
