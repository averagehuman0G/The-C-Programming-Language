#include <stdio.h>
#define TRUE 1
#define FALSE 0 

int main() {
	int spaceBefore = FALSE;
	int encounterSpace = FALSE;
	int c;	
	
	while((c = getchar()) != EOF ) { 
		if( (c == '\t' || c == '\n' || c == '\r')) { 
			if (!encounterSpace && !spaceBefore) {
				putchar(' ');
			}
			encounterSpace = TRUE;
			spaceBefore = TRUE;
		} else if ( c != ' ' ) {
			putchar(c);
			encounterSpace = FALSE;
			spaceBefore = FALSE;
		}

		if( !encounterSpace && !spaceBefore && c == ' ') {
			putchar(' ');
			encounterSpace = TRUE;
			spaceBefore = TRUE;
		}
	}
	printf("done");
	return 0;
}
