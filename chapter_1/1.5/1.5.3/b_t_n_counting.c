#include <stdio.h>

int main() {
	int c;
	double blanks = 0;
	double tabs = 0;
	double newlines = 0;

	while( (c = getchar()) != EOF) {

		if( c == ' ') 
			++blanks;
		else if ( c == '\t')
			++tabs;
		else if ( c == '\n')
			++newlines;
	} 
	printf("\n \n \n --------------------------------------------\n " );
	printf(" \tblanks\ttabs\tnewlines\n");
	printf("%10.0f  %10.0f  %10.0f \n", blanks, tabs, newlines);
}
