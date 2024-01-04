#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
 lli n, total=0, mn = 0;
 cin >> n;
 if(n % 2 == 0) mn = 1;
 
 for(int i = 1; i <= n; i++)
 {
  total+=i;
 }
 cout << total/(n+1) - mn << endl;
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}