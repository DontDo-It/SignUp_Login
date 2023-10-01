int My_isalpha(char *str) {
	while (*str) {
		if (!isalpha(*str)) {
			return 0; 
		}
		str++;
	}
	return 1;
}