#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 int n, score, counts = 0, min, max, i;
 cin >> n;
 
 for (i = 0; i < n; i++)
 {
  cin >> score;
  if (i == 0) {
   min = score;
   max = score;
  }
 
  if (score < min) {
   counts++;
   min = score;
  }
  if (score > max) {
   counts++;
   max = score;
  }
 }
 
 cout << counts << endl;
 
 
 
 
 
 
 
 
 
 return 0;
}