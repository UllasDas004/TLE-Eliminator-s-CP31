// Q = 1631B
// https://codeforces.com/problemset/problem/1631/B

#include<bits/stdc++.h>
#define ll long long
#define MOD (ll)(1e9 + 7)
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
        int i = 0,j = n-1;
        int x = -1,y = -1;
        while(i < j)
        {
            if(a[i] != a[j])
            {
                x = a[i];
                y = a[j];
                break;
            }
            i++;
            j--;
        }
        if(x == -1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        bool flag = true;
        i = 0;
        j = n-1;
        while(i < j)
        {
            if(a[i] == x) i++;
            else if(a[j] == x) j--;
            else if(a[i] != a[j])
            {
                flag = false;
                break;
            }
            else
            {
                i++;
                j--;
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
            continue;
        }
        flag = true;
        i = 0;
        j = n-1;
        while(i < j)
        {
            if(a[i] == y) i++;
            else if(a[j] == y) j--;
            else if(a[i] != a[j])
            {
                flag = false;
                break;
            }
            else
            {
                i++;
                j--;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}