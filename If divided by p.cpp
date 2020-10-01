/* The program shows only the numbers in the string that can be divided by "p" */
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("vectori.in");
    ofstream g("vectori.out");
    int v[100],n,p,x,s,i;
    f>>n;
    for(i=1;i<=n;i++)
        f>>v[i];
    f>>p;
    for(i=1;i<=n;i++)
    {
       s=0;
       x=v[i];
       while(x>0)
       {
                 s=s+x%10;
                 x=x/10;
       }
       if(s%p==0)
        g<<v[i]<<" ";
    }
    f.close();
    g.close();
    return 0;
}
