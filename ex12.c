#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;

	if (argc == 1){
		printf("You only have one argument, idiot.\n");
	} else if (argc > 1 && argc < 4){
		for (i = 0; i < argc; i++){
			printf("Arg %d: %s\n", i, argv[i]);
		}
	} else {
		printf("You have too many too many arguments, idiot.\n");
	}

	return 0;
}
