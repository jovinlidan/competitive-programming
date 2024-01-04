#include <bits/stdc++.h>
#define lli long long int
#define pb(x) push_back(x)
 
using namespace std;
 
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
 lli currEgy = 0, curHeight = 0, n, arr[100005]={}, total = 0;
 cin >> n;
 for(int i = 0; i < n; i++)
 {
  cin >> arr[i];
  currEgy += curHeight - arr[i];
  if(currEgy < 0)
  {
   total += abs(currEgy);
   currEgy = 0;
  }
  curHeight = arr[i];
 }
 cout << total << endl;
 
 
 
 
 
 return 0;
}
 