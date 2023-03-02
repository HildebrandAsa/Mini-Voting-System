/*
 ============================================================================
 Name        : linked_list.c
 Author      : �sa
 Version     :
 Copyright   : Your copyright notice
 Description : linked_list
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct Pair {
		int nr;
		struct Pair *next; //Points to next element in list

}Pair;



int main() {

	Pair nr5 = {5,NULL};
	Pair nr4 = {4, &nr5};
	Pair nr3 = {3, &nr4};
	Pair nr2 = {2, &nr3};
	Pair nr1 = {1, &nr2};

	//Create a pointer to a Pair
	Pair *iterator;
	//Make this pointer point to the first element
	iterator = &nr1;

	while(1)
	{
		//Point the number of the element we are pointing to
		printf("%d ", iterator->nr);
		if (iterator->next != NULL)
		{
			iterator = iterator->next;
		}
		else //if there are no more elements
		{
			break;
		}
	}


//	Pair nr = {4, &nr5} is equal to:
//	Pair nr;
//	nr.nr = 4;
//	nr.next = &nr5;


	return EXIT_SUCCESS;
}
