#include <stdio.h>

#define OUT 0 /*outside word*/
#define IN 1 /*inside word*/
/*Histogram of the lengths of words in input.*/
void main()
{
    int ch, state, count, i;
    count = 0; 
    state = OUT;
    
    printf("Enter the input\n");

    while ((ch = getchar()) != EOF) {
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            state = OUT;
            for (i = count; i > 0; --i)
                printf("|"); 
            printf("\n");
            count = 0;
        }
        else if (state == OUT && ch != '.' && ch != ',') {
            state = IN;
            ++count;
            printf("%c", ch); 
            state = OUT;
        } 
    }
}
