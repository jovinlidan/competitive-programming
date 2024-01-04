#include <bits/stdc++.h>
using namespace std;
int main() {
 
 int n, i, work[105], counts = 0, counted[105] = {};
 
 cin >> n;
 
 for (i = 0; i < n; i++)
 {
  cin >> work[i];
  if (counts > 2) {
   counts = 0;
  }
  counted[counts] += work[i];
 
  counts++;
 }
 if (counted[0] > counted[1] && counted[0] > counted[2]) {
  cout << "chest";
 }
 else if (counted[1] > counted[0] && counted[1] > counted[2]) {
  cout << "biceps";
 }
 else if (counted[2] > counted[1] && counted[2] > counted[0]) {
  cout << "back";
 }
 
 
 cout << endl;
 
 return 0;
}