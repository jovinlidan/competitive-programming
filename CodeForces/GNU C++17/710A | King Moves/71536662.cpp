#include <bits/stdc++.h>
using namespace std;
int main()
{
 string k;
 cin>> k;
 char col = k[0];
 char row = k[1];
 
 if(k == "a8" || k == "h8" || k == "a1" || k == "h1")cout << "3\n";
 else if(row == '8' || row == '1' || col == 'a' || col == 'h') cout << "5\n";
 else cout << "8\n";
 
 
 
 
 
 
 
 
 
 return 0;
}