#include <bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 const int MAXN = 1000005;
 int tc;
 cin >> tc;
 while(tc--)
 {
        string s,t;
  vector<pair<char, int>> arr, arr2;
        cin >>s >> t;
        int Slength = s.length(), Tlength = t.length();
        bool valid = true;
        int cnt = 1;
 
 
  for(int i = 0; i < Slength ; i++)
  {
   if(s[i] == s[i+1])cnt++;
   else
   {
    arr.push_back({s[i], cnt});
    cnt = 1;
   }
  }
  cnt = 1;
  for(int i = 0; i < Tlength ; i++)
  {
   if(t[i] == t[i+1])cnt++;
   else
   {
    arr2.push_back({t[i], cnt});
    cnt = 1;
   }
  }
 
 
  //cout << tempS << "-" << tempT << endl;
  if(arr.size() == arr2.size())
  {
   for(int i = 0; i < arr.size(); i++)
   {
    if(arr[i].first != arr2[i].first)valid = false;
    if(arr[i].second > arr2[i].second)valid =false;
    if(!valid)break;
   }
  }
  else valid =false;
  if(valid) cout << "YES\n";
  else cout << "NO\n";
 
 
 
 
 }
 
 
 
 
 
 
 
 
 
 return 0;
}