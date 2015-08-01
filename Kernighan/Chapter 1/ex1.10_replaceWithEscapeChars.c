#include <stdio.h>

/*replace each tab by \t, backspace by \b and newline by \n.*/
void main()
{
    int c;
    
    printf("Enter the input (ctrl+d for EOF)\n");
    while ((c = getchar()) != EOF) {
        if (c == '\t')
            printf("\\t");
        else if (c == '\n')
            printf("\\n");
        else if (c == ' ')
            printf("\\b");
        else if (c == '\\')
            printf("\\\\");
        else 
            putchar(c);
    }
}
