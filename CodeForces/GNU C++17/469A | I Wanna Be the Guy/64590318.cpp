#include <bits/stdc++.h>
 
using  namespace std;
 
int main() {
 
 int i, counts = 1, levels, X, Y, xLevel[100], yLevel[100], j;
 
 cin >> levels;
 cin >> X;
 for (i = 0; i < X; i++)
 {
  cin >> xLevel[i];
 }
 cin >> Y;
 for (i = 0; i < Y; i++)
 {
  cin >> yLevel[i];
 }
 
 for (i = 1; i <= levels; i++)
 {
  for (j = 0; j < X; j++)
  {
   if ((i == xLevel[j]) && (i == counts)) {
    counts++;
   }
  }
  for (j = 0; j < Y; j++)
  {
   if ((i == yLevel[j]) && (i == counts)) {
    counts++;
   }
  }
 }
 
 if (levels == counts - 1) {
  cout << "I become the guy.\n";
 }
 else {
  cout << "Oh, my keyboard!\n";
 }
 
 
 
 
 
 
 
 return 0;
}