#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(i==n/i)
                cout<<i<<" ";
            else
                cout<<i<<" "<<n/i<<" ";
        }
    }
}