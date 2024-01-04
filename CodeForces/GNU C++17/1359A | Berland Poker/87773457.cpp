#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
 int tc;
 cin >> tc;
 while(tc--)
 {
  int n, joker, k;
  cin >> n >> joker >> k;
  int card = n/k;
 
  int firstP = min(card, joker);
  joker -= firstP;
 
  int secondP = ceil(joker*1.0/(k-1));
  cout << firstP - secondP << '\n';
 
 
 
 }
}