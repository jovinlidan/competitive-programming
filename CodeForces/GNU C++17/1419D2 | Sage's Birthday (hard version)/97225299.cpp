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
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    const int mod = 1000000007;
 
    int n;
    cin >> n;
    int arr[n+5] = {};
    for(int i = 0; i < n; i++)cin >> arr[i];
    sort(arr, arr+n);
    int idx = ceil(n/2.0)-2;
    vector<int> ff, ss, ans;
 
    for(int i = 0; i <= idx; i++)ff.push_back(arr[i]);
    for(int i = idx+1; i < n; i++)ss.push_back(arr[i]);
 
    int fi = 0, si= 0, tt=0;
    bool last = 0;
 
    while(fi < ff.size() && si < ss.size())
    {
        if(si < ss.size()-1)
        {
            if(ff[fi] < ss[si] && ff[fi] < ss[si+1])
            {
                if(!last)ans.push_back(ss[si]);
                ans.push_back(ff[fi]);
                ans.push_back(ss[si+1]);
                last = 1;
                si++;
                fi++;
                tt++;
            }
            else
            {
                ans.push_back(ss[si]);
                si++;
                last = 0;
            }
        }else break;
    }
    cout << tt << '\n';
  //  cout << ss[si+1] << '\n';
    for(fi; fi < ff.size(); fi++)ans.push_back(ff[fi]);
    while(si + last < ss.size())
    {
        ans.push_back(ss[si+last]);
        si++;
    }
    //for(si+last; si < ss.size(); si++)ans.push_back(ss[si]);
 
    for(int i = 0; i < n; i++)
    {
        if(i != 0)cout << " ";
        cout << ans[i];
    }
 
 
 
 
//    for(int i = idx+1; i < n; i++)desc.push_back(asc[i]);
//    int take = 0, dI = 0;
//    bool last = 0;
//    int total = 0;
//    vector<int> ans;
//    for(int i = 0; i <= idx; i++)
//    {
//        if(dI == desc.size())
//        {
//            for(int j = i ; j <= idx; j++)
//            {
//                ans.push_back(asc[j]);
//            }
//            break;
//        }
//        if(asc[i]  < desc[dI] && asc[i] < desc[dI+1])
//        {
//            if(dI == desc.size()-1)
//            {
//                if(!last)ans.push_back(desc[dI]);
//                for(int j = i ; j <= idx; j++)
//                {
//                    ans.push_back(asc[j]);
//                }
//                break;
//            }
//            total++;
//           // cout << '\n'<< desc[dI] << " "<< asc[i] << " " << desc[dI+1] << "JEBA\n";
//            if(!last)ans.push_back(desc[dI]);
//            ans.push_back(asc[i]);
//            ans.push_back(desc[dI+1]);
//            dI++;
//            last = 1;
//        }
//        else
//        {
//            ans.push_back(desc[dI]);
//            dI++;
//            i--;
//            last = 0;
//        }
//    }
//    cout << total << '\n';
//    if(idx == -1)
//    {
//        for(int i = 0 ; i < n; i++)
//        {
//            cout << desc[i] << " ";
//        }
//        return 0;
//    }
//    for(int i = 0; i < n; i++)
//    {
//        if(i != 0)cout << " ";
//        cout << ans[i];
//    }
 
//    int total = 0;
//    for(idx; idx >= 0; idx--)
//    {
//        if(asc[idx] < desc[dI] && asc[idx] < desc[dI+1])
//        {
//            total++;
//        }
//        dI++;
//    }
//    cout << total << "--\n";
//    cout << idx+1 << '\n';
//    int idT = idx;
//    for(int i = n-1; i > idT; i--)
//    {
//        cout << asc[i] << " ";
//        if(idx != -1)
//        {
//            cout << asc[idx] << " ";
//            idx--;
//        }
//    }
    //cout << idx << '\n';
 
 
 
    cout << '\n';
 
 
    return 0;
}