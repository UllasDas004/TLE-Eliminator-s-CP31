// Q = 1896A
// https://codeforces.com/problemset/problem/1896/A

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
        bool isSorted = true;
        for(int i=0;i<n;i++) cin>>a[i];
        if(a[0] == 1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}