#include <bits/stdc++.h>
using namespace std;
 
vector<int> ans;
int tallest(int nn)
{
    vector<int>::iterator lower;
    lower= upper_bound(ans.begin(), ans.end(), nn);
    return (lower- ans.begin());
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int k = 30000, cnt = 1;
    int n = 2;
    while(k--)
    {
        ans.push_back(n);
        n += 2 + (3*cnt++);
    }
    int tc;
    cin >> tc;
    while(tc--)
    {
        int nn;
        cin >> nn;
        int cnt = 0;
        //cout << tallest(nn) << '\n';
        while(tallest(nn))
        {
            nn -= ans[tallest(nn)-1];
            cnt++;
        }
        cout << cnt << '\n';
 
 
    }
 
 
    return 0;
}