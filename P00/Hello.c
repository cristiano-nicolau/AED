/*
** Hello world program
*/
#include <stdio.h>
int main() {
	// Create a string
	char firstName[30];
	int age;
	int number;
	// Ask the user to input some text
	printf("Enter your first name: \n");

	// Get and save the text
	scanf("%s", firstName);
	
	printf("Enter your age: \n");
	scanf("%i",&age);
	
	printf("Enter your number: \n");
	scanf("%i",&number);

	// Output the text
	printf("Hello %s.\n", firstName); 
	printf("Age %d:\n",age);
	printf("Number %d:\n",number);
	
	return 0;
}
