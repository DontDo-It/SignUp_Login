#ifndef MYLIB_H
#define MYLIB_H

int SignUp();
int menu();
void SignIn();
int password();
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <ctype.h>
#define MAX_LENGTH 100
void My_putchar(int fd, const char *str, int len);
int My_isdigit(char *str);
int isEmailValid(char *email);
struct credentials
{
	int *ID;
	char *fname;
	char *lname;
	char *age;
	char *email;
	char *password;
};



#endif
