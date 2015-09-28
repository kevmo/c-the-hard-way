//prints a group of people's ages in 3 different ways

#include <stdio.h>

int main(int argc, char *argv[])
{
	// set up 
	// create two arrays
	int ages[] = {23, 43, 12, 19, 1};
	char *names[] = {
		"Larry", "Moe", "Curly", "Brad", "Pitt"
	};

	// safely get the size of the ages
	int count = sizeof(ages) / sizeof(int);
	int i = 0;

	///-----------------------------

	// (1)INDEXING
	for (i=0; i < count; i++){
		printf("%s has %d years alive.\n", 
			names[i], ages[i]);
	}

	printf("-----------------\n");


	// ---------------------------
	// (2) POINTERS

	// set up points to the start of the arrays
	int *cur_age = ages;
	char **cur_name = names;

	for (i=0; i < count; i++){
		printf("%s is %d years old.\n", 
			*(cur_name+i), *(cur_age+i));
	}

	printf("-----------------\n");

	// ---------------------------

	// (3) Pointers are just arrays. Goddamn.
	for(i = 0; i < count; i++){
		printf("%s is %d years old, AGAIN\n", 
			cur_name[i], cur_age[i]);
	}

	printf("-----------------\n");

	//-----------------------------

	// (4) Pointers, in a stupid complex wizzay

	for(cur_name = names, cur_age = ages; 
		(cur_age < ages) < count; 
		cur_name++, cur_age++){
			printf("%s lived %d yurrs \n", *cur_name, *cur_age);
	}

	return 0;
}
