#include <stdio.h>

// our header file
#include "functions.h"

int main() {

	int a = 12, b = 13;

	printf("\n[ %d + %d = %d ]", a, b, add(a, b));

	const char *name = "deshrit";
	printf("\nLength of %s is %d.", name, str_length(name));

}