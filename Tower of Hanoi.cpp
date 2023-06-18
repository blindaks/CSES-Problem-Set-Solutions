#include<bits/stdc++.h>
using namespace std;
void toh(int n, int& left,int &mid, int & right)
    {
        if(n==1)
        {
            cout<<left<<" "<<right<<endl;
            return;
        }
        toh(n-1,left,right,mid);
        cout<<left<<" "<<right<<endl;
        toh(n-1,mid,left,right);
    }
int main()
{
    int n;
    cin>>n;
    int left=1,mid=2,right=3;
    cout<<pow(2,n)-1<<endl;
    toh(n,left,mid,right);
    return 0;
}
