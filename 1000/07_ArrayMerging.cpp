// Q = 1813B
// https://codeforces.com/problemset/problem/1831/B

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
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        unordered_map<int,int> mpa,mpb;
        int i = 1,count = 1;
        while(i <= n)
        {
            if(i<n && a[i] == a[i-1])
            count++;
            else
            {
                if(mpa.find(a[i-1]) == mpa.end())
                mpa[a[i-1]] = count;
                else
                mpa[a[i-1]] = max(mpa[a[i-1]],count);
                count = 1;
            }
            i++;
        }
        i = 1;
        count = 1;
        while(i <= n)
        {
            if(i<n && b[i] == b[i-1])
            count++;
            else
            {
                if(mpb.find(b[i-1]) == mpb.end())
                mpb[b[i-1]] = count;
                else
                mpb[b[i-1]] = max(mpb[b[i-1]],count);
                count = 1;
            }
            i++;
        }
        int ans = 1;
        for(auto p : mpa)
        ans = max(ans,p.second + mpb[p.first]);
        for(auto p : mpb)
        ans = max(ans,p.second + mpa[p.first]);
        cout<<ans<<endl;
    }
    return 0;
}