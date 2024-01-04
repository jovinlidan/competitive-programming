#include <bits/stdc++.h>
using namespace std;
 
unordered_map<string ,string> dsu;
string finds(string x)
{
 if(x == dsu[x])return x;
 return finds(dsu[x]);
}
 
int main()
{
 int n;
 string old, neww;
 vector<pair<string, string>> arr;
 cin >> n;
 set<pair<string, string>> ans;
 
 for(int i = 0; i < n; i++)
 {
  cin >> old>> neww;
  arr.push_back({old, neww});
        if(dsu[old] == "")
  {
   dsu[old] = old;
   dsu[neww] = old;
  }
  else
  {
   dsu[neww] = old;
  }
 }
 unordered_map<string ,bool> vsted;
 //cout << finds("ILoveCodeforces") << "-\n";
 string parent = "";
 for(int i = n-1; i >= 0; i--)
 {
        old = arr[i].first;
        neww = arr[i].second;
  parent = finds(old);
  if(!vsted[parent])
  {
   //cout << parent << "-" << vsted[parent]<< endl;
   ans.insert({parent, neww});
   vsted[parent] = true;
  }
 }
 cout << ans.size() << endl;
 for(auto i : ans)
 {
  cout << i.first << " " << i.second <<endl;
 }
 
 
 
 
 
 
 
 
 return 0;
}