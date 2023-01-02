#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,r;
        cin>>n;
        int rev = 0;

        for ( int i = n; n!=0; n = n/10)
            {
                r = n%10;
                rev = rev*10 + r;
            }
        cout<<rev<<endl;
    }
    
} 