#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main () {

    char *input  = NULL;
    size_t length = 0;
    printf("Enter you first name \n");
    getline(&input, &length, stdin);
    char first_name[length];
    strncpy( first_name, input, length);
    free(input);
    printf("enter your last name \n");
    getline(&input,&length, stdin);
    char last_name[length];
    strncpy( last_name, input, length);

    printf("Hello, %s %s \n", first_name, last_name);

    return 0;
}
