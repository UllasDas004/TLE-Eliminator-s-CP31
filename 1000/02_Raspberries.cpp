// Q = 1883C
// https://codeforces.com/problemset/problem/1883/C

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
        vector<int> a(n);
        bool flag = false;
        int minDist = INT_MAX;
        int ec = 0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%k == 0) flag = true;
            minDist = min(minDist,(k - (a[i] % k)));
            if(a[i]%2 == 0) ec++;
        }
        if(flag) cout<<0<<endl;
        else if(k == 4)
        {
            if(ec > 1) cout<<0<<endl;
            else cout<<min(minDist, 2 - ec)<<endl;
        }
        else cout<<minDist<<endl;
    }
    return 0;
}