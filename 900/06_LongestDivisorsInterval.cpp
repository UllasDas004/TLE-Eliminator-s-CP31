// Q = 1855B
// https://codeforces.com/problemset/problem/1855/B

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
        long long l = 0;
        while(n%(l+1) == 0) l++;
        cout<<l<<endl;
    }
    return 0;
}