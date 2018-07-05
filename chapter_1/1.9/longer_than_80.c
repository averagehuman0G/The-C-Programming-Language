#include <stdio.h>
#define UPPERLIMIT 1000
#define LIMIT 80

int getlinelen(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
    int len;
    char line[UPPERLIMIT];

    while( (len = getlinelen(line, UPPERLIMIT)) > 0) {
        if(len > LIMIT) {
            printf("%s", line);
        }
    }
    return 0;
}

int getlinelen(char arr[], int limit) {
    int i, c;
    for(i = 0; i < limit - 1 && (c=getchar()) != EOF; ++i) {
        arr[i] = c;
        if(c == '\n') {
            ++i;
            break;
        }
    }
    arr[i] = '\0';
    return i;
}

void copy(char to[], char from[]) {
    int i = 0;
    while( (to[i] = from[i]) != '\0')
        ++i;
}
