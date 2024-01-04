#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
 int x[3], hasil = 0;
 
 cin >> x[0] >> x[1] >> x[2];
 
 sort(x, x + 3);
 
 hasil += x[1] - x[0];
 hasil += x[2] - x[1];
 
 cout << hasil << endl;
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}