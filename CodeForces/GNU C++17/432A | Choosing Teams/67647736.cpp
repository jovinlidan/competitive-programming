#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
 lli n, k, y[2005]={}, i, cnt=0;
 cin >> n >> k;
 for(i = 0; i < n; i++){
  cin >> y[i];
  if(y[i] <= 5-k) cnt++;
 }
 
 cout << cnt/3 <<endl;
 
 
 
 
 
    return 0;
}