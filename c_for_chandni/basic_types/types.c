/*  to compile this code type
	gcc -o types.exe types.c
	this file is called types.c and we want a types.exe executable(see why the .exe?) file
	we can call the exe file anything you want but it is simpler to call it the same as the .c file
	try compiling it with a name of your own giving
	DO NOT forget the .exe in the command when you try your name
	example:
	if we want to call it chandni, we would write
	gcc -o chandni.exe types.c
*/

#include <stdio.h>
#include <stdbool.h> // required for boolean values

int main(void) {
	/*
	There are a few basic types in C:
	char: one character
	int: integers
	float: numbers with decimals
	bool: boolean values true and false
	etc

	plus two spicy new things for you:
	arrays and,
	string: an array of characters
	*/
	int a = 5; // variable a of type int is being assigned the value of 5
	int b = 10; // variable b of type int being assigned the value of 10

	int added_value = a + b; // adding the values of a and b and assigning that to added_value
	// this is like writing added_value = 5 + 10
	int multiplied_value = a * b; // * (star) is the mutiplication operator in C and in most other languages as well
	int divided_value = b / a; // "/" is the division operator

	printf("value of a: %d\r\n", a); // printf() is the function from stdio.h
	// we put strings in "" (double quotes), the %d tells the compiler we want to put an interger in the string
	// and then we give the function the variable a for it to put it in the string
	// similarly
	printf("value of b: %d\r\n", b);

	// we can put multiple variables as well, but in order
	printf("%d multiplied by %d gives %d\r\n", a, b, multiplied_value);
	// you can change the order in which you put a b and multiplied_value to see how that changes things
	// AND REMEMBER THE CHANGES WILL ONLY SHOW AFTER YOU COMPILE YOUR CODE AGAIN
	// if you change your code and just rerun your program nothing will change in the output

	//similarly
	printf("%d divided by %d gives %d\r\n", b, a, divided_value);

	// we could have easily done something like
	printf("%d divided by %d gives %d\r\n", b, a, b / a);
	// but i am sure you see why the way i want you to do things the other way. writing divided_value is clearer and nicer to read

	// if you want to change a value just update the variable
	a = 8; // from this line onwards a will have the value of 8
	// we are not writing int a = 8; because the compiler already knows that the variable a is an integer from the first time you defined it
	// we define the type of the variable only the first time we initialize and assign a value to it

	// Characters
	char character = 'D'; // notice the '' (single quotes)? we denote char type with single quotes
	printf("before change: character: %c\r\n", character);
	character = '9';
	printf("after change: character: %c\r\n", character);
	/*  Note that '9' is not equal to 9.
		A char can be anything you can see on your keyboard and more
		it is something you type or write
		you cannot do anything math related with a numeric digit of type char
		for maths, you need numbers.. int, float
		*/
	float pi = 3.14;
	float e = 2.718;

	// similar to int but with decimals
	float add_float = pi + e;
	float minus_float = pi - e;
	float multiplied_float = pi * e;
	float divided_float = pi / e;

	printf("%f plus %f gives %f\r\n", pi, e, add_float);
	printf("%f minus %f gives %f\r\n", pi, e, minus_float);
	printf("%f multiplied by %f gives %f\r\n", pi, e, multiplied_float);
	printf("%f divided by %f gives %f\r\n", pi, e, divided_float);

	// we will talk more about floats when we try to mix them with ints
	// the main behaviors lie there.

	// Booleans: true and false
	// NOTE: to use booleans, you need the stdbool.h file to be included on the top of your file
	bool is_true = true;
	bool is_false = false;
	// how we can assign boolean values similarly to the other types
	// we will talk about booleans when we learn about control flow statements
	// i will give you an example anyways, because i know you are curious about what control flow statements are
	if (true) {
		// do something
	} else {
		// do something else
	}; //note the semicolon
	// this is an if else control flow statement, we are controlling the flow of what happens in our programs
	// based on whether the statement we provide is true or not
	// we will learn about these later

	/*  before we learn about strings, we ought to learn about arrays.
		array definition:
		Array in C can be defined as a method of clubbing multiple entities of similar type into a larger group.
		These entities or elements can be of int, float, char, etc.

		Strings are arrays of chars in C.
		Basically a string is just a list of consecutive chars.
	*/

	// Arrays of different types
	int array_int[3] = {1, 2, 3}; // int denotes that the values will be integers
	// the [] (square bracket) denotes that it is an array
	// the number inside the square brackets denotes how many elements can be in that array
	// NOTE: once we define an array we cannot change its no.of elements, if we need more space, we need to make a new array of bigger size
	// the values within the {} (curly brackets) are the values of the array.

	// VERY IMPORTANT NOTE:
	// In computer science, most languages start indexing arrays from 0(in maths we start at 1).
	// so the zeroth element of array_int[] has the value 1.

	// verifying
	printf("zeroth element: %d\r\n", array_int[0]);
	printf("first element: %d\r\n", array_int[1]);
	// can you write the printf function call that displays the second element of array_int[] ? Please attempt.

	char array_char[6] = {'C', 'h', 'a', 'n', 'd', 'i'};
	// now i will write a loop that writes chandni with printf
	printf("Who is the prettiest girl in the whole world? ");
	for (int i = 0; i < 6; i++) {
		printf("%c", array_char[i]);
	};
	printf("!!\r\n");
	// do not worry about what this is doing, just focus on the output
	// hmm so we can call out your name if we go through the array and print every character one by one
	// lets see how to do it in C

	// Strings
	// C does not have a premitive type called string, but the rule is that it is null terminated (\0)
	// So a string "Chandni" is actually Chandni\0
	// NOTE: \0 is one character
	// Functions will know when the string has reached its end when the function finds a \0 (null) character

	char my_love[] = "Chandni"; // the compiler will figure out the length and note the double quotes
	printf("Who is the best girl in the world? %s!!!!\r\n", my_love);
	/*  working with strings is massively error-prone in C,
		other languages have a primitive string type but C doesn't.
		you will be learning about strings a lot soon.
	*/

	printf("\r\n I am proud of you, my love.\r\n");
	return 0; // always at the end of your program
}
