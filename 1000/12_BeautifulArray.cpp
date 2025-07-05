// Q = 1715B
// https://codeforces.com/problemset/problem/1715/B

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k,b,s;
        cin>>n>>k>>b>>s;
        if(s/k < b) cout<<-1<<endl;
        else if((n - 1)*(k - 1) + (k*b + k - 1) < s) cout<<-1<<endl;
        else
        {
            vector<long long> a(n,0);
            a[n - 1] = min(s,k*b + k - 1);
            s -= a[n - 1];
            for(int i=n-2;i>=0;i--)
            {
                if(k - 1 <= s)
                {
                    a[i] = k - 1;
                    s -= (k - 1);
                }
                else
                {
                    a[i] = s;
                    break;
                }
            }
            for(int i=0;i<n;i++) cout<<a[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}