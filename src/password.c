#include "mylib.h"

int password()
{
	credentials *students;
	students = malloc(sizeof(credentials));

	if (students == NULL) {
		printf("Memory allocation failed.\n");
		return (-1);
	}

	students->fname = malloc(MAX_LENGTH * sizeof(char));
	students->lname = malloc(MAX_LENGTH * sizeof(char));
	students->email = malloc(MAX_LENGTH * sizeof(char));

	int VI = 0;

	printf("Enter your First Name: ");
	while (!VI) {
		if (scanf("%s", students->fname) != 1  || !My_isalpha(students->fname)) {
			printf("Invalid input. Please try again (only alpha): ");
			while (getchar() != '\n');
		} else
			VI = 1;
	}

	VI = 0;
	printf("Enter your Last Name: ");
	while (!VI) {
		if (scanf("%s", students->lname) != 1 || !My_isalpha(students->lname)) {
			printf("Invalid input. Please try again (only alpha): ");
			while (getchar() != '\n');
		} else
			VI = 1;
	}

	VI = 0;
	printf("Enter your Email: ");
	while (!VI) {
		if (scanf("%s", students->email) != 1 || !isEmailValid(students->email)) {
			printf("Invalid input. Please try again (u need include @ && .com): ");
			while (getchar() != '\n');
		} else
			VI = 1;
	}
	free(students->fname);
	free(students->lname);
	free(students->email);
	free(students->age); 
	free(students);
	return 0;
}
