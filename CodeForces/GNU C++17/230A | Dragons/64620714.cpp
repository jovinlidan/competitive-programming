#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 long long int kStrength, i, manyDragons, dStrength[1000], bonusStrength[1000], j, counts=0;
 
 cin >> kStrength >> manyDragons;
 //bool canWin = true;
 
 for ( i = 0; i < manyDragons; i++)
 {
  cin >> dStrength[i] >> bonusStrength[i];
 
 
  /*cin >> dStrength >> bonusStrength;
  if (kStrength > dStrength) {
   kStrength += bonusStrength;
  }
  else {
   canWin = false;
   break;
  }*/
 }
 
 for ( i = 0; i < manyDragons; i++)
 {
  for ( j = 0; j < manyDragons; j++)
  {
   if (kStrength > dStrength[j]) {
    kStrength += bonusStrength[j];
    dStrength[j] = 1e10;
    counts++;
   }
  }
 }
 
 if (counts == manyDragons) {
  cout << "YES\n";
 }
 else
  cout << "NO\n";
 
 /*if (canWin)
  cout << "YES\n";
 else
  cout << "NO\n";*/
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}