#include "shell.h"

/**
 * main - entry point of the shell
 *
 * Return: Always 0.
 */
int main(void)
{
	char *prompt = ("NtswakImane $");
	size_t n = 0;
	ssize_t chars_read;
	const char *delim = "\n";
	char *lineptr = NULL, *lineptr_copy = NULL;
	char *tokens;
	int j;

	while(1)
	{
		printf("%s", prompt);

		chars_read = getline(&lineptr, &n, stdin);

		if(chars_read == -1)
		{
			printf("exit\n");
			free(lineptr);
			return (-1);
		}
		
		/* tokenize the copy of input */
		tokens = strtok(lineptr_copy, delim);
		for(j = 0; tokens != NULL; j++)
		{
			argv[j] = malloc(strlen(tokens) + 1);
			if(argv[j] == NULL)
			{
				perror("tsh: memory allocation error");
				/* free allocated memory */
				for(int k = 0; k < j; k++)
				{
					free(argv[k]);
				}
				free(argv);
				free(lineptr);
				free(lineptr_copy);
				return (-1);
			}
			strcpy(argv[j], tokens;
			tokens = strtok(NULL, delim);
			}
			argv[j] = NULL;
			/*print original input line */
			printf("%s", lineptr);
			/*print the contents from argv */
			printf("content of argv\n");
			for(int counter = 0; counter < tokens_read; counter++)
			{
			printf("%s\n", argv[counter]);
			}
			/*free allocated memory from argv */
			for(int k = 0; k < j; k++)
			{
			free(argv[k]);
			}
			free(argv);
			free(lineptr_copy);
		}
		return (0);


}
