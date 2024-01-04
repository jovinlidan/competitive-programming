#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 string kata, reversedKata;
 cin >> kata >> reversedKata;
 int i, j, counts=0;
 
 if (kata.length() == reversedKata.length()) {
  for (i = 0; i < kata.length(); i++)
  {
   for (j = reversedKata.length()-1; j >= 0 ; j--)
   {
    if ((kata[i] == reversedKata[j]) && (kata.length() - 1 == i+j)){
     counts++;
    }
    
 
   }
  }
 }
 else {
  counts=-100000;
 }
 if (counts == kata.length())
  cout << "YES" << endl;
 else
  cout << "NO" << endl;
 
 
 
 return 0;
}