#include <bits/stdc++.h>
using namespace std;
#define mxN 200005
typedef long long int ll;
typedef pair<int, int> pii;
typedef pair<int, pair<int, int>> piii;
 
 
 
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
        int n, k, cnt= 0, idx = -1;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<pii> vec;
        vec.clear();
        for(int i = 1; i < n; i++)
        {
            if(s[i] == 'L')
            {
                if(s[i-1] == 'W')idx = i;
                if(idx != -1)cnt++;
            }
            else if(s[i] == 'W')
            {
                if(idx != -1)
                {
                    vec.push_back({cnt, idx});
                    //cout << cnt << "-" << idx << '\n';
                    idx = -1;
                    cnt = 0;
                }
            }
        }
        sort(vec.begin(), vec.end());
 
        for(int i = 0; i < vec.size(); i++)
        {
            cnt = vec[i].first;
            idx = vec[i].second;
            while(k > 0 && cnt > 0 && idx < n)
            {
                s[idx] = 'W';
                k--;
                cnt--;
                idx++;
            }
        }
     //   cout << '\n';
 
//        for(int i = 1; i < n; i++)
//        {
//            if(s[i] == 'L' && s[i-1] == 'W')
//            {
//                if(nxW[i] != 0)
//                {
//                    if(nxW[i] - i <= k)
//                    {
//                   //     cout << i << "-" << nxW[i]-i << '\n';
//                        k -= (nxW[i]-i);
//                        int j = i;
//                        while(j != nxW[i])
//                        {
//                            s[j] = 'W';
//                            j++;
//                        }
//                        i = j;
//                        i--;
//                    }
//                   // cout << i << '\n';
//                }
//            }
//        }
 
        for(int i = 1; i < n; i++)
        {
            if(s[i-1] == 'W' && s[i] == 'L')
            {
                if(k)
                {
                   // cout << s << " " << 1 << '\n';
                    k--;
                    s[i] = 'W';
                }
            }
        }
        for(int i = n-2; i >= 0; i--)
        {
            if(s[i+1] == 'W' && s[i] == 'L')
            {
                if(k)
                {
                    k--;
                    s[i] = 'W';
                }
            }
        }
        if(k != 0)
        {
            for(int i =  0; i < n; i++)
            {
                if(s[i] == 'L' && k)
                {
                    k--;
                    s[i] = 'W';
                }
            }
        }
        ll ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(i == 0)
            {
                if(s[i] == 'W')ans++;
            }
            else
            {
              //  cout << s[i] << " ";
                if(s[i-1] == 'W' && s[i] == 'W' )ans+=2;
                else if(s[i-1] == 'L' && s[i] =='W')ans++;
 
            }
        }
        cout << ans << '\n';
     //   cout << s << '\n';
    }
 
 
    return 0;
}