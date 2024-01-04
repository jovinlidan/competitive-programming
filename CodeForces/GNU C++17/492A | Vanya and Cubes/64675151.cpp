#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 int givenCube, currentUse=0,i, counts=1, level=0, total=0;
 cin >> givenCube;
 
 for (i = 1; i <= givenCube ; i++)
 {
  currentUse += i;
  total += currentUse;
  if (total > givenCube) {
   break;
  }
  level++;
  
 }
 
 cout << level << endl;
 
 
 
 
 
 
 
 return 0;
}