#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
 int n, i, j, anak, counts = 1;
 vector <int> child, hasil;
 
 cin >> n; 
 for (i = 0; i < n; i++)
 {
  cin >> anak;
  child.push_back(anak);
 }
 for ( j = 0; j < n; j++)
 {
  for (i = 0; i < n; i++)
  {
   if (child.at(i) == counts) {
    hasil.push_back(i);
    counts++;
    child.at(i) = NULL;
   }
   if (counts > 3) counts = 1;
  }
 }
 int hasilAkhir = int(hasil.size() / 3);
 cout << hasilAkhir << endl;
 counts = 0;
 for (i = 0; i < hasilAkhir*3; i++)
 {
  cout << hasil.at(i)+1 << " ";
  counts++;
 
  if (counts == 3) {
   cout << endl;
   counts = 0;
  }
 }
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}