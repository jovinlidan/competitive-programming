#include <bits/stdc++.h>
#define mxN 10000005
#define INF -1e9
typedef long long int ll;
 
using namespace std;
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
 
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
typedef pair<int, int> pii;
 
const int mod = 1e9+7;
 
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int tc;
    cin >> tc;
    int a, b,n, cnt,one, ans;
    string s;
    bool v;
    while(tc--)
    {
        cin >> a >> b;
        cin >> s;
        n = s.length();
        v = 0, cnt = 0, one = 0, ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '1')
            {
                if(v && cnt > 0)
                {
                   // debug(cnt);
                    if(cnt * b<= a)
                    {
                       // debug(cnt);
                        ans += (cnt * b);
                        int j = i-1;
                        while(cnt>0)
                        {
                            s[j] = '1';
                            cnt--;
                            j--;
                        }
                    }
                    cnt = 0;
                }
                else v = 1;
            }
            else if(v)
            {
                cnt++;
            }
        }
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '1')
            {
                if(s[i-1] == '0' || i == 0)one++;
 
            }
        }
 
    //    debug(s);
     // debug(one);
        cout << ans + (one * a) << '\n';
 
    }
 
    return 0;
}