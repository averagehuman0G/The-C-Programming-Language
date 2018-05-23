#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
	int c, i;
	int numOfChars = 0;
	int state = IN;
	int charsInWord[15];
    /* This array stores a value at each part in the array */
    /* At [0] we have the value of how many words are made up of only one character */
	for( i = 0; i < 15; i++) {
		charsInWord[i] = 0;
	}
	
	while ( (c = getchar()) != EOF) {
		if ( c == ' ' || c == '\t' || c == '\n') {
			state = OUT;
			if(numOfChars > 0)
				charsInWord[numOfChars - 1]++;
			numOfChars = 0;
		}
		else {
			state = IN;
			numOfChars++;
		}
	}
	if ( numOfChars > 0)
		charsInWord[numOfChars - 1]++;

	/* Print the vertical histogram here */

	printf("\n Frequency of words containing up to 10 characters\n\n\n");
    

    /* find out the max value to find the height of the histogram */
	int MAX_VAL = 0;	

	for( i = 0; i < 15; i++) {
		if(charsInWord[i] > MAX_VAL) 
			MAX_VAL = charsInWord[i];
	}	

	/* MAX_VAL IS OUR HEIGHT IN THE HISTOGRAM */
	/* This loop goes down from the top to bottom */
	for( i = MAX_VAL; i >= 0; i--) {
	    /* loop goes across the screen based on 10 characters*/	
		for( int j = 0; j < 15; j++) {
            /* checks the frequency*/
            /* if the frequency is equal to or greater than i than print a vertical bar */
			if( (charsInWord[j] >= i + 1) && ( charsInWord[j] != 0 ) )
				printf(" | ");
			else 
				printf("   ");
		}
		putchar('\n');
	}	
	printf(" -  -  -  -  -  -  -  -  -  -  -  -  -  -  -\n");
	printf(" 1  2  3  4  5  6  7  8  9 10 11 12 13 14 15\n");
}

