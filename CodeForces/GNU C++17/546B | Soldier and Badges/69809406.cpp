#include <bits/stdc++.h>
using namespace std;
int main()
{
 
 int n, arr[3005]= {}, ans= 0;
 unordered_map<int, int> cnt;
 cin >> n;
 for(int i = 0; i< n; i++)
 {
  cin >> arr[i];
  cnt[arr[i]]++;
 }
 sort(arr, arr+n, greater<int>());
 for(int i = 0; i < n; i++)
 {
  while(cnt[arr[i]] > 1)
  {
   cnt[arr[i]]--;
   arr[i] += 1;
   cnt[arr[i]]++;
   ans++;
  }
 }
 cout<< ans << endl;
 
 
 
 
 
 
 return 0;
}