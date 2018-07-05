#include <stdio.h>
#define MAXLIMIT 100 

void printAllChars(char arr[], int len) {
    printf("-------\n");
    for(int i = 0; i < len; i++) {
        if(arr[i] == '\n') {
            printf("\\n");
        } else {
            printf("%c", arr[i]);
        }
    }
    printf("\n-------\n");
}

void reverse(char string[], char reversed[], int len) {
    int stringLenCopy = len;
    int i;
    for(i = 0; i <= len; i++) {
       reversed[i] = string[--stringLenCopy]; 
    }
    reversed[i] = '\n';
    printAllChars(reversed, len);
}

int main() {
    char reversed[MAXLIMIT];
    char normalString[MAXLIMIT];
    int stringLen = 0;
    int c;
    while ((c = getchar()) != EOF && stringLen < MAXLIMIT - 2) {
        if(c == '\n') {
            reverse(normalString, reversed, stringLen);
            stringLen = 0;
            normalString[stringLen] = '\0';
        } else {
            normalString[stringLen++] = c;
        }
    }
}
