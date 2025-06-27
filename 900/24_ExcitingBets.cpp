// Q = 1543A
// https://codeforces.com/problemset/problem/1543/A

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int gcd(int x,int y)
{
    int min = x,max = y;
    if(y<x) 
    {
        min  = y;
        max = x;
    }
    while(min>0)
    {
        int temp = max % min;
        max = min;
        min = temp;
    }
    return max;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if(a > b) swap(a,b);
        ll diff = b - a;
        // cout<<diff<<endl;
        if(diff == 0) cout<<"0 0"<<endl;
        else
        {
            ll steps = a % diff;
            steps = min(steps,diff - steps);
            cout<<diff<<" "<<steps<<endl;
        }
    }
    return 0;
}