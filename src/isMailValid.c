#include "mylib.h"

int isEmailValid(char *email)
{
	char *atSign = strrchr(email, '@');
	char *dotCom = strstr(email, ".com");

	return (atSign != NULL && dotCom != NULL && atSign < dotCom);
}