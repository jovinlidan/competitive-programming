#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 string line1, line2, line3;
 bool hasil = true;
 int counts = 0, i, j;
 
 cin >> line1 >> line2 >> line3;
 
 for (i = 0; i < line3.length(); i++)
 { 
  for (j = 0; j < line1.length(); j++)
  {
   if (line3[i] == line1[j]) {
    line3[i] = NULL;
    line1[j] = NULL;
   }
  }
 }
 
 for (i = 0; i < line3.length(); i++)
 {
  for (j = 0; j < line2.length(); j++)
  {
   if (line3[i] == line2[j]) {
    line3[i] = NULL;
    line2[j] = NULL;
   }
  }
 }
 
 //cout << line1 << line2 << line3 << endl;
 
 for (i = 0; i < line3.length(); i++)
 {
  if (hasil == false)
   break;
  if (line3[i] != NULL) {
   hasil = false;
  }
 
 }
 for (i = 0; i < line2.length(); i++)
 {
  if (hasil == false)
   break;
  if (line2[i] != NULL) {
   hasil = false;
  }
 
 }
 for (i = 0; i < line1.length(); i++)
 {
  if (hasil == false)
   break;
  if (line1[i] != NULL) {
   hasil = false;
  }
 
 }
 
 if (line1.length() + line2.length() > line3.length())
  hasil = false;
 
 if (hasil)
  cout << "YES\n";
 else
  cout << "NO\n";
 
 //cout << line3;
 
 return 0;
}