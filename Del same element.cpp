/* The program deletes the repreating elements in the list provided */
#include <iostream>

using namespace std;

int main()
{
	int a[100],n,i,k,j;
	cin>>n;
	for(i=1;i<=n;i++)
        cin>>a[i];
	for(i=1;i<n;i++)
		for(j=i+1;j<=n;j++)
			if(a[i]==a[j])
			{
				for(k=j;k<n;k++)
					a[k]=a[k+1];
				n--;
				j--;
			}
	for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
return 0;
}
