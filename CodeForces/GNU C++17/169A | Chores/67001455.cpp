#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n, a, b, x[2005];
 cin >> n >> a >> b ;
 for(int i = 0; i < n; i++){
  cin >> x[i];
 }
 sort(x, x+n);
 
 cout << (x[b] - x[b-1]) << endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    return 0;
}