#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 int n, i, box[100];
 
 cin >> n;
 
 for  (i = 0; i < n; i++)
 {
  cin >> box[i];
 }
 sort(box, box + n);
 
 for (i = 0; i < n; i++)
 {
  cout << box[i] << " ";
 }
 
 cout << endl;
 
 
 
 return 0;
}