#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 int numberContest, minPoint;
 int pointI[105], i, j, counts = 0;
 
 cin >> numberContest >> minPoint;
 
 for (i = 0; i < numberContest; i++)
 {
  cin >> pointI[i];
  
 }
 
 for (i = 0; i < numberContest; i++)
 {
  if ((pointI[i] >= pointI[minPoint-1]) && (pointI[i] > 0)){
   counts++;
  }
 }
 
 cout << counts << endl;
 
 
 
 
 
 
 
 
 return 0;
}