#include <stdio.h> // printf
#include <assert.h> // assert
#include <stdlib.h> // free, malloc
#include <string.h> // strdup

// Structs are C's classes... their "compound data type"
struct Person {
	char *name;
	int age;
	int height;
	int weight;
};

// initialization method for the Person struct
struct Person *Person_create(char *name, int age, int height, int weight)
{
	// get your memory from the metal
	struct Person *who = malloc(sizeof(struct Person));
	// NULL = unset or invalid pointer.
	// Make sure you've got a valid piece of memory
	assert(who != NULL);

	// initialize fields
	who->name = strdup(name); //like malloc, copy string
	who->age = age;
	who-> height = height;
	who->weight = weight;

	return who;
}

void Person_destroy(struct Person *who)
{
	assert(who != NULL);
	// do it or you gots memory leaks
	free(who->name);
	free(who);
}

void Person_print(struct Person *who)
{
	printf("Name: %s\n", who->name);
	printf("\tAge %d\n", who->age);
	printf("\tHeight %d\n", who->height);
	printf("\tWeight %d\n", who->weight);
}

int main(int argc, char *argv[])
{
	// make 2 people
	struct Person *kevin = Person_create(
		"Kevin Moore", 31, 67, 175);

	struct Person *marshall = Person_create(
		"Betty Marshall", 3, 30, 65);

	//print them out and where they are in memory;
	printf("Joe is at memory location: %p\n", kevin);
	Person_print(kevin);

	printf("Betty is at memory location: %p\n", marshall);
	Person_print(marshall);

	//make everyone age 10 years
	kevin->age += 20;
	kevin->height -= 2;
	kevin->weight -= 10;
	Person_print(kevin);

	marshall->age +=10;
	marshall->height -=5;
	marshall->weight -= 10;
	Person_print(marshall);

	// destroy and free the memory
	Person_destroy(kevin);
	// Person_destroy(marshall);

	return 0;

}
