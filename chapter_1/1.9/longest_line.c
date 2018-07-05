#include <stdio.h>

#define MAXLINE 1000
int getlinelen(char line[], int maxline);
void copy(char to[], char from[]);

int main() {

    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];    
    
    max = 0;

    while( (len = getlinelen(line, MAXLINE)) > 0 ) {
        if(len > max) {
            max = len;
            copy(longest, line);
        }
    }

    if(max > 0)
        printf("%s", longest);

    return 0;
}

int getlinelen(char s[], int lim) {
    int i, c;

    for(i = 0; i < lim - 1 && ( c = getchar() ) != EOF ; ++i) { 
        s[i] = c;
        //  because we are counting lines if..
        //  we hit a new line character than we increase the size and break out of the loop
        if(c == '\n') {
            ++i;
            break;
        }
    }
    // the last part of the string will always be a terminating character
    s[i]  = '\0';

    return i;
}

void copy(char to[], char from[]) {
    int i = 0;
    while ( (to[i] = from[i]) != '\0' ) 
        ++i;
}
