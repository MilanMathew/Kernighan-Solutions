#include <stdio.h>

#define OUT 0 /*outside word*/
#define IN 1 /*inside word*/
/*Histogram of the lengths of words in input.*/
void main()
{
    int ch, state, count;
    count = 0; 
    state = OUT;
    
    printf("Enter the input\n");

    while ((ch = getchar()) != EOF) {
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            state = OUT;
            printf("%4d\n", count);
            count = 0;
        }
        else if (state == OUT) {
            state = IN;
            count ++;
            printf("%c", ch); 
            state = OUT;
        } 
    }
}
