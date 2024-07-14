#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(i==n/i)
            {
                cout<<i<<" ";
                sum+=i;
            }
            else
            {
                cout<<i<<" "<<n/i<<" ";
                sum+=i+n/i;
            }
                
        }
    }
    cout<<"\nSum of divisor: "<<sum;
    return 0;

}