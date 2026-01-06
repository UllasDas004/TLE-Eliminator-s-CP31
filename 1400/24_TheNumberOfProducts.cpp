// Q = 1215B
// https://codeforces.com/problemset/problem/1215/B

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define MOD 1000000007
int main()
{
    int t=1;
    // cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n),negIdx;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i] < 0) negIdx.push_back(i);
        }
        ll nn = negIdx.size();
        if(nn == 0)
        {
            cout<<"0 "<<(n*(n+1))/2<<endl;
            continue;
        }
        vector<ll> negIdxDiff(nn);
        for(int i=0;i<nn-1;i++) negIdxDiff[i] = negIdx[i+1] - negIdx[i];
        negIdxDiff[nn-1] = n - negIdx[nn-1];
        vector<ll> evenIdx,oddIdx;
        evenIdx.push_back(0);
        oddIdx.push_back(0);
        for(int i=0;i<nn;i++)
        {
            if(i%2 == 0) evenIdx.push_back(negIdxDiff[i]);
            else oddIdx.push_back(negIdxDiff[i]);
        }
        for(int i=1;i<evenIdx.size();i++) evenIdx[i] += evenIdx[i-1];
        for(int i=1;i<oddIdx.size();i++) oddIdx[i] += oddIdx[i-1];
        ll ans = 0,evenSum = evenIdx[evenIdx.size()-1],oddSum = oddIdx[oddIdx.size()-1];
        int x = 0,y = 0;
        ll negCount = 0;
        for(int i=0;i<n;i++)
        {
            ll count = 0;
            // cout<<negCount<<" "<<x<<" "<<y<<endl;
            if(negCount%2 == 0) count += evenSum - evenIdx[x];
            else count += oddSum - oddIdx[y];
            if(a[i] < 0)
            {
                negCount++;
                if(negCount%2 == 0) y++;
                else x++;
            }
            // cout<<count<<endl;
            ans += count;
        }
        cout<<ans<<" "<<(n*(n+1))/2 - ans<<endl;
    }
    return 0;
}