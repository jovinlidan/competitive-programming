#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin >> n;
 if(n % 2 == 0) cout << "NO\n";
 else
 {
  cout << "YES\n";
 
  for(int i = 1; i <= 2*n; i+=3)
  {
   if(i > 2*n) break;
   cout << i << " ";
   if(i == 1) continue;
   cout << i+1 << " ";
   i+=1;
  }
 
  for(int i = 2; i <= 2*n; i+=3)
  {
   if(i > 2*n) break;
   cout << i << " ";
   if(i+1 > 2*n)break;
   cout << i+1 << " ";
   i+=1;
  }
 
 
 }
 
 
 
 
 
 return 0;
}