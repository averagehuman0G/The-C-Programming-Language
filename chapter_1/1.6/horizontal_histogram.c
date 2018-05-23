#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
	int c;
	int numOfChars = 0;
	/* define an array that tracks words up to 15 chars */	
	int charsInWords[10];
	/* init the array with all 0s */
	for(int i = 0; i < 10; i++) {
		charsInWords[i] = 0;
	}

	int state = IN; 

	while ( (c = getchar()) != EOF) {
		if ( c == ' ' || c == '\t' || c == '\n') { 	
			state = OUT;
			if(numOfChars > 0)
				charsInWords[numOfChars - 1]++;
			numOfChars = 0;
		}
		else {
			state = IN;
			numOfChars++;
		}
	}
	if(numOfChars > 0) 
		charsInWords[numOfChars - 1]++;
	/* print the histogram here */

	/* all data has been collected */
	printf("\n Frequency of words containing up to 10 words \n");
	for(int i = 0; i < 10; i++) {
		printf("%d |", i + 1);
		for(int j = 0; j < charsInWords[i]; j++) {
			printf("-");
		}
		printf("\n");
	}
}
