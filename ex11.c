#import <stdio.h>

// while (TEST){
//  CODE;
// }

int main (int argc, char *argv[])
{

	int i = 0;

	while (i < argc){
		printf("Argument %d: %s\n", i, argv[i]);
		i++;
	}

	char *states[] = {
		"Cali", "Fla", "GA", "AL"
	};

	// int num_states = 4;
	i = 3;

	while (i > -1){
		printf("State %d: %s\n", i, states[i]);
		i--;
	}

	return 0;
}
