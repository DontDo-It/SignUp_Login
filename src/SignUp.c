#include "mylib.h"

void My_putchar(int fd, const char *str, int len)
{
	write(fd, str, len);
}

int My_isdigit(char *str) {
	while (*str) {
		if (!isdigit(*str)) {
			return 0; 
		}
		str++;
	}
	return 1;
}


int SignUp() {
	int i = 0;
	credentials *students;
	students = malloc(sizeof(credentials));

	if (students == NULL) {
		printf("Memory allocation failed.\n");
		return i--; 
	}

	students->fname = malloc(MAX_LENGTH * sizeof(char));
	students->lname = malloc(MAX_LENGTH * sizeof(char));
	students->age = malloc(MAX_LENGTH * sizeof(char));
	students->email = malloc(MAX_LENGTH * sizeof(char));
	students->password = malloc(MAX_LENGTH * sizeof(char));

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
	printf("Enter your Age: " );
	while (!VI) {
		if (scanf("%s", students->age) != 1 || !My_isdigit(students->age)) {
			printf("Invalid input for age. Please try again (only digits): ");
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

	VI = 0;
	printf("Enter your Password: ");
	while (!VI) {
		if (scanf("%s", students->password) != 1) {
			printf("Invalid input. Please try again: ");
			while (getchar() != '\n');
		} else
			VI = 1;
	}

	int fd;
	fd = open("user_data.txt", O_WRONLY | O_CREAT | O_APPEND, 0777);
	if (fd == -1) {
		perror("open");
		free(students->fname);
		free(students->lname);
		free(students->password);
		free(students->email);
		free(students->age);
		free(students);
		return i--;
	}

	My_putchar(fd,"First name : ", strlen("First name : "));
	My_putchar(fd, students->fname, strlen(students->fname));
	write(fd, "\n", 1);
	My_putchar(fd,"Last name : ", strlen("Last name : "));
	My_putchar(fd, students->lname, strlen(students->lname));
	write(fd, "\n", 1);
	My_putchar(fd,"Age : ", strlen("Age : "));
	My_putchar(fd, students->age, strlen(students->age));
	write(fd, "\n", 1);
	My_putchar(fd,"Email : ", strlen("Email : "));
	My_putchar(fd, students->email, strlen(students->email));
	write(fd, "\n", 1);
	My_putchar(fd,"Password : ", strlen("Password : "));
	My_putchar(fd, students->password, strlen(students->password));
	write(fd, "\n", 1);
	write(fd, "\n", 1);

	free(students->fname);
	free(students->lname);
	free(students->password);
	free(students->email);
	free(students->age); 
	free(students);

	close(fd);
	return i;
}
