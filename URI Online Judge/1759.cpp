#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Ho");
        if(i==n-1)
            printf("!\n");
        else
            printf(" ");
    }
}
