#include <stdio.h>

int main() {
    /* We are creating a histogram of alphachars, digits, whitespace, and others - semicolons - */
	int c, i, nwhite, nother, chars, digits;
    nwhite = nother = chars = digits = 0;
	int typesOfChars[4];
    /* This array stores a value at each part in the array */
    /* At [0] we have the value of how many characters were alphacharacters */
	for( i = 0; i < 4; i++) {
		typesOfChars[i] = 0;
	}
	
	while ( (c = getchar()) != EOF) {
        /* coutns the whitespace */
		if ( c == ' ' || c == '\t' || c == '\n') {
            nwhite++;
		}
        /* counts digits */
		else if (c >= '0' && c <= '9') {
			digits++;
		}
        /* counts alpha chars */
        else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            chars++;  
        }
        else 
            nother++;
     
	}
    typesOfChars[0] = nwhite;
    typesOfChars[1] = digits;
    typesOfChars[2] = chars;    
    typesOfChars[3] = nother;
    

	/* Print the vertical histogram here */

	printf("\n Frequency of characters whitespace(w), letters(l), digits(d), and the rest(0).\n\n\n");
    

    /* find out the max value to find the height of the histogram */
	int MAX_VAL = 0;	

	for( i = 0; i < 4; i++) {
		if(typesOfChars[i] > MAX_VAL) 
			MAX_VAL = typesOfChars[i];
	}	

	/* MAX_VAL IS OUR HEIGHT IN THE HISTOGRAM */
	/* This loop goes down from the top to bottom */
	for( i = MAX_VAL; i >= 0; i--) {
	    /* loop goes across the screen based on 10 characters*/	
		for( int j = 0; j < 4; j++) {
            /* checks the frequency*/
            /* if the frequency is equal to or greater than i than print a vertical bar */
			if( (typesOfChars[j] >= i + 1) )
				printf(" | ");
			else 
				printf("   ");
		}
		putchar('\n');
	}	
	printf(" _  _  _  _\n");
	printf(" w  d  c  o\n");
}

