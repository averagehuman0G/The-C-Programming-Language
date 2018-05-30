#include <stdio.h>
#define MAXLINE 10

int getlinelen(char line[], int maxline);

void copy(char to[], char from[]);

int main() {
    /* store a char */
    int c;
    /* store the length of the line in this variable */
    int len = 0;
    /*store the max length in this variable */
    int max = 0;
    /* store the current and max line in the respective arrays*/
    char line[MAXLINE];
    char longest[MAXLINE];    

    while( (len = getlinelen(line, MAXLINE)) > 0 ) {
        // if the last char is not a new line
        if(line[len - 1] != '\n') {
            //loop until an end of file or newline
            while( (c = getchar()) != EOF && c != '\n') {
                ++len; 
            }
            ++len;
        }
        // if the len is bigger than the current max then set it as the max
        if(len > max) {
            max = len;
            copy(longest, line);
        }
    }
    // there is a max
    if(max > 0) {
        putchar('\n');
        if(max >= MAXLINE) {
            printf("%s ... (characters have been truncated)\n", longest);
        }
        else {
            printf("%s \n", longest);
        }
        printf("The longest line was %d chars\n", max);
    }

    return 0;
}

int getlinelen(char s[], int lim) {
    int i, c;

    // loop until one before the limit and while the character is not an end of file
    // and not a newline either
    for(i = 0; i < lim - 2 && (( c = getchar() ) != EOF) && c != '\n'; ++i) { 
        s[i] = c;
    }
    //if the character is a new line add it to the end
    if(c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i]  = '\0';

    return i;
}

void copy(char to[], char from[]) {
    int i = 0;
    while ( (to[i] = from[i]) != '\0' && to[i] != '\n' ) 
        ++i;
}
