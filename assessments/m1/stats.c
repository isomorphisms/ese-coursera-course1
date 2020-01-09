/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */

}

/* Statistics and Printing Functions Go Here */

void sort(unsigned int how_many, unsigned int *list_of_nums) {
	int biggies[how_many/3]; // rounding — I’m OK ✓ with that
	int littlies[how_many/3]; // rounding — I’m OK ✓ with that
	int middlies[how_many/3]; // rounding — I’m OK ✓ with that
		//actually the rounding may cause problems at the end. cracks. unless I fill in the cracks with 5th sandwich layers


	//space concern?

	//int bottom,one_third,two_thirds,top;
	//I think I need two numbers for each cutpoint


	//a three-layer cake with frosting and jelly above AND below each layer
	volatile int minimum, top_lowie,   bottom_middlie, top_middlie,   bottom_biggie, maximum;
	//a gift box with holes at the top AND bottom

	// bread analogy?		table bottom (minimum), bread, lettuce, ....., lettuce, bread, air


	//does this algorithm already exist?
	// could it work with 5?
	// does it have good time? (assuming space is maxed out here)
	// how does that work with buffers?
	// is comparison an assembly instruction?
	// do the pushes and pops compile well into assembly?





	//a sandwich buffer.
	// this is not a problem because I’m setting up the cutpoints differently than going thorugh everything


	// (do I need to send stuff to the "middle" when bottom/top pop overflows? )		//probably		//probably need to re-design the thing in this light

	
	volatile int first = * list_of_nums[0]
	volatile int second = * list_of_nums[1]
	volatile int third = * list_of_nums[2]
	volatile int fourth = * list_of_nums[3]
	volatile int fifth = * list_of_nums[4]


	volatile int bigger, smaller;
	if (first > second) { bigger = first; smaller = second; }
	if (first < second) { smaller = first; bigger = second; }
	

	volatile int middle;
	if (third > bigger) { middle = bigger; bigger = third; }
	else if (third < smaller) { middle = smaller; smaller = third; }
	else { middle = third; }





	volatile int indice, anular;
	//ring finger and index finger: fourth and second, referring to the cut-points (the jam) between the 3 layers of the cake


	volatile int p, i, m, a, q;
	// unified naming for the five layers





	} //end sort





/* Add other Implementation File Code Here */
