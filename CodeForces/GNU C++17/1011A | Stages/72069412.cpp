#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    string s;
    cin >> n >> k >> s;
    sort(s.begin(), s.end());
    int cnt = 0, ans  = 0;
    char last = '-';
    for(int i = 0; i < n; i++)
 {
        if(cnt < k && s[i] > last+1)
  {
   //cout << s[i] << "-" << last << endl;
   ans += (s[i]-96);
   cnt++;
   last = s[i];
  }
 }
 if(cnt == k)cout << ans << endl;
 else cout << -1 << endl;
 
 
 
 
 
 return 0;
}