#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[4], b[2],c[2],d[2],e[2],f[4];
    int w,w1,w2,x,x1,y,y1,z,z1,x2,y2,z2;
    scanf("%s%d", &a,&w1);
    scanf("%d%s%d%s%d", &x1,&b,&y1,&c,&z1);
    scanf("%s%d", &f,&w2);
    scanf("%d%s%d%s%d", &x2, &d,&y2,&e,&z2);

    w=w2-w1;
    if(x2<x1)
    {
        x=(24+x2)-x1;
        w=w-1;
        if(y2<y1)
        {
            y=(60+y2)-y1;
            x=x-1;
            if(z2<z1)
            {
                z=(60+z2)-z1;
                y=y-1;
            }
            else
            {
                z=z2-z1;
            }

        }
        else
        {
            y=y2-y1;
            if(z2<z1)
            {
                z=(60+z2)-z1;
                y=y-1;
            }
            else
            {
                z=z2-z1;
            }
        }

    }
    else
    {
        x=x2-x1;
        if(y2<y1)
        {
            y=(60+y2)-y1;
            x=x-1;
            if(z2<z1)
            {
                z=(60+z2)-z1;
                y=y-1;
            }
            else
            {
                z=z2-z1;
            }

        }
        else
        {
            y=y2-y1;
            if(z2<z1)
            {
                z=(60+z2)-z1;
                y=y-1;
            }
            else
            {
                z=z2-z1;
            }
        }
    }
    cout<<w<<" dia(s)"<<endl;
    cout<<x<<" hora(s)"<<endl;
    cout<<y<<" minuto(s)"<<endl;
    cout<<z<<" segundo(s)"<<endl;

}
