#include <bits/stdc++.h>
using namespace std;
 
string temps= "0";
 
unordered_map <string , bool> dp;
 
bool solve(string s, string temp, int idx)
{
    //cout << temp << endl;
    if(dp[temp]) return false;
    if(temp.length() != 0 && temp.length() < 5)
    {
        if(stoi(temp) % 8 == 0 )
        {
            //cout << "Yddddd\n";
            temps = temp;
            return true;
 
        }
    }
    if(temp.length() >= 5) dp[temp] = true;
    if(idx == s.length())
    {
        dp[temp] = true;
        return false;
 
    }
    string tmbh = temp + s[idx];
    idx+=1;
    return solve(s, tmbh, idx) || solve(s, temp, idx);
 
 
}
 
 
 
int main()
{
    string s;
    cin >> s;
 
    string awal;
    if(solve(s, awal, 0))
    {
        cout << "YES\n";
        cout << stoi(temps) << endl;
    }else cout << "NO\n";
 
 
 
 
    return 0;
}