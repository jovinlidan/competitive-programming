#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, temp;
    cin >> n;
    int cnt[105] = {};
    set<int> arr;
    for(int i = 0; i < n; i++)
 {
  cin >> temp;
  arr.insert(temp);
  cnt[temp]++;
 }
    if(arr.size() == 2)
 {
  for(auto i : arr)
  {
   if(cnt[i] != n/2)
   {
    cout << "NO\n";
    return 0;
   }
  }
  cout << "YES\n";
  int a = 0;
  for(auto i : arr)
  {
   if(a != 0)cout<< " ";
   cout << i;
   a++;
  }
  cout << endl;
 }
 else
 {
  cout << "NO\n";
 
 }
 
 
 
 
 
 return 0;
}