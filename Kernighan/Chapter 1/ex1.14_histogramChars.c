#include <stdio.h>

/*Frequency of characters(alphabets only) in input.*/
/*Version 1.0*/
void main()
{
    int ch, i, charfreq[26];
    
    printf("Enter the input stream\n");

    for (i = 0; i < 26; ++i)
        charfreq[i] = 0;

    while ((ch = getchar()) != EOF) {
        if (ch >= 'a' && ch <= 'z') 
            ++charfreq[ch - 'a'];
        else if (ch == '\n' || ch == '\t' || ch == ' ')
            ;
        }
    printf("%c", ch); 
    for (i = 0; i < 26; ++i)
        printf(" %d\n", charfreq[i]);
} 


