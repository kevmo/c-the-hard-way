// callbacks! via FUNCTION POINTERS:
// int (*POINTER_NAME)(int a, int b){}

// the usual includes 
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>


// kill the program
// const - not modifiable
void die(const char *message)
{
	// "errno" = static memory location
	// (error number)
	// at startup --> value stored is 0
	// lib funcs only store values greater than 0.
	if(errno){
		perror(message);
	} else {
		printf("ERROR: %s\n", message);
	}

	exit(1);
}

// typedef = fake type (making a fn pointer)
// --> so here, typedef is created a type called
// "compare_cb", and it is a pointer
typedef int (*compare_cb)(int a, int b);

/* just bubble sort things .~.*~*~*~*~! */
// calling an param called `cmp` giving it the fake
// type of compare_cb
int *bubble_sort(int *numbers, int count, compare_cb cmp)
{
	// set up all the variables to be used
	int temp = 0;
	int i = 0;
	int j = 0;
	// get your result array
	int *target = malloc(count * sizeof(int));
	if(!target) die("Memory error");

	// memcpy (destination, source, n bytes)
	memcpy(target, numbers, count * sizeof(int));

	for(i = 0; i < count; i++){
		for (j=0; j < count - 1; j++){
			if (cmp(target[j], target[j+1]) > 0){
				temp = target[j + 1];
				target[j + 1] = target[j];
				target[j] = temp;
			}
		}
	}

	return target;
}

// 3 comparison callbacks: 

// least to greatest
int sorted_order(int a, int b)
{
	return a - b;
}

// greatest to least
int reverse_order(int a, int b)
{
	return b - a;
}

int strange_order(int a, int b)
{
	if(a == 0 || b ==0){
		return 0;
	} else {
		return a % b;
	}
}

void test_sorting(int *numbers, int count, compare_cb cmp)
{
	int i = 0;
	int *sorted = bubble_sort(numbers, count, cmp);

	if(!sorted) die("Failed 2 sort.");

	for (i = 0; i < count; i++){
		printf("%d ", sorted[i]);
	}
	printf("\n");

	free(sorted);

	// just some weird stuff to convert the pointer
	// unsigned char *data = (unsigned char *)cmp;

	// for(i = 0; i < 25; i++){
	// 	printf("%02x:", data[i]);
	// }

	// printf("\n");
}

int main(int argc, char *argv[])
{
	if(argc < 2) die("USAGE: ex18 4 3 1 5 6");

	int count = argc - 1;
	int i = 0;
	char **inputs = argv + 1;

	int *numbers = malloc(count * sizeof(int));
	if(!numbers) die("Memory error.");

	for(i = 0; i < count; i++){
		numbers[i] = atoi(inputs[i]);
	}

	test_sorting(numbers, count, sorted_order);
	    test_sorting(numbers, count, reverse_order);
	    test_sorting(numbers, count, strange_order);

	free(numbers);

	return 0;
}
