#include <bits/stdc++.h>
using namespace std;
 
int main() {
 int n, k, i, prob[105] = {}, counts=0;
 
 cin >> n >> k;
 for (i = 0; i < n; i++)
 {
  cin >> prob[i];
 }
 
 for (i = 0; i < n; i++)
 {
  if (prob[i] <= k && prob[i] != -1) {
   counts++;
   prob[i] = -1;
  }
  else break;
 }
 for (i = n-1; i >= 0; i--)
 {
  if (prob[i] <= k && prob[i] != -1) {
   counts++; 
   prob[i] = -1;
  
  }
  else break;
 }
 cout << counts << endl;
 
 
 return 0;
}