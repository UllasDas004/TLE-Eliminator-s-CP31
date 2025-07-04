// Q = 1834A
// https://codeforces.com/problemset/problem/1834/A

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
        int sum = 0,prod = 1;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum += a[i];
            prod *= a[i];
        }
        if(sum >= 0 && prod == 1) cout<<0<<endl;
        else if(sum < 0)
        {
            int steps = (abs(sum) + 1)/2;
            if(prod == 1)
            {
                if(steps%2 == 1)
                steps++;
            }
            else
            {
                if(steps%2 == 0)
                steps++;
            }
            cout<<steps<<endl;
        }
        else cout<<1<<endl;
    }
    return 0;
}