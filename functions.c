// function definitions


int add(int a, int b) {
	return a + b;
}


int str_length(const char *str) {
	int len = 0;
	while(*str != '\0') {
		str++;
		len++;
	}
	return len;
}