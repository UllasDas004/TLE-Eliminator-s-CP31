// Q = 1725B
// https://codeforces.com/problemset/problem/1725/B

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    cin>>n>>d;
    vector<int> p(n);
    for(int i=0;i<n;i++) cin>>p[i];
    sort(p.begin(),p.end());
    int ans = 0;
    int total = 0;
    int i = 0,j = n - 1;
    while(i <= j)
    {
        int count = 1;
        while(i<j && count * p[j] <= d)
        {
            i++;
            count++;
        }
        if(count * p[j] > d)ans++;
        j--;
    }
    cout<<ans<<endl;
    return 0;
}