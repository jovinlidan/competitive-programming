#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 string kata;
 cin >> kata;
 int i, j, counts = 0, counts2=0;
 
 for (i = 0; i < kata.length(); i++)
 {
  if (((int)kata[i] >= 65) && ((int)kata[i] <= 90)) {
   counts++;
  }
  if (i == 0) {
   if (((int)kata[0] >= 97) && ((int)kata[0] <= 122)) {
    for (j = i+1; j < kata.length(); j++)
    {
     if (((int)kata[j] >= 65) && ((int)kata[j] <= 90)) {
      counts2++;
     }
    }
   }
  }
  
 }
 if ((counts == kata.length()) || (counts2 == kata.length() - 1)) {
  for (i = 0; i < kata.length(); i++)
  {
   if (i == 0) {
    if (((int)kata[i] >= 97) && ((int)kata[i] <= 122)) {
     kata[i] = char((int)kata[i] - 32);
    }
    if ((counts == kata.length()) ){
     if (((int)kata[i] >= 65) && ((int)kata[i] <= 90)) {
      kata[i] = char((int)kata[i] + 32);
     }
    }
    
     
   }
   else {
    if (((int)kata[i] >= 65) && ((int)kata[i] <= 90)) {
     kata[i] = char((int)kata[i] + 32);
    }
   }
  }
 }
  
 
 cout << kata << endl;
 
 return 0;
}