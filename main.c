#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year ;
    printf("Enter Year ");
    scanf("%d",&year);
    if(year%4==0&&year%10!=0 ||year%400==0){
        printf("Lab Year");
    }
    else
        printf("Not Lab Year");
    return 0;
}
