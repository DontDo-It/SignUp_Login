#include "mylib.h"

int menu()
{
	int n;
	do
	{
		printf("1- Sign-Up\n");
		printf("2- Login\n");
		printf("3- forget Password\n");
		printf("4- Exit\n");

		if (scanf("%d", &n) != 1 || n < 0 || n > 4) 
		{
			system("clear");
			printf("Invalid input. Please enter a number between 0 and 3.\n");
			while (getchar() != '\n');
		}
	} while (n<0 || n>4);
	return n;
}
