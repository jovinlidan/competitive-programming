#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 int n, bil[100], i, countGenap = 0, countGanjil=0, idxGenap, idxGanjil;
 
 cin >> n;
 for (i = 1; i <= n; i++)
 {
  cin >> bil[i];
 }
 
 for (i = 1; i <= n; i++)
 {
  if (bil[i] % 2 == 0) {
   countGenap++;
   idxGenap = i;
  }
  else {
   countGanjil++;
   idxGanjil = i;
  }
 }
 
 if (countGanjil < countGenap) {
  cout << idxGanjil << endl;
 }
 else {
  cout << idxGenap << endl;
 }
 
 
 
 
 
 return 0;
}