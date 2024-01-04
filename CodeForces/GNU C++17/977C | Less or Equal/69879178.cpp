#include <bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int n, k;
 vector<int> arr;
 unordered_map<int, int> cnt;
 cin >> n >> k;
 for(int i = 0 ; i < n; i++)
 {
  int temp;
  cin >> temp;
  if(cnt[temp] == 0) arr.push_back(temp);
  cnt[temp]++;
 }
 sort(arr.begin(), arr.end());
 long long int total = 0;
 if(k == 0 && arr[0] > 1)
 {
  cout << 1 << endl;
  return 0;
 }
 for(int i = 0; i < n; i++)
 {
  total+= cnt[arr[i]];
  if(total == k)
  {
   cout << arr[i] << endl;
   return 0;
  }
  else if(total > k)
  {
   cout << -1 << endl;
   return 0;
  }
 
 }
 
 
 
 
 
 return 0;
}