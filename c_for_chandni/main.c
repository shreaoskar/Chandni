#include <stdio.h>

int main() {
	printf("Hello, Chandni!\n");

	int two = 2;
	int three = 3;
	int two_plus_three = two + three; // add
	int three_minus_two = three - two; // sub
	printf("two + three: %d\n", two_plus_three);
	printf("three - two: %d\n", three_minus_two);
	return 0;
}
// command: gcc -o main.exe main.c
//
// gcc is your compiler, it is making your code executable
// -o is a "compiler flag" telling the compiler
// that u want an object(get it? o for object) called main.exe
// from the file main.c
//
// i am on linux so to run the program i use ./main
// on windows it will probrably be .\main.exe
