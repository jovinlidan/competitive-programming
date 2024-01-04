#include <bits/stdc++.h>
#define lli long long int
#define mxN 500005
#define INF 9999
 
using namespace std;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;
typedef pair<pii, string> piis;
 
 
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        string s, ans;
        cin >> s;
        char x = s[n-1];
 
        for(int i = 0; i < n; i++)
        {
            ans += x;
        }
        cout << ans << '\n';
 
 
 
    }
 
 
 
 
 
 
 
}