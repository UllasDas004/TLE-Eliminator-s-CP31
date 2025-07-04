// Q = 1829B
// https://codeforces.com/problemset/problem/1829/B

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
        for(int i=0;i<n;i++) cin>>a[i];
        int maxLen = 0;
        for(int i=0;i<n;i++)
        {
            if(a[i] == 0)
            {
                int j = i + 1;
                while(j<n && a[j] == 0)
                j++;
                maxLen = max(maxLen,j - i);
            }
        }
        cout<<maxLen<<endl;
    }
    return 0;
}