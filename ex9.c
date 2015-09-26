// C stores strings as arrays of bytes, with a 
// '\0' (nul) byte at the end (indicating termination)
#include <stdio.h>

int main(int argc, char *argv[])
{

	int numbers[4] = {0};
	printf("numbers: %d %d %d %d\n", 
		numbers[0], numbers[1],
		numbers[2], numbers[3]);
	printf("Sizeof(numbers): %ld\n",
		sizeof(numbers));

	// try something different with the numbers:
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;
	printf("Manually-set numbers: %d %d %d %d\n",
		numbers[0], numbers[1],
		numbers[2], numbers[3]);


	char name[4] = {'a', 'a', 'a', 'a'};
	// fills the rest of the array with '\' and
	// since char == string --> terminates after 'a'
	// even though we said give it 4 spaces
	// TO C: THERE IS NO DIFFERENCE BETWEEN
	// A STRING AND AN ARRAY OF CHARACTERS.
	printf("name each: %c %c %c %c \n",
		name[0], name[1],
		name[2], name[3]);
	// print name as a string
	printf("name: %s\n", name);
	printf("Sizeof(name): %ld\n", sizeof(name));

	// Proper way to make a string literal
	char *another = "Kev";
	printf("Another: %s\n", another);
	printf("ANother each: %c %c %c %c\n",
		another[0], another[1],
		another[2], another[3]);

	return 0;
}
