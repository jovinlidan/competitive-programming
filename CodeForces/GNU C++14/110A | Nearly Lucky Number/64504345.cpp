#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
 string strAngka;
 int  i, counts=0;
 cin >> strAngka;
 
 
 
 for (i = 0; i < strAngka.length(); i++)
 {
  if (((strAngka[i]) == '7') || (strAngka[i] ) == '4') {
   counts++;
  }
  
 }
 
 
 if ((counts == 7) || (counts == 4) || (counts == 47) || (counts == 74) )
  cout << "YES" << endl;
 else
  cout << "NO" << endl;
 
 
 
 
 
 
 return 0;
}