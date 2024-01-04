#include <bits/stdc++.h>
using namespace std;
 
int main() {
 int nTest, lengthNum, i, j;
 char number[105] = {};
 cin >> nTest;
 for (i = 0; i < nTest; i++)
 {
  cin >> lengthNum;
  bool isAble = false;
  bool isGet = false;
  for (j = 1; j <= lengthNum;j++)
  {
   cin >> number[j];
   if (!isGet) {
    if (number[j] == '8') {
     if (lengthNum - (j - 1) >= 11) {
      isAble = true;
      isGet = true;
     }
     else {
      isAble = false;
      isGet = true;
     }
 
    }
   }
   
  }
  if (isAble) cout << "YES\n";
  else cout << "NO\n";
 
 
 
 
  
 }
 
 
 
 return 0;
}