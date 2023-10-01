#include "mylib.h"

int My_isalpha(char *str) {
	while (*str) {
		if (0 == isalpha(*str)) {
			return 0; 
		}
		str++;
	}
	return 1;
}