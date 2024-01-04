#include <bits/stdc++.h>
using namespace std;
 
int hitungGold(int x, int y) {
 x = x - 1;
 y = y - 1;
 return ((x * 2) + (y * 2));
}
int main() {
 int x, y, k, i, total=0;
 cin >> x >> y >> k;
 
 while (k != 0) {
 
  total += hitungGold(x, y);
 
  x -= 4;
  y -= 4; 
 
  k--;
 }        
 cout << total << endl;
 
 
}