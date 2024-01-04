#include <bits/stdc++.h>
using namespace std;
 
string kecil(string x)
{
 int temp = x.length();
 for(int i = 0; i < temp; i++)
 {
  if(x[i] >= 'A' && x[i] <= 'Z')x[i]+= 32;
 }
 return x;
}
 
int cnt = 0;
unordered_map<string, string> dsu;
 
string finds(string x)
{
 cnt++;
 if(x != "polycarp")
 {
  return finds(dsu[x]);
 }return x;
}
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int n;
 cin >> n;
 string name1[n+5], repost, name2[n+5];
 for(int i = 0; i < n; i++)
 {
  cin >> name1[i] >> repost >> name2[i];
  name1[i] = kecil(name1[i]);
  name2[i] = kecil(name2[i]);
  dsu[name1[i]] = name2[i];
 }
 int mx = -1e9;
 for(int i = 0; i < n; i++)
 {
  cnt = 0;
  finds(name1[i]);
  mx = max(mx, cnt);
 }
 cout << mx << endl;
 
 
 
 
 
 return 0;
}