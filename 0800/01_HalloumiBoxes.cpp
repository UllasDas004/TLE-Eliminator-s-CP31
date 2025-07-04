// Q = 1903A
// https://codeforces.com/problemset/problem/1903/A

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
        bool isSorted = true;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(i > 0 && a[i] < a[i-1])
            isSorted = false;
        }
        if(isSorted == false && k == 1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}