#include <stdio.h>

int main(int argc, char *argv[])
{
	int distance = 1000;

	float power = 2.345f;

	double super_power = 56789.4532;

	// Single quotes for individual characters
	char initial = 'J';

	// Double quotes for strings.
	char first_name[] = "Kevin";
	char last_name[] = "Mrr";

	printf("You are %d miles away.\n", distance);
	printf("Increase power to %f!\n", power);
	printf("You have %f awesome super power levels.\n", super_power);
	printf("I have an initial: %c.\n", initial);
	printf("I have a first name of %s.\n", first_name);
	printf("I have a last name of %s.\n", last_name);
	printf("Mah whole name es %s %s. %s.\n", first_name, initial, last_name);

	return 0;
}
