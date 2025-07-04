// Q = 1850D
// https://codeforces.com/problemset/problem/1850/D

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
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        int i = 0,maxLen = 0;
        while(i<n)
        {
            int j = i + 1;
            while(j<n && a[j] - a[j-1] <= k)
            j++;
            maxLen = max(maxLen,j - i);
            i = j;
        }
        cout<<n - maxLen<<endl;
    }
}