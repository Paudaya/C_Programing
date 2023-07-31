#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mar,tot,avg,counter=1;
    while (counter<=10)
    {
        printf("Enter your marks");
        scanf("%d",&mar);
        tot=tot+mar;
        counter++;

    }
    avg=tot/10;
    if (avg>50)
        printf("Pass!");
    else
        printf("Fail!");


}
