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
    int s;
    for(i=1;v[i]<0&&i<=n;i++);
    if(i<=n) {s=v[i];cout<<v[i];}
    for(i++;i<=n;i++)
        if(v[i]>0){
            s=s+v[i];
            cout<<" + "<<v[i];
        }
    cout<<" = "<<s;
    return 0;
}
