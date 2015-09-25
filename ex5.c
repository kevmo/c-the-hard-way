// import functions from header files. .h file extension --> header
#include <stdio.h>

// C programs run the function named "main" after loading.
// Is supposed to return an int.
// Takes two paramenters:
//     - an int for the argument count (argc)
//     - an array of char * strings for the arguments 
int main(int argc, char *argv[])
/* a programming block {}. In python, you
 * used ':' and indented. Other languages have
 * 'begin' or 'do' and 'end'
*/
{
	// Strong typing in variable declarion:
	// <type> <name> = <value>;
	// in C, statements (except for logic) end with a semicolon
	int distance = 100;

	printf ("You are %d miles away. \n", distance);

	// Unix likes return codes!
	return 0;
}
