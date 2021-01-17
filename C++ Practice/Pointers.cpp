
#include <stdio.h>
#include <cstdlib>

void update(int *a, int *b)
{ // to get the value from this address we enter it by the astriks sign
    int sum = 0;
    int diff = 0;

    sum = *a + *b;
    diff = abs(*a - *b);

    *a = sum;
    *b = diff;
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b); // we will get the address of variable a and b ,then put their values inside their address
    update(pa, pb);         // i passed an adress or pointers
    printf("%d\n%d", a, b);

    return 0;
}