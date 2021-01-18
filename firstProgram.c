//first program : Hello World

#include <stdio.h>
#include <string.h>

char* decidePostface(int number);

int main(void){

	/*
	//print hello world to standard output
	printf("\"Hello World\"\n");
	*/

	// now we want to print hello world one character at a time
	
	//statement to be printed
	char* str = "Hello World!\n";
	int i = 0;

	//if a beginner, this will be understood later
	int num = 2;
	

	while(str[i] != '\0'){

		char postface[(num + 1)];
		strcpy(postface, decidePostface(i));

		printf("The %d%s character is %c\n", i, postface, str[i]);
		i++;
	}

	//lesson from fahrenheit conversion table; devide numbers as floats 
	//if you want a decimal or they get floored (integer division)


	//explicit return statement is optional in main function
	return 0;
}

//simple function to add postface to counter ; i.e. 1st, 2nd,...
char* decidePostface(int number){

	int startTeen = 10;
	int endTeen = 20;

	char* stEnd = "st";
	char* ndEnd = "nd";
	char* rdEnd = "rd";
	char* thEnd = "th";
	

	if((number > startTeen) && (number < endTeen)){
		return thEnd;
	}

	int lastDigit = number % 10;


	if(lastDigit == 1){
		return stEnd;
	}
	else if(lastDigit == 2){
		return ndEnd;
	}
	else if(lastDigit == 3){
		return rdEnd;
	}

	return thEnd;
}
