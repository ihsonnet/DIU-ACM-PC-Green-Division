#include<stdio.h>
long long int Reverse(long long int n);
int main()
{
    long long int t, n,rev,sum,sumr, i,j,step, number, number1;
    while(scanf("%lld",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%lld",&n);
            step=0;
            number1=n;
            number=Reverse(n);
            if(number==number1)
              printf("0 %lld\n",number);
            else
            {
                do
                {
                    sum=number+number1;
                    number=sum;
                    number1=Reverse(sum);
                    step++;

                }while(number!=number1);
                printf("%lld %lld\n",step,number);
            }
        }
    }
    return 0;
}

long long int Reverse(long long int n)
{
    long long int r;
    r=0;
    while(n!=0)
    {
        r=r*10+(n%10);
        n=n/10;
    }
    return r;
}
