#include <stdio.h>

/*Count blanks, tabs and newlines in the input stream*/
void main()
{
    int nb, nt, nl, c;
    nb = nt = nl = 0;
 
    printf("Enter the input stream (Press ctrl+d for EOF)\n");
    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++nl;
        else if (c == '\t')
            ++nt;
        else if (c == ' ')
            ++nb;
    }
    
    printf("The input has %d blanks, %d tabs and %d newlines\n", nb, nt, nl);
}
