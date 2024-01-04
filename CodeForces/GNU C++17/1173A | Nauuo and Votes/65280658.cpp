#include <bits/stdc++.h>
using namespace std;
int main() {
 int x, y, z;
 cin >> x >> y >> z;
 
 if ((x + z == y) && (y + z == x)) {
  cout << 0;
 }
 else if ((x + z > y) && (y + z < x)) {
  cout << "+";
 }
 else if ((y + z > x) && (x + z < y)) {
  cout << "-";
 }
 else if ((x + z > y) && (y + z > x)) {
  cout << "?";
 }
 else if ((x + z == y) && (y + z != x)) {
  cout << "?";
 }
 else if ((y + z == x) && (x + z != y)) {
  cout << "?";
 }
 
 cout << endl;
 
 
 return 0;
}