#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 string kata;
 int i, j;
 cin >> kata;
 bool isOutput = false;
 
 for (i = 0; i < kata.length(); i++)
 {
  if ((kata[i]) == 'H' || (kata[i]) == 'Q' || (kata[i]) == '9') {
   isOutput = true;
  }
 }
 
 if (isOutput)
  cout << "YES" << endl;
 else
  cout << "NO" << endl;
 
 
 
 return 0;
}