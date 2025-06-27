// Q = 1559A
// https://codeforces.com/problemset/problem/1559/A

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
        int x;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(i == 0) x = a[i];
            else x &= a[i];
        }
        cout<<x<<endl;
    }
    return 0;
}