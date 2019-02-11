#include <stdio.h>
int main(int argc, char *argv[])
{
//	char str[100];
//	int i;
//
//	printf("Enter a value: ");
//	scanf("%s %d", str, &i);
//
//	printf("\nYou entered: %s:::::::::%d", str, i);
//
//	return 0;

//int pat = 0;
//
//pat = 5;
//
//printf("%d\n", pat);
int numberOfArguments = argc;
char *argument1 = argv[0];
char *argument2 = argv[1];

printf("Number of Arguments: %d\n", numberOfArguments);
printf("Arguments: %s - %s", argument1, argument2);

return 0;
}
