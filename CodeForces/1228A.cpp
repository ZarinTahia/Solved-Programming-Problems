#include<bits/stdc++.h>
using namespace std;

void ans(int a,int b)
{
    int t;
    for(int i=a; i<=b; i++)
    {
        t=1;
        string as=to_string(i);
        sort(as.begin(),as.end());

        for(int j=1; j<as.size(); j++)
        {
            if(as[j]==as[j-1])
            {
                t=0;
                break;
            }

        }
        if(t==1)
        {
            cout<<i<<endl;
            break;
        }

    }
    if(t==0)
    {
        cout<<-1<<endl;
    }


}



int main()
{
    int a;
    int b;
    cin>>a>>b;
    ans(a,b);
}
