#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double a,b,result;
    a=(1 + sqrt(5))/2.0;
    b=(1 - sqrt(5))/2.0;
    cin>>n;
    result=(pow(a,n)-pow(b,n))/sqrt(5);
    printf("%.1lf\n",result);
}
