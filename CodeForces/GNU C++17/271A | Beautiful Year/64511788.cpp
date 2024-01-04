#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 string yearStr;
 bool isDistinct = false;
 int yearInt=0, i, j, counts=0;
 
 cin >> yearInt;
 yearInt++;
 
 while (!isDistinct) {
  isDistinct = false;
  counts = 0;
  stringstream year;
  year << yearInt;
  year >> yearStr;
 
  for (i = 0; i < yearStr.length(); i++)
  {
   for (j = i+1; j < yearStr.length(); j++)
   {
    if (yearStr[i] == yearStr[j]) {
     yearInt++;
     continue;
    }
    else {
     counts++;
    }
   }
  }
  if (counts == 6)
   isDistinct = true;
 }
 
 
 cout << yearInt << endl;
 
 
 
 
 
 return 0;
}