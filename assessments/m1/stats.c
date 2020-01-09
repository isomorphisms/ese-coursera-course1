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


	volatile int big, small;
	if (first > second) { big = first; small = second; }
	if (first < second) { small = first; bigg = second; }
	

	volatile int middle;
	if (third > bigger) { middle = big; big = third; }
	else if (third < small) { middle = small; small = third; }
	else { middle = third; }





	volatile int indice, anular;
	//ring finger and index finger: fourth and second, referring to the cut-points (the jam) between the 3 layers of the cake


	volatile int p, i, m, a, q;
	// unified naming for the five layers



	//hmm, should I really have been using maximum and minimum?
	//I didn't want to collide with p and q yet....
	//and BUFFER-wise/PAGE-wise this space constraint should not be binding...
	//it's just about writing clear code with a shit ton of comparison operators and names for the spaces between my fingers...
	if (fourth > big) { maximum = fourth; }
	if (fourth < small) { minimum = fourth; }
	//need some kind of double-else??  or switch to switches...


	//malcolm in the middle...
	if (fourth < big && fourth > small) {
		if (fourth > middle) { i = fourth; }
		//stuff m = middle so I have something to index the fifth against (count 4 fingers on hand)
		if (fourth < middle) { a = fourth; }
		// hmm, edge case....don’t feel like dealing with == today, so screw you. (which, I guess, means screw myself...)
		} // end fourth in the middle





	// how to check for exhaustion in general? this seems so bug prone.... if I’m just the least bit tired, interrupted, forgetful………






	//existence of maximum is a FLAG for maximum>big
	//existence of minimum is a FLAG for minimum<small
	//I should maybe unify those under pimaq.....but I made minimum and maximum for I think this reason......
	if (fifth > big) { i = big; p = fifth; }
	if (fifth < small) { q = fifth; a = small; }

	//double else
	if (fifth < big && fifth > small) {
		//so fifth will be one of i,m,a
		//but only one of a or i will exist, depending where the fourth fell

		//existence of i is therefore a FLAG for fourth > middle before
		//existence of a is therefore a FLAG for fourth < middle before
		
		 }	//end dealing with "the fifth element", starring Bruce Willis and Milla Jovovich





	//now, use these 5 points to define the 3 layer cakes and cutpoints to be used later



	//now, in a loop, push and pop things down-onto and up-under the layers of the cake
	// see previous comments, there may be a smarter way to write this, either space-wise or code-wise

	



// is there a way to _generate code_ that automates writing this kind of thing by hand? rather than always sending to the 
// need to check again about speed of comparison operators --- I'm assuming they're wicked fast in assembly














	// if newbie > p
		//pop newbie onto top layer cake

	// if p > newbie > i
		//push newbie up under top layer cake

	// if i > newbie > m
		//pop newbie on top of middle layer cake

	// if m > newbie > a
		//push newbie up under the middle layer cake

	// if a > newbie > q
		//pop newbie down on top of the bottom layer cake

	// if q > newbie
		//push newbie up under the bottom layer cake

	} //end sort





/* Add other Implementation File Code Here */
