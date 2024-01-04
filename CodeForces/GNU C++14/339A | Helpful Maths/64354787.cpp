#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 string deretBil;
 char temp;
 cin >> deretBil;
 int i, j;
 
 for (i = 0; i <= deretBil.length(); i+=2)
 {
  for (j = i+2; j < deretBil.length() ; j+=2)
  {
   if ((int)deretBil[i] > (int)deretBil[j]) {
    temp = deretBil[i];
    deretBil[i] = deretBil[j];
    deretBil[j] = temp;
   }
  }
  
 
 }
 cout << deretBil;
 
 
 
 
 
 
 return 0;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main() {
//
// string deretBilPlus, plus, newString,temp;
// 
// cin >> deretBilPlus;
// int i, j, counts;
// string deretBil[100];
// counts = 0;
// for (i = 0; i < deretBilPlus.length(); i+=2)
// {
//  string newString = deretBilPlus.substr(i, deretBilPlus.find("+"));
//  
//  deretBil[counts] = newString;
//
//  
//  counts++;
// }
//
// for (i = 0; i <= trunc((deretBilPlus.length() / 2)); i++)
// {
//  for (j = i+1; j <= trunc((deretBilPlus.length() / 2)); j++)
//  {
//   if ((int)deretBil[i] > deretBil[j]) {
//
//   }
//  }
// }
//
//
//
// cout << newString;
// 
//
//
// 
//
//
//
//
//
// return 0;
//}