// Q = 1853A
// https://codeforces.com/problemset/problem/1853/A

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
        bool isSorted = true;
        int minDiff = INT_MAX;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(i>0)
            {
                if(a[i] < a[i-1]) isSorted = false;
                minDiff = min(minDiff,a[i] - a[i-1]);
            }
        }
        if(isSorted == false) cout<<0<<endl;
        else cout<<(minDiff + 2) / 2<<endl;
    }
    return 0;
}