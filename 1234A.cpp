#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int t=1; t<=n; t++)
    {
        int j;
        cin>>j;
        int sum=0;

        for(int i=0; i<j; i++)
        {
            int a;
            cin>>a;
            sum=sum+a;
        }
        int ans=ceil(sum*1.0/j);
        cout<<ans<<endl;
    }




}
