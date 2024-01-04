#include <bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cout.tie(0);
 cin.tie(0);
 string s;
 int k, mx=INT_MIN;
 unordered_map<char, int> cnt;
 char az = 'a';
 cin >> s >> k;
 for(int i = 0; i < 26; i++)
 {
  cin >> cnt[az];
  mx = max(mx, cnt[az]);
  az++;
 }
 int curTotal = 0;
 for(int i = 0; i < s.length(); i++)
 {
  curTotal += ((i+1) * cnt[s[i]]);
 }
 for(int i = 1; i <= k; i++)
 {
  curTotal += ((i+s.length()) * mx);
 }
 cout << curTotal << endl;
 
 
 
 
 
 
 
 
 
 
 return 0;
}