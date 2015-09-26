// '\0' is a null character - lol wut?
// In most languages, strings and byte arrays are different. 
// C treats strings as arrays of bytes... only the various
// printing functions detect a difference.

#include <stdio.h>

// argc = argument count
// argv = argument vector ( a vector is a one-dimensional
// array, and argv is a one-dimensional array of strings)
int main (int argc, char *argv[])
{

	// WARNING: On some systems, you may have to change the 
	// %ld in this code to a %u since it will use unsigned ints

	//
	// int
	//

	int areas[] = {10, 14, 12, 11, 20};
	// sizeof() --> how big something is in bytes
	printf("The size of an int: %ld\n", sizeof(int));
	printf("The size of areas (int[]): %ld\n", sizeof(areas));
	printf("The number of ints in areas: %ld\n", 
		sizeof(areas)/sizeof(int));
	printf("The 1st area is: %ld\n", sizeof(areas[0]));
	printf("The 2nd area is: %ld\n", sizeof(areas[10]));

	//
	// char
	//

	// the following are identical methods of creating 
	// a character array
	char name[] = "kevin";
	char full_name[] = {
		'K', 'e', 'v', 'i', 'n',
		' ', 'J', '.', ' ',
		'M', 'o', 'o', 'r', 'e', '\0'
	};

	printf("The size of a char: %ld\n", sizeof(char));
	printf("The size of my name: %ld\n", sizeof(name));
	printf("The number of chars in my name: %ld\n", 
		sizeof(name) / sizeof(char));
	printf("The size of my full name: %ld\n", sizeof(full_name));
	printf("The number of chars in my full name: %ld\n",
		sizeof(full_name) / sizeof(char));
	printf("name=\"%s\" and full_name=\"%s\"\n",
		name, full_name);

	return 0;
}
