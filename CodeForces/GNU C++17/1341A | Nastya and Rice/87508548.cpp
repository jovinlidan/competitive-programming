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
  int n, a, b, c ,d;
  cin >> n >> a >> b >> c >> d;
  bool valid = false;
  if(   ((a-b)*n <= c + d) &&  ((a+b)*n >= c - d)     ) valid = true;
  if(valid) cout << "Yes\n";
  else cout << "No\n";
 }
 
}