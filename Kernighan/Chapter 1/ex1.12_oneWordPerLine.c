#include <stdio.h>

#define IN 1 /*inside a word*/
#define OUT 0 /*outside a word*/

/*print the input one word per line.*/
void main()
{
    int c;
    int state;
    state = OUT;
    
    printf("Enter the input\n");
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
            printf("\n");
            
        }
        else if (state == OUT) {
            state = IN;
            putchar(c);
            state = OUT;
        }
    }
}
