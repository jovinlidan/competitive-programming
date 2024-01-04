#include <bits/stdc++.h>
using namespace std;
 
string shifts(int x, int y, string s, int k)
{
 string temp = "";
 int length = s.length();
 temp = s.substr(x-1, y-x+1);
 int lgth = temp.length();
 k = k % lgth;
 //cout << temp << endl;
 
 for(int i = 0; i < k; i++)
 {
  char t = temp[lgth-1];
  temp.erase(lgth-1, 1);
  temp = t+temp;
 }
 for(int i = x-2; i >= 0; i--)
 {
  temp = s[i] + temp;
  //cout << s[i] << "-" << i << endl;
 }
 for(int i = y; i < length; i++)
 {
  temp.push_back(s[i]);
 }
 return temp;
 
}
 
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 string s;
 cin >> s;
 int m;
 cin >> m;
 for(int i = 0; i < m; i++)
 {
  int x, y , k;
  cin >> x >> y >> k;
  s = shifts(x, y, s, k);
 }
 cout << s << endl;
 
 
 
 
 
 
 
 
 return 0;
}