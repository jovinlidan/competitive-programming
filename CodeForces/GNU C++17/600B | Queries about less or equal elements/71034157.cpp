#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
 lli n, m;
 cin >> n >> m;
 vector<lli> nArr;
 lli mArr[200005] = {};
 lli temp;
 for(int i = 0; i < n; i++)
 {
  cin >> temp;
  nArr.emplace_back(temp);
 }
 sort(nArr.begin(), nArr.end());
 for(int i = 0; i < m; i++)
 {
  cin >> mArr[i];
 }
 
 for(int i = 0; i < m; i++)
 {
  if(i != 0) cout << " ";
  cout << upper_bound(nArr.begin(), nArr.end(), mArr[i]) - nArr.begin() ;
 }
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}