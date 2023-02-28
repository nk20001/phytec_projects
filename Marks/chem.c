#include<stdio.h>
int chem(int a)
{    
    if(a<=33)
    {
        printf("FAIL");
    }
    else if(a>=34 && a<=50)
    {
        printf("E");
    }
    else if(a>=51 && a<=60)
    {
        printf("D");
    }
    else if(a>=61 && a<=70)
    {
        printf("C");
    }
    else if(a>=71 && a<=80)
    {
        printf("B");
    }
    else if(a>=81 && a<=90)
    {
        printf("A");
    }
    else if(a>=91 && a<=100)
    {
        printf("O");
    }
    else
    {
        printf("invalid entry!\n");
    }
    return a;
}