#include <stdio.h>
/**
*main - print the string in the function
*
*Description: using the main function
*this program prints the various compilers
*Return: Always 0 (Success)
*/
int main(void)
{
        char c;
        int i;
        long li;
        long long lli;
        float f;

	printf("size of a char: %ld bytes(s)\n", sizeof(c));
	printf("size of an int: &ld byte(s)\n", sizeof(i));
	printf("size of a long int: %ld byte(s)\n", sizeof(li));
	printf("size of a long long int: %ld byte(s)\n", sizeof(lli));
	printf("size of a float: %ld byte(s)\n", sizeof(f));
	return(0);
}
