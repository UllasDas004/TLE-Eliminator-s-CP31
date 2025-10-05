// Q = 1821B
// https://codeforces.com/problemset/problem/1821/B

#include<bits/stdc++.h>
#define ll long long
#define MOD (ll)(1e9+7)
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        int i = 0,j = n-1;
        while(i < n && a[i] == b[i]) i++;
        while(j >= 0 && a[j] == b[j]) j--;
        while(j < n && b[j] >= b[j-1]) j++;
        while(i >= 0 && b[i] <= b[i+1]) i--;
        i += 2;
        cout<<i<<" "<<j<<endl;
    }
    return 0;
}