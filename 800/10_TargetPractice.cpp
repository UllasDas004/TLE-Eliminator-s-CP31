// Q = 1873C
// https://codeforces.com/problemset/problem/1873/C

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<string> s(10);
        for(int i=0;i<10;i++)
        cin>>s[i];
        int score = 0;
        for(int i=0;i<5;i++)
        {
            for(int col=i;col<10-i;col++)
            {
                if(s[i][col] == 'X')
                score += i + 1;
            }
            for(int col=i;col<10-i;col++)
            {
                if(s[9-i][col] == 'X')
                score += i + 1;
            }
            for(int ro=i+1;ro<9-i;ro++)
            {
                if(s[ro][i] == 'X')
                score += i + 1;
            }
            for(int ro=i+1;ro<9-i;ro++)
            {
                if(s[ro][9-i] == 'X')
                score += i + 1;
            }
        }
        cout<<score<<endl;
    }
}