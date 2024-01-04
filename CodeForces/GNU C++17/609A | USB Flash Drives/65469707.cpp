#include <bits/stdc++.h>
using namespace std;
int main() {
 int nFd, mSize, aMB, i, fD[105], counts=0, total=0;
 cin >> nFd >> mSize;
 
 for (i = 0; i < nFd; i++)
 {
  cin >> fD[i];
 }
 sort(fD, fD + nFd, greater <int>());
 
 for (i = 0; i < nFd; i++)
 {
  total += fD[i];
  counts++;
  if (total >= mSize) {
   break;
  }
  
 }
 cout << counts << endl;
 
 return 0;
}