#include <stdio.h>
/**
 * main -Entry point of the program
 *
 * return: always 0 (success)
 */
int main(void)
{
	printf("The size of an char is: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("ize of an int is: %lu byte(s)\n",(unsigned long)sizeof(int));
	printf("The size of a long int is: %lu byte(s)\n", (unsigned long)sizeof(long int));
	printf("The size of an long long int is: %lu byte(s)\n", (unsigned long)sizeof(long long int));
	printf("The size of an float is: %lu byte(s)\n", (unsigned long)sizeof(float));
		return (0);
}
