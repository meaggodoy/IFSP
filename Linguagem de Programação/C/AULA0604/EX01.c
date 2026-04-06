#include <stdio.h>

int main()
{
    int x = 10;
    
    x++;
    printf("Pos incremento %d\n", x);
    
    x--;
    printf("X normal %d\n", x);
    
    ++x;
    printf("Pre incremento %d", x);

    return 0;
}
