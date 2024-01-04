#include <bits/stdc++.h>
using namespace std;
int main()
{
 string s;
 cin >> s;
 int length = s.length();
 unordered_map<char, int> cnt;
 for(int i = 0; i < length; i++)
 {
  cnt[s[i]]++;
 }
    int ans = 1e9;
    ans = min(cnt['B'], ans);
    ans = min(cnt['l'], ans);
    ans = min(cnt['b'], ans);
    ans = min(cnt['s'], ans);
    ans = min(cnt['r'], ans);
    ans = min(cnt['u']/2, ans);
    ans = min(cnt['a']/2, ans);
 cout << ans << endl;
 
 
 
 
 
 
 
 
 return 0;
}