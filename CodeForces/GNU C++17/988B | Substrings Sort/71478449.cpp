#include <bits/stdc++.h>
using namespace std;
 
bool cmp(string x, string y)
{
 return x.length() < y.length();
}
int main()
{
    int n, idx= 0;
    cin >>n;
    string arr[105] = {};
    unordered_map<string ,int> cnt;
    string temp;
    for(int i =0; i < n; i++)
 {
  cin >> temp;
  cnt[temp]++;
  if(cnt[temp] == 1)
  {
   arr[idx] = temp;
   idx++;
  }
 }
 
 sort(arr, arr+idx, cmp);
// cout << "sort" << endl;
// for(int i = 0; i < n; i++)
// {
//  cout << arr[i] << endl;
// }
// cout << "sort" << endl;
 bool valid = true;
 for(int i = 1; i < idx; i++)
 {
 
  if(arr[i].find(arr[i-1]) == -1)
  {
    cout << "NO\n";
    return 0;
  }
 }
 
 cout << "YES\n";
 for(int i = 0; i <idx; i++)
 {
  while(cnt[arr[i]] != 0)
  {
   cout << arr[i] << endl;
   cnt[arr[i]]--;
  }
 }
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}