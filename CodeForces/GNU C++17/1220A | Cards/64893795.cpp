#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 int n, i, minOne, minZero;
 map <char, int> huruf;
 char temp;
 
 cin >> n;
 for ( i = 0; i < n; i++)
 {
  cin >> temp;
  huruf[temp]++;
 }
 
 minOne = min(huruf['o'], min(huruf['n'], huruf['e']));
 huruf['o'] -= minOne;
 huruf['e'] -= minOne;
 
 minZero = min(huruf['z'], min(huruf['e'], min(huruf['r'], huruf['o'])));
 
 for (i = 0; i < minOne; i++)
 {
  cout << 1 << " ";
 }
 for (i = 0; i < minZero; i++)
 {
  cout << 0 << " ";
 }
 cout << endl;
 return 0;
}