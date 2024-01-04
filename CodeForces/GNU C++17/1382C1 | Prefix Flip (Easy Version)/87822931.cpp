#include <bits/stdc++.h>
using namespace std;
#define lli long long int
string a, b;
 
string reverseStr(string str, int h)
{
    int n = h;
 
    for (int i = 0; i < n / 2; i++) {
        swap(str[i], str[n - i - 1]);
 
    }
    return str;
}
string solve(int x)
{
 for(int i = 0; i < x; i++)
 {
  if(a[i] == '1')a[i] = '0';
  else a[i] = '1';
 }
 a = reverseStr(a, x);
 return a;
}
 
 
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
  cin >> n >> a >> b;
  vector<int> ans;
 
  for(int i = n-1; i >= 0; i--)
  {
   if(a[i] != b[i])
   {
    if(a[i] != a[0])
    {
     ans.push_back(1);
     a = solve(1);
    }
    ans.push_back(i+1);
    a = solve(i+1);
   }
  }
  //cout << a << '\n' << b << '\n';
  cout << ans.size();
  for(int i = 0; i < ans.size(); i++)cout << " " << ans[i];
  cout << '\n';
 
 }
 
 
 
 
}
 