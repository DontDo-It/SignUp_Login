#ifndef MYLIB_H
# define MYLIB_H
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <fcntl.h>
# include <ctype.h>

#define MAX_LENGTH 100

typedef struct 
{
	int		*ID;
	char	*fname;
	char	*lname;
	char	*age;
	char	*email;
	char	*password;
	char	**clues;
}credentials;

int		SignUp();

int		menu();

void	SignIn();

int		password();

void	My_putchar(int fd, const char *str, int len);

int		My_isdigit(char *str);

int		isEmailValid(char *email);

int		My_isalpha(char *str);

#endif
