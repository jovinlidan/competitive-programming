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
  int n, a, b, cnt = 0;
  cin >> n >> a >> b;
        char az= 'a';
        string s = "";
        for(int i = 0; i < n; i++)
  {
   s.push_back(az);
   az++;
   cnt++;
   if(cnt == b)
   {
    az = 'a';
    cnt = 0;
   }
  }
  cout << s << '\n';
 
 
 }
 
 
 
 
}