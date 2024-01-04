#include <bits/stdc++.h>
using namespace std;
 
int fpb(int x, int y) {
 if (x >= y) {
  for (int i = y ;i >= 1; i--)
  {
   if ((y % i == 0) && (x % i == 0)) {
    return i;
   }
  }
  return 1;
 }
 else {
  for (int i = x;i >= 1; i--)
  {
   if ((x % i == 0) && (y % i == 0)) {
    return i;
   }
  }
  return 1;
 }
 
}
 
int main() {
 
 int a, b, stones, i, counts = 0, turns = 1;
 cin >> a >> b >> stones;
 
 while (stones != 0) {
  if (turns == 1) {
   stones -= fpb(a, stones);
 
  }
  else if (turns == -1) {
   stones -= fpb(b, stones);
  }
 
  turns *= -1;
 }
 
 if (turns == -1) {
  cout << 0 << endl;
 }
 else {
  cout << 1 << endl;
 }
 
}