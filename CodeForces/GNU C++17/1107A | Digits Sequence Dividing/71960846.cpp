#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int tc;
    cin >>tc;
    while(tc--)
 {
        int n;
        cin >> n;
        string s;
        cin >>s;
 
        if(n >= 3)
  {
   cout << "YES\n";
    cout << 2 << endl;
   cout << s[0] << " ";
   for(int i = 1; i < n; i++)
   {
    cout << s[i];
   }
   cout << endl;
  }
  else
  {
   if(s[1]-48 > s[0]-48)
   {
    cout << "YES\n";
    cout << 2 << endl;
    cout << s[0] << " " << s[1];
    cout << endl;
   }
   else cout << "NO\n";
 
  }
 
 }
 
 
 
 
 
 
 
 
 return 0;
}