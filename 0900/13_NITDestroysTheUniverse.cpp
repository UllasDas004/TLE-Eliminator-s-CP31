// Q = 1696B
// https://codeforces.com/problemset/problem/1696/B

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
        vector<int> a(n);
        bool allZeros = true;
        int zeros = 0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i] != 0) allZeros = false;
            else zeros++;
        }
        if(allZeros) cout<<0<<endl;
        else
        {
            int leadingZero = 0,trailingZero = 0;
            for(int i=0;i<n;i++)
            {
                if(a[i] != 0) break;
                leadingZero++;
            }
            for(int i=n-1;i>=0;i--)
            {
                if(a[i] != 0) break;
                trailingZero++;
            }
            zeros -= (leadingZero + trailingZero);
            if(zeros != 0) cout<<2<<endl;
            else cout<<1<<endl;
        }
    }
    return 0;
}