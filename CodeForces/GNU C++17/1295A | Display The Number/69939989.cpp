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
  int n;
  cin >> n;
  if(n % 2 == 0)
  {
   int byk = n/2;
   for(int i =0; i < byk; i++) cout << '1';
   cout << endl;
  }
  else
  {
   int byk = n/2-1;
   cout << '7';
   for(int i =0; i < byk; i++) cout << '1';
   cout << endl;
  }
 }
 return 0;
 
 
 
 
 
 
 return 0;
}