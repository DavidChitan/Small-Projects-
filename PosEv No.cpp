/* Based on an array the program shows the positive even numbers of that array */

#include <iostream>

using namespace std;

int main()
{
    int v[100],i,n;
    cout<<"n= ";
    cin>>n;
    for(i=1;i<=n;i++){
        cout<<"v["<<i<<"]=";
        cin>>v[i];
        }
    for(i++;i<=n;i++)
        if(v[i]>0&&v[i]%2==0)
            cout<<v[i]<<endl;
    return 0;
}
