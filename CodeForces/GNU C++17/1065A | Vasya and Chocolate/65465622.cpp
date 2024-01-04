#include <bits/stdc++.h>
using namespace std;
int main() {
 long long int nTestcase, money, beli, gratis, hargaPieces, i, j, counts = 0;
 cin >> nTestcase;
 
 for (i = 0; i < nTestcase; i++)
 {
  counts = 0;
  cin >> money >> beli >> gratis >> hargaPieces;
 
  counts = (money / hargaPieces) + ((money / hargaPieces) / beli) * gratis;
  cout << counts << endl; 
 }
 
 
 return 0;
}