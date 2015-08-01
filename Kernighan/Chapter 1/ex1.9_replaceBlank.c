#include <stdio.h>

/* copy input to output replacing each string of one
or more blanks with a single blank. */
void main()
{
    int c;
    int nb;
    nb = 0;
    
    printf("Enter the input stream\n");
    
    while ((c = getchar()) != EOF) {
        if (c == ' ' && nb < 1) {
            ++nb;
            putchar(c);
        }
      /*  if (nb > 1)
        ;*/
        else if (c == ' ' && nb == 1)
            ;
        else if (c == '\n')
            nb = 0;
        else
            putchar(c);
        // nb = 0;
    }
}
