#include <bits/stdc++.h>
#define mxN 200005
using namespace std;
typedef long long int  ll;
typedef pair<int, int> pii;
typedef pair<int, pair<int, int>> piii;
 
int cnt(int x)
{
    return (x * (x+1))/2;
}
 
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
 
    int tc;
    cin >> tc;
    while(tc--)
    {
        string s;
        cin >> s;
        int ans = 0;
        ans += cnt(4) * int(s[0] - '1');
        ans += cnt(s.length());
        cout << ans << '\n';
 
    }
 
 
 
 
 
    return 0;
}
 
 
 
 
//l+r/2;