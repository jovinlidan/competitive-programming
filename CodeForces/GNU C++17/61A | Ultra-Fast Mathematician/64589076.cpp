#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 string number1, number2;
 int i, counts = 0;
 cin >> number1 >> number2;
 
 for (i = 0; i < number1.length(); i++)
 {
  if (number1[i] != number2[i]) {
   cout << '1';
  }
  else {
   cout << '0';
  }
 }
 
 cout << endl;
 
 
 
 
 
 
 
 
 return 0;
}