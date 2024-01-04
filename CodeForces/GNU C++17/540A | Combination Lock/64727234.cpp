#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
 
 long long int n;
 long long int i,counts = 0;
 string num1, num2;
 cin >> n >> num1 >> num2;
 for (i = 0; i < n; i++)
 {
  int digit1 = int((int)num1[i] - '0');
  int digit2 = int((int)num2[i] - '0');
 
  if (abs(digit1 - digit2) <= (10 - abs(digit1 - digit2))) {
   counts += abs(digit1 - digit2);
  }
  else {
   counts += (10 - abs(digit1 - digit2));
  }
 }
 cout << counts << endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 /*for (i = 0; i < n; i++)
 {
  ten = 10;
  tenBagi = 10;
  ten = pow(ten, i+1);
  tenBagi = pow(tenBagi, i);
  int digit1 = trunc((num1 % ten) / tenBagi);
  int digit2 = trunc((num2 % ten) / tenBagi);
  
  if (abs(digit1 - digit2) <= (10 - abs(digit1 - digit2))) {
   counts += abs(digit1 - digit2);
  }
  else {
   counts += (10 - abs(digit1 - digit2));
  }
 }
 
 cout << counts << endl;
 
*/
 
 
 
 
 return 0;
}