// Q = 1765M
// https://codeforces.com/problemset/problem/1765/M

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%2 == 0) cout<<n/2<<" "<<n/2<<endl;
        else
        {
            long long mn = 1LL;
            for(int i=2;i*i<=n;i++)
            {
                if(n%i == 0)
                {
                    mn = n / i;
                    break;
                }
            }
            cout<<mn<<" "<<n - mn<<endl;
        }
    }
    return 0;
}