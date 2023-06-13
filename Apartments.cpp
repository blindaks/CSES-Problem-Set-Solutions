#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    int b[m];
    for(int i=0;i<m;i++)
    cin>>b[i];
    sort(b,b+m);
    int x=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=x;j<m;j++)
        {
            if(b[j]<=a[i]+k && b[j]>=a[i]-k)
            {
                count++;
                x=j+1;
                break;
            }
            else if(b[j]<a[i]-k)
            x=j+1;
            else if(b[j]>a[i]+k)
            break;

        }
    }
    cout<<count<<endl;
    return 0;
}