#include <stdio.h>

int main()
{
	int c;
	while(( c = getchar()) ) {
		printf("THE EOF IS %d", EOF);
	 
		printf("%d", getchar());

	}
}
