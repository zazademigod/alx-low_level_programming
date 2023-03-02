#include <stdio.h>
/**
 * main -Entry point of the program
 *
 * Description: print the size of the Types
 *
 * return: always 0 (success)*/
int main(void)
{
	printf("The size of an int is: %lu, \n" , (unsigned long)sizeof(int));
	printf("The size of an char is: %lu, \n" , (unsigned long)sizeof(char));
	printf("The size of a long int is: %lu, \n" , (unsigned long)sizeof(long int));
	printf("The size of an long long int is: %lu, \n" , (unsigned long)sizeof(long long int));
	printf("The size of an float is: %lu, \n" , (unsigned long)sizeof(float));
	printf("The size of an double is: %lu, \n" , (unsigned long)sizeof(double));
	printf("The size of an long double is: %lu, \n" , (unsigned long)sizeof(long double));
	return (0);
}
