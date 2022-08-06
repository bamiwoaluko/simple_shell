#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <limits.h>
#include <signal.h>


int main(void)
{
        char *buffer = NULL;
        /*ssize_t num_read;*/
        size_t n = 0;

        printf("$ ");
        getline(&buffer, &n, stdin);
        printf(">>>>>>%s\n", buffer);
        /*printf("%ld \n", num_read);*/
}



#endif
