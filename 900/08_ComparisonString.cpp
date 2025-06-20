// Q = 1837B
// https://codeforces.com/problemset/problem/1837/B

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
        string s;
        cin>>s;
        int mx = 2;
        int i = 0;
        while(i < n)
        {
            int j = i + 1;
            while(j<n && s[i] == s[j])
            j++;
            mx = max(mx,j - i + 1);
            i = j;
        }
        cout<<mx<<endl;
    }
    return 0;
}