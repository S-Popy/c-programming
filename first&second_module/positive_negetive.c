#include<stdio.h>
int main()
{
    int num;
    scanf ("%d", &num);

    //if the number is greater than 0, it's positive.
    if (num>0)
    {
    printf ("positive");
    }
    //if the number is less than 0, it's negative.
    else if (num<0)
    {
    printf ("negative");
    }
    //otherwise it's zero.
    else
    {
    printf ("zero");
    }

    return 0;
}