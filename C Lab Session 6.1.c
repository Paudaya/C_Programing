  
#include <stdio.h>
#include <stdlib.h>
 

int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    if (num%2==0)
        printf("This number is even number");
    else
        printf("This number is odd number");
}
