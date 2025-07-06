// Q = 1632B
// https://codeforces.com/problemset/problem/1632/B

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
        int bitCount = -1;
        int a = n - 1;
        while(a > 0)
        {
            bitCount++;
            a /= 2;
        }
        for(long long i=(1LL<<bitCount)-1;i>=0;i--)
        cout<<i<<" ";
        for(long long i=(1<<bitCount);i<n;i++)
        cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}