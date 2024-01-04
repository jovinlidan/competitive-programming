#include <bits/stdc++.h>
using namespace std;
int main() {
 int candies[10], i, j, ave=0;
 bool okay = true;
 bool founded = false;
 for ( i = 0; i < 4; i++)
 {
  cin >> candies[i];
  ave += candies[i];
 }
 
 if (ave % 2 != 0) {
  cout << "NO\n";
 }
 else {
  ave = ave / 2;
  for (i = 0; i < 4; i++)
  {
   if (candies[i] == ave) {
    founded = true;
   }
  }
  if (!founded) {
   for (i = 0; i < 4; i++)
   {
    if (candies[i] > 0) {
     for (j = i + 1; j < 4; j++)
     {
      if (candies[j] > 0) {
 
       if (candies[i] + candies[j] == ave) {
        candies[i] = -1;
        candies[j] = -1;
       }
 
      }
     }
    }
 
   }
   for (i = 0; i < 4; i++)
   {
    if (candies[i] != -1) {
     okay = false;
     break;
    }
   }
  }
  
  if (okay) cout << "YES\n";
  else cout << "NO\n";
 }
 
 
 
 
 return 0;
}