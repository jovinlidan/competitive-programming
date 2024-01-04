#include <bits/stdc++.h>
using namespace std;
#define mxN 100005
typedef long long int ll;
typedef pair<int, int> pii;
typedef pair<int, pair<int, int>> piii;
 
bool cmp (pair<int, int> l , pair<int, int> r)
{
    return l.second < r.second;
}
ll modpow(ll x, ll y, ll m)
{
    ll res = 1;
    while(y > 0)
    {
        if(y & 1)
            res = (res * x) % m;
        x = (x * x) % m;
        y >>= 1;
    }
 
    return res;
}
 
int main()
{
 
    string s;
    int cnt = 0, ans = 0;
    while(getline(cin, s))
    {
        if(s[0] == '+')cnt++;
        else if(s[0] == '-')cnt--;
        else
        {
            for(int i = 0; i < s.length(); i++)
            {
                if(s[i] == ':')
                {
                    ans += (cnt * ((s.length()- i)-1));
                    //cout << s.length() << " " << i << '\n';
 
                    break;
                }
            }
 
 
        }
    }
    cout << ans << '\n';
 
 
    return 0;
}