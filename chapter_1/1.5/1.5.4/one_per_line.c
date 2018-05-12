#include <stdio.h>
int main() {
	int c;
	

	while( (c = getchar()) != EOF) {
		if (c == '\n') { 
			putchar('\n');
			putchar('\\');
			putchar('n');
			putchar('\n');
		}
		else if( c == ' ' || c == '\t' )
			putchar('\n');	
		else  
			putchar(c);	
		
	}

}
