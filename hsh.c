#include "shell.h"

/**
 * main - entry point of shell
 * @ni: number of arguments
 * @argv: array containing number of argumnets
 * Return: Always 0.
 */

int main(int ni, char **argv)
{
	char *prompt = ("NtswakImane $");
	size_t n = 0;
	ssize_t chars_read;
	const char *delim = "\n";
	char *lineptr = NULL, *lineptr_copy = NULL;
	char *tokens;
	int tokens_read;
	int j;
	
	(void)ni;
	

	while(1)
	{
		printf("%s", prompt);
		chars_read = getline(&lineptr, &n, stdin);

		/**getline() function called**/

		if(chars_read == -1)
		{
			printf("exit\n");
			return (-1);
		}
		lineptr_copy = malloc(sizeof(char) *chars_read);
		if(lineptr_copy == NULL)
		{
			perror("tsh: memory allocation error");
			return (-1);
		}
		strcpy(lineptr_copy, lineptr);
		tokens = strtok(lineptr, delim);

		while(tokens != NULL)
		{
			tokens_read++;
			tokens = strtok(NULL, delim);
		}
		tokens_read++;

		argv = malloc(sizeof(char *) * chars_read);
		tokens = strtok(lineptr_copy, delim);
		for (j = 0; tokens != NULL; j++)
		{
			argv[j] = malloc(sizeof(char) * strlen(tokens));
			strcpy(argv[j], tokens);

			tokens = strtok(NULL, delim);
		}
		argv[j] = NULL;


	printf("%s", lineptr);

	free(lineptr);
	}

	return (0);
}
