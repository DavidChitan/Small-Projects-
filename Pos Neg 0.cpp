/* Based on an array of numbers the program determines the number of positive, negative numbers and how many times 0 appears in the array */

#include <iostream>

using namespace std;

int main()
{
    int v[100],i,n,x,y,z;
    cout<<"n= ";
    cin>>n;
    for(i=1;i<=n;i++){
        cout<<"v["<<i<<"]=";
        cin>>v[i];
    }
    x=y=z=0;
    for(i=1;i<=n;i++)
        if(v[i]<0)
            x++;
        else
            if(v[i]==0)
                y++;
            else
                z++;
    cout<<"There are "<<x<<" negative numbers"<<endl;
    cout<<"There are "<<y<<" zeros"<<endl;
    cout<<"There are "<<z<<" positive numbers"<<endl;
    return 0;
}
