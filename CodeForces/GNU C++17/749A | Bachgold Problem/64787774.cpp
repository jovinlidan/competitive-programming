#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
 
 int n;
 cin >> n;
 vector <int> hasil;
 
 while (n != 0) {
  //cout << n << endl;
  if ((n >= 2) && (n % 2 == 0)) {
   n -= 2;
   hasil.push_back(2);
   continue;
  }
  else if (n >= 3) {
   n -= 3;
   hasil.push_back(3);
   continue;
  }
  if (n == 0) {
   break;
  }
 
 
 }
 cout << hasil.size() << endl;
 
 for ( int i = 0; i < hasil.size(); i++)
 {
  cout << hasil.at(i) << " ";
 }
 cout << endl;
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}