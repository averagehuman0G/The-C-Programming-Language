#include <stdio.h>
// Verify that getchar() != EOF is either 0 or 1
int main()
{
	int c;
	while(c = getchar() != EOF) {
		printf("\n%d\n", c );	
	}
	printf("%d\n", c );
}
