#include <stdio.h>
#define TRUE 1
#define FALSE 0 

int main() {
	// did we place a space right before
	int spaceBefore = FALSE;
	int c;	
	
	while((c = getchar()) != EOF ) { 
		if( (c == '\t' || c == '\n' || c == '\r')) { 
			if (!spaceBefore) {
				putchar(' ');
			}
			spaceBefore = TRUE;
		} else if ( c != ' ' ) {
			putchar(c);
			spaceBefore = FALSE;
		}

		if( !spaceBefore && c == ' ') {
			putchar(' ');
			spaceBefore = TRUE;
		}
	}
	printf("done");
	return 0;
}
