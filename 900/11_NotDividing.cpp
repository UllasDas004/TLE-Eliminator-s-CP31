// Q = 1794B
// https://codeforces.com/problemset/problem/1794/B

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<long long> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n-1;i++)
        {
            while(a[i+1]%a[i] == 0)
            {
                if(a[i] == 1)
                a[i]++;
                else a[i+1]++;
            }
        }
        for(int i=0;i<n-1;i++)
        {
            if(a[i+1]%a[i] == 0)
            {
                if(a[i] == 1)
                a[i]++;
                else a[i+1]++;
            }
        }
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}