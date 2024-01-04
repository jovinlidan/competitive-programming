#include <bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
    int n, ans = 0;
    cin >> n;
    unordered_map<char, int> arr;
    char az= 'a';
    char temp;
    for(int i = 0; i < n ;i++)
 {
  cin >> temp;
  arr[temp]++;
 }
 for(int i = 0; i < 26; i++)
 {
  ans += max(0, (arr[az] - 1));
  az++;
 }
 if(n > 26) cout << -1 << endl;
 else cout << ans << endl;
 
 
 
 
 
 
 
 
 
 return 0;
}