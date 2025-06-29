//WAP to calc. the value of investment
#include<stdio.h>
void main()
{
    int n,t,i,j;
    printf("Enter the Amount(in rupees) : ");
    scanf("%d",&n);
    printf("Enter the Interest(in percentage) : ");
    scanf("%d",&i);
    printf("Enter the Time period(in year) : ");
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        n+=(n*i*j)/100;
        printf("In %d years Amount will be %d\n",j,n);
    }
}