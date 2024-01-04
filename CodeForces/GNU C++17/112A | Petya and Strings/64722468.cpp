#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 string kata1, kata2;
 int i, j;
 bool isSame = true;
 cin >> kata1 >> kata2;
 
 for (i = 0; i < kata1.length(); i++)
 {
  if (((int)kata1[i] >= 65) && ((int)kata1[i] <= 90) ){
   kata1[i] = char((int)kata1[i]+32);
  }
  if (((int)kata2[i] >= 65) && ((int)kata2[i] <= 90)) {
   kata2[i] = char((int)kata2[i] + 32);
  }
 
 
  if (kata1[i] < kata2[i]) {
   cout << "-1" << endl;
   isSame = false;
   break;
  }
  else if (kata1[i] > kata2[i]) {
   cout << "1" << endl;
   isSame = false;
   break;
  }
 }
 
 if (isSame)
  cout << "0" << endl;
 
 
 
 
 
 
 
 
 
 
 
}