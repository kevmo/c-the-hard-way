#include <stdio.h>

// for-loop format:
// for (INITIALIZER; TEST; INCREMENETER){
//     CODE;
// }

// INITIALIAZER = code running to set up the loop
// keeps going until test returns false (0)

int main(int argc, char *argv[])
{
	int i = 0;
	int v = 0;

	//go through each string in argv
	// skip argv[0] bc it's the name of the file
	for (i =1, v = 1; i < argc, v < argc; i++, v++){
		printf("arg %d: %s\n", i, argv[i]);
		printf("arg %d: %s\n", v, argv[v]);

	}

	// arrays of string
	char *states[] = {
		"California", "Florida",
		"Georgia", "Alabama", NULL
	};
	int num_states = 5;

	for (i=0; i < num_states; i++){
		printf("State %d: %s\n", i, states[i]);
	}

	return 0;
}