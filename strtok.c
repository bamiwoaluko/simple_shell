#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
        char *buffer = NULL, *copy_buffer = NULL;
        ssize_t num_read;
        size_t n = 0;
	char *token;
	char *delimeter = " ";
	int num_tokens = 0, i = 0;
	char **argv;

	printf("$ ");
	num_read = getline(&buffer, &n, stdin);
	printf(">>>>>>%s\n", buffer);
        /*printf("%ld \n", num_read);*/
	

	copy_buffer = malloc(sizeof(char) * num_read);
	strcpy(copy_buffer, buffer);
	token = strtok(buffer, delimeter);
	num_tokens = 1;
	while(token != NULL)
	{
		token = strtok(NULL, delimeter);
		num_tokens++;
	}
	num_tokens++;

	argv = malloc(sizeof(char *) * num_tokens);
	
	token = strtok(copy_buffer, delimeter);
	while(token != NULL)
	{
		argv[i] = malloc(sizeof(char) * strlen(token));
		strcpy(argv[i], token);
		printf(">>>>>>%s\n", argv[i]);
		i++;
		token = strtok(NULL, delimeter);
	}
	argv[i] = NULL;
	

}
