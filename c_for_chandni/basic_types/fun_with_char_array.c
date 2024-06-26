/*
	showing you the power of macros :p
	command: gcc -o fun.exe fun_with_char_array.c
	command: .\fun.exe
*/

#include <stdio.h>
#define string char *

int main(void) {
	string what_chandni_deserves = "the world"; // tring looks like a type doesnt it? but we know it doesnt exist in C
	// we will learn about this as well!!
	printf("You deserve %s, my adorable little muffin.\r\n", what_chandni_deserves);

	return 0;
}
