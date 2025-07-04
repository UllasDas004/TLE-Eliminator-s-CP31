// Q = 1766A
// https://codeforces.com/problemset/problem/1766/A

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
        int count = 0,a = n,digits = 0;
        while(a > 0)
        {
            digits++;
            a /= 10;
        }
        count += (9 * (digits - 1));
        int inc =  pow(10,digits-1);
        a = inc;
        while(a <= n)
        {
            count++;
            a += inc;
        }
        cout<<count<<endl;
    }
}