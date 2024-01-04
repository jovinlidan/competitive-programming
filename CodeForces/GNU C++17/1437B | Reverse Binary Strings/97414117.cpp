#include <bits/stdc++.h>
#define mxN 10000005
#define INF -1e9
typedef long long int ll;
 
using namespace std;
 
void rev(int l, int r, string &s)
{
    while(l < r)
    {
        swap(s[l], s[r]);
        l++;
        r--;
    }
}
 
 
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n, ans = 0, ans2 = 0;
        string s, ss;
        cin >> n >> s;
//        ss = s;
//        n+=2;
//
//        s = '1' + s + '0';
//
//        for(int i = 0; i < n; i++)
//        {
//            if(i&1) // must 0
//            {
//                if(s[i] == '1')
//                {
//                    for(int j = n-1; j > i; j--)
//                    {
//                        if( !(j&1) && s[j] == '0')
//                        {
//                            rev(i, j, s);
//                            ans++;
//                         //
//                            break;
//                        }
//                    }
//                }
//            }
//            else
//            {
//                if(s[i] == '0')
//                {
//                    for(int j = n-1; j > i; j--)
//                    {
//                        if((j&1) && s[j] == '1')
//                        {
//                            rev(i, j, s);
//                            ans++;
//                       //     cout << i << " " << j << '\n';
//                            break;
//                        }
//                    }
//                }
//            }
//        }
//
//
//        //re
//        s = ss;
//        s = '0' + s + '1';
//
//        for(int i = 0; i < n; i++)
//        {
//            if(i&1)
//            {
//                if(s[i] == '0')
//                {
//                    for(int j = n-1; j > i; j--)
//                    {
//                        if(!(j&1) && s[j] == '1')
//                        {
//                            rev(i, j, s);
//                            ans2++;
//                          //  cout << i << " " << j << '\n';
//                            break;
//                        }
//                    }
//                }
//            }
//            else
//            {
//                if(s[i] == '1')
//                {
//                    for(int j = n-1; j > i; j--)
//                    {
//                        if(j&1 && s[j] == '0')
//                        {
//                            rev(i, j, s);
//                            ans2++;
//                          //   cout << i << " " << j << '\n';
//                            break;
//                        }
//                    }
//                }
//            }
//        }
 
        for(int i = 0; i < n-1; i++)
        {
            ans+= (s[i] == s[i+1]);
        }
        ans++;
        cout << ans/2 << '\n';
 
    }
 
    return 0;
}
 
 