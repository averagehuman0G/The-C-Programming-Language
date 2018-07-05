#include <stdio.h>
#define LINELIMIT 50
#define MAXLIMIT 1000

int aWhitespaceChar(char x) {
    if (x == '\t' || x == ' ') return 1;
    return 0;
}

void printOutput(char arr[]) {
    printf("\n----------------");
    printf("\n%s\n", arr);
    printf("----------------\n");
}

int main() {
    char entireoutput[MAXLIMIT];
    char currline[LINELIMIT];
    int nextIndexEntireOutput = 0;
    int nextIndexCurrLine = 0;
    int c;

    while (( c = getchar() ) != EOF) {
        if (nextIndexCurrLine == 0 && c == '\n') continue;
        if (c == '\n') {
            if (aWhitespaceChar(currline[nextIndexCurrLine - 1])) {
                for (int i = nextIndexCurrLine - 1; i >= 0; i--) {
                    nextIndexEntireOutput--;
                    if (!aWhitespaceChar(currline[i])) {
                        entireoutput[++nextIndexEntireOutput] = '\n';
                        entireoutput[++nextIndexEntireOutput] = '\0';
                        break;
                    }
                }
            }
            nextIndexCurrLine = 0;
            currline[nextIndexCurrLine] = '\0';
        } else {
            currline[nextIndexCurrLine++] = c;
            entireoutput[nextIndexEntireOutput++] = c; 
        }
    }
    entireoutput[nextIndexEntireOutput] = '\0';
    printOutput(entireoutput);
}
