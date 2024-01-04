#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 unordered_map<string , int> arr, arr2;
 vector<string> listNama;
 vector<pair<string, int>> jalan;
 cin >> n;
 string name;
 int score;
 for(int i = 0; i < n; i++)
 {
  cin >> name >> score;
  if(arr[name] == 0) listNama.push_back(name);
  arr[name]+= score;
  jalan.push_back({name, score});
 
 }
 int mx = -1e9;
 string ans = "";
 for(int i = 0; i < listNama.size(); i++)
 {
  //mx = max(mx, arr[listNama[i]]);
  mx = max(mx, arr[listNama[i]]);
 }
 
 for(int i = 0; i < jalan.size(); i++)
 {
  arr2[jalan[i].first] += jalan[i].second;
  if(arr2[jalan[i].first] >= mx && arr[jalan[i].first] == mx)
  {
   cout << jalan[i].first << endl;
   return 0;
  }
 }
 
 
 
 
 
 
 
 
 
 return 0;
}