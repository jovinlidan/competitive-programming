#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 int n, k, l, c, d, p, nl, np;
 cin >> n >> k >> l >> c >> d >> p >> nl >> np;
 int first = int((k * l)/ nl);
 int second = c * d;
 int third = int(p / np);
 int hasil = min(first, min(second, third));
 hasil = int(hasil / n);
 
 
 cout << hasil << endl;
 
 
 
 
 return 0;
}