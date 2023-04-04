#include<stdio.h>
int main ()
{
    int amount;
    scanf ("%d", &amount);

    //if she has equal or more than 10k.
    if (amount >= 10000)
    {
        printf ("Gucci Bag\n");
        //if she has equal or more than 10k as well as more than 20k.
        if (amount >20000)
        {
            printf ("Gucci Belt\n");
        }
    }
    //if she has eqal or more than 5k but less than 10k.
    else if (amount >=5000)
    {
        printf ("Levis Bag\n");
    }
    //if she has less than 5k.
    else 
    {
        printf ("Something\n");
    }

    return 0;
}