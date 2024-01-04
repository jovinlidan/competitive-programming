#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 string kata, set[1000];
 getline(cin, kata);
 int i, counts=0, j, hasil=0;
 
 for (i = 0; i < kata.length(); i++)
 {
  if ( ((int)kata[i] >= 97) && ((int)kata[i] <= 122) ) {
   set[counts] = kata[i]; 
   counts++;
  }
 }
 
 sort(set->begin(), set->end());
 
 
 for (i = 0; i < counts; i++)
 {
  for (j = i+1; j < counts; j++)
  {
   if (set[i] == set[j]) {
    set[j] = "NULL";
   }
  }
 }
 
 for (i = 0; i < counts; i++)
 {
  if (set[i] != "NULL") {
   hasil++;
  }
 }
 cout << hasil << endl;
 
 
 
 
}