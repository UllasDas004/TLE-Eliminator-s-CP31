// Q = 1828B
// https://codeforces.com/problemset/problem/1828/B

#include<bits/stdc++.h>
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
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int i = 0;
        vector<int> b;
        while(i < n)
        {
            if(a[i] != i + 1)
            b.push_back(abs(a[i] - a[a[i] - 1]));
            i++;
        }
        if(b.size() == 1) cout<<b[0]<<endl;
        else
        {
            int k = gcd(b[0],b[1]);
            for(int i=2;i<b.size();i++)
            k = gcd(k,b[i]);
            cout<<k<<endl;
        }
    }
    return 0;
}