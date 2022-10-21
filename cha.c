#include <stdio.h>
 
int main()
{
    int T, A, B, C, D, E, i;
    scanf("%d", &T);
    scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);
    if (T == A)
        i++;
    if (T == B)
        i++;
    if (T == C)
        i++;
    if (T == D)
        i++;
    if (T == E)
        i++;
    printf("%d\n", i);
    return (0);
}