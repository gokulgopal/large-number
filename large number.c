

#include <stdio.h>
int main()
{
    int y, B, C;

    printf("Enter three different numbers: ");
    scanf("%d %d %d", &y, &B, &C);

    if( y>=B && y>=C )
        printf("%d is the largest number.", y);

    if( B>=y && B>=C )
        printf("%d is the largest number.", B);

    if( C>=y && C>=B )
        printf("%d is the largest number.", C);
}
