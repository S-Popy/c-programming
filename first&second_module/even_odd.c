#include<stdio.h>
int main()
{

    int num;
    scanf ("%d", &num);

    //if the number is divided by 2 equally, it's even.
    if (num%2 == 0)
    {
        printf ("even");
    }
    //otherwisw it's odd.
    else
    {
        printf ("odd");
    }
    return 0;
}