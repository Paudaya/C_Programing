#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fac=1,num,i;
    printf("Enter your number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
      fac*=i;
    }


    printf("Factorial of %d is:%d",num,fac);

}
