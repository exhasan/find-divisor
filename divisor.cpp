#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number"<<endl;
    cin>>n;
    int sum=0;
    int cnt =0;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(i==n/i)
            {
                cout<<i<<" ";
                sum+=i;
                cnt++;
            }
            else
            {
                cout<<i<<" "<<n/i<<" ";
                cnt+=2;
                sum+=i+n/i;
            }
                
        }
    }
    cout<<"number of divisor"<<' '<<cnt<<endl;
    cout<<"\nSum of divisor: "<<sum;
    return 0;

}
