#include <bits/stdc++.h>
using namespace std;
int main() {
 int andrewX, dmitryY, michalZ, green, purple, black, i, counts = 0;
 bool able = true;
 cin >> andrewX >> dmitryY >> michalZ;
 cin >> green >> purple >> black;
 
 if (andrewX <= green) {
  green -= andrewX;
 }
 else {
  able = false;
 }
 
 if (dmitryY <= green + purple) {
  while (dmitryY > 0) {
   if (green > 0) {
    green--;
   }
   else if (purple > 0) {
    purple--;
   }
   dmitryY--;
  }
 }
 else {
  able = false;
 }
 
 if (michalZ <= green + purple + black) {
  while (michalZ > 0) {
   if (green > 0) {
    green--;
   }
   else if (purple > 0) {
    purple--;
   }
   else if (black > 0) {
    black--;
   }
   michalZ--;
  }
 }
 else {
  able = false;
 }
 
 if (able) {
  cout << "YES\n";
 }
 else cout << "NO\n";
 
 
 
 return 0;
}