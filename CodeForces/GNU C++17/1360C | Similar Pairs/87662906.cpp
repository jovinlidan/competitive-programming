#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
 int tc;
 cin >> tc;
 while(tc--)
 {
  int n;
  cin >> n;
  int ganjil = 0, genap = 0, x = 0, y = 0, pairs = 0;
  int arr[55] = {}, cnt[105] = {};
  for(int i = 0; i < n; i++)
  {
   cin >> arr[i];
   cnt[arr[i]]++;
   if(arr[i] % 2 == 0)x++;
   else y++;
  }
  sort(arr, arr+n);
  arr[n] = 0;
  for(int i = 0; i < n; i++)
  {
   if(cnt[arr[i]] <= 0) continue;
   if(cnt[arr[i]+1] > 0)
   {
    cnt[arr[i]+1]--;
    pairs++;
   }
   else
   {
 
    if(arr[i] % 2 == 0)genap++;
    else ganjil++;
 
 
   }
   cnt[arr[i]]--;
 
  }
 
  //cout << x << " " << y << " " << pairs << '\n';
  if(genap % 2 ==0 && ganjil % 2 ==0 || (x%2 == 0 && y % 2 ==0))cout << "YES\n";
  else
  {
   if(pairs > 1)
   {
    cout << "YES\n";
   }
   else cout << "NO\n";
  }
 
 }
 
}