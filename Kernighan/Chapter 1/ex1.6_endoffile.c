#include <stdio.h>

/*Verify the value of (getchar() != EOF) is 0 or 1*/
main()
{
    int c;
    printf("Enter a character or ctrl + d to indicate EOF\n");
    c = getchar();
    printf("Value is %d\n", c != EOF);
}
