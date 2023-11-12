#include "shell.h"

/**
 * main - entry point to the shell
 * @ni - number of arguments
 * @argv - array of strings containinng arguments
 * Return: Always 0.
 */

int main(int ni, char **argv)
{
	char *prompt = "NtswakImane $";
	char *lineptr;
	size_t n = 0;
	
	(void)ni; (void)argv;

	printf("%s", prompt);
	getline(&lineptr, &n, stdin);
	printf("%s", lineptr);

	free(lineptr);

	return(0);

}
