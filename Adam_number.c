#include<stdio.h>
int main()
{
    int n,ns,sq1,sq2,rev=0,rem=0,srem=0,srev=0,sns;
    scanf("%d",&n);
    sq1=n*n;
    ns=sq1;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    sq2=rev*rev ;
    sns=sq2;
    while(sq2!=0)
    {
        srem=sq2%10;
        srev=srev*10+srem;
        sq2/=10;
        
    }
    if( srev == ns)
    {
     printf("True");
    }
    else
    {
     printf("False");
    }
     return 0;
}