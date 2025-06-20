// Q = 1869A
// https://codeforces.com/problemset/problem/1869/A

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
        bool allZeros = true;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i] != 0)
            allZeros = false;
        }
        if(allZeros) cout<<0<<endl;
        else
        {
            if(n%2 == 0)
            {
                cout<<2<<endl;
                cout<<1<<" "<<n<<endl<<1<<" "<<n<<endl;
            }
            else
            {
                cout<<4<<endl;
                cout<<1<<" "<<n-1<<endl<<1<<" "<<n-1<<endl;
                cout<<n-1<<" "<<n<<endl<<n-1<<" "<<n<<endl;
            }
        }
    }
    return 0;
}