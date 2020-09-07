#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double res = 3.0000000000;
    double a = 1/6.0;
    double b = 1/(6.0+(1/6.0));
    double mul = a/b;
    //double sqrt10 =  3+(1/((n*3)+(1/(n*3))));
    //printf("%.10lf\n",sqrt10);
    double per = a;
    for(int i=4;i<n;i++)
    {
      per = per*mul;
    }

    res=res+per;
    printf("%.10lf\n",res);
}
