// Q = 1793C
// https://codeforces.com/problemset/problem/1793/c

#include<bits/stdc++.h>
#define ll long long
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
        vector<int> b = a;
        sort(b.begin(),b.end());
        int l = 0,r = n-1;
        int i = 0,j = n-1;
        while(r - l + 1 > 3)
        {
            if(a[l] == b[i]){l++;i++;}
            else if(a[l] == b[j]){l++;j--;}
            else if(a[r] == b[i]){r--;i++;}
            else if(a[r] == b[j]){r--;j--;}
            else break;
        }
        if(r-l+1 > 3) cout<<l+1<<" "<<r+1<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}