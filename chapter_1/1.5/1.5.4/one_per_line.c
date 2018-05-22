#include <stdio.h>

int main() {
	int c;
	// Have we already placed a new line?
	int previousIsNL = 0; 		
	
	while( (c = getchar() ) != EOF) {
		if( ( c == ' ' || c == '\t' ) && !previousIsNL) {
			putchar('\n');	
			previousIsNL = 1;
		} else if (c == ' ' || c == '\t' ) {
			continue;
		} else { 
			putchar(c);	
			previousIsNL = 0;
		}
	}

}
