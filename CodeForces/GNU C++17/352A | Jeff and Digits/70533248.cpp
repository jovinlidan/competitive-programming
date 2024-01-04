#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int , int> cnt;
    int n, temp, ans = 0;
    cin >> n;
    for(int i =0; i < n; i++)
 {
  cin >> temp;
  cnt[temp]++;
 }
 if(cnt[5] >= 9 && cnt[0] >= 1)
 {
  ans = floor(cnt[5] * 1.0/ 9.0);
  for(int i = 0; i < ans* 9 ; i++)
  {
   cout<< 5;
  }
  for(int i = 0; i < cnt[0]; i++)cout << 0;
  cout << endl;
 }
 else
 {
  if(cnt[0] >= 1) cout << 0 << endl;
  else cout << -1 << endl;
 }
 
 
 
 
 
 
 
 
 
 return 0;
}