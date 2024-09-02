//Get 3 number from uder.Find average,if average>23 then find product,otherwise add some values to the average and make it greater than 23 and output the value that has been added
#include<stdio.h>
int main()
{
    int a,b,c,avg,xtra;
    printf("Enter three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    avg=(a+b+c)/3;
    if(avg>23)
        printf("the product is %d",(a*b*c));
    else
    {
       xtra=24-avg;
       printf("the added number is %d",xtra);
    }
    return 0;
}
