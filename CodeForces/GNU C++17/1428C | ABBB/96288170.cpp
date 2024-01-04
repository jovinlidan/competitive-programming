#include <bits/stdc++.h>
#define mxN 100005
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;
vector<vector<ll>> adj(mxN);
int degree[mxN] = {};
const int mod = 1e9+7;
ll x, y, n, m;
 
 
 
int main()
{
    //freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int tc;
    cin >> tc;
    while(tc--)
    {
        stack<char>q;
        string s;
        cin >> s;
        for(int i = 0; i < s.length(); i++)
        {
            if(q.empty())q.push(s[i]);
            else
            {
                string xxx = string(1, q.top()) + s[i];
                if(xxx == "AB"|| xxx == "BB")q.pop();
                else q.push(s[i]);
            }
        }
        cout << q.size() << '\n';
 
 
    }
 
 
    return 0;
}
 