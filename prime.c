#include<stdio.h>
#include<conio.h>
int main()
{
    int x,n,c;
    printf("enter any number: ");
    scanf("%d", &x);
    n=2;
    c=0;
    while(n<=(x-1))
    {
                   if(x%n==0)
                   {
                             c++;
                             }
                             n++;
                             }
                             if(c==0)
                             {
                                     printf("%d is prime number\n", x);
                                     } else
                                     {
                                           printf("%d is not prime", x);
                                           }
                                           getch();
                                           return 0;
                                           }
    
