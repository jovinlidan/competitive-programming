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
bool pal(string s)
{
    int l = 0, r = s.length()-1;
    while(l < r)
    {
        if(s[l] != s[r])return 0;
        l++;
        r--;
    }
    return 1;
 
}
 
int solve(string ab, string a, string b)
{
    int aa = ab.find(a);
    if(aa == -1)return -1;
    //cout << ab.substr(aa+a.size(), ab.size()-(aa+a.size())) << '\n';
    int abc = ab.substr(aa+a.size(), ab.size()-(aa+a.size())).find(b);
    return abc;
}
int main()
{
    //cout << solve("adcdc", "dcdc" , "a") << '\n';
    string ab,a , b;
    cin >> ab >> a >> b;
 
 
    int a1, a2;
    a1 = solve(ab, a, b);
    reverse(ab.begin(), ab.end());
   // reverse(a.begin(), a.end());
   // reverse(b.begin(), b.end());
    a2 = solve(ab, a, b);
 
    if(a1 == -1 && a2 == -1)cout << "fantasy";
    else if(a1 != -1 && a2 != -1)cout << "both";
    else if(a1 != -1)cout << "forward";
    else cout << "backward";
    cout << '\n';
 
 
    return 0;
}