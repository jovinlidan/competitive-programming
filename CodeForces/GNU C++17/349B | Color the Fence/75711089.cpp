#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
    int v;
    int color[11] = {}, mn = 1e9, highDig = -1;
    cin >> v;
    string ans = "";
    bool visited[100005] = {false};
    for(int i = 1; i <= 9; i++)
    {
        cin >> color[i];
        if(color[i] <= mn)
        {
            mn = color[i];
            highDig = i;
        }
    }
    //cout << mn << endl;
    if(v/mn <= 0)cout << -1 << endl;
    else
    {
        ans = string(v/mn, char(highDig+48));
        int sisa = v % mn;
        int idx = 0;
        for(int i = 9; i >= 1; i--)
        {
            if(color[highDig]+sisa >= color[i] && i > highDig)
            {
                ans[idx] = char(i+48);
                sisa = (color[highDig] + sisa) - color[i];
                idx++;
                i++;
            }
        }
    }
    cout <<ans << endl;
 
 
 
 
 
    return 0;
}