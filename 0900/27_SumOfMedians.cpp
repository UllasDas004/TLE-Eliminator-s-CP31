// Q = 1440B
// https://codeforces.com/problemset/problem/1440/B

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int size = n*k;
        vector<int> a(size);
        long long sum = 0;
        for(int i=0;i<size;i++)
        {
            cin>>a[i];
            sum += a[i];
        }
        if(n == 1) cout<<sum<<endl;
        else
        {
            sum = 0;
            for(int i=k*((n-1)/2);i<size;i+=(n+2)/2)
            sum += a[i];
            cout<<sum<<endl;
        }
    }
    return 0;
}