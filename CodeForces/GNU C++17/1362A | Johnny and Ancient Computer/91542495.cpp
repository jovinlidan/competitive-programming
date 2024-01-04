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
        lli a, b, cnt = 0;
        cin >> a >> b;
        if(a == b)
        {
            cout << 0 << '\n';
            continue;
        }
        else if(a < b)
        {
            while(a < b)
            {
                a *= 2;
                cnt++;
            }
        }
        else
        {
            while(b < a)
            {
                b *= 2;
                cnt++;
            }
        }
        if(a == b)
        {
            int ans = 0;
            while(cnt >3)
            {
                cnt-=3;
                ans++;
            }
 
            cout << ans+1 << '\n';
 
        }
        else cout << -1 << '\n';
 
 
 
    }
 
 
 
 
 
 
 
}