// Q = 1380A
// https://codeforces.com/problemset/problem/1380/A

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
        bool flag = false;
        int i;
        for(i=1;i<n-1;i++)
        {
            if(a[i-1] < a[i] && a[i] > a[i+1])
            {
                flag = true;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl<<i<<" "<<i+1<<" "<<i+2<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}