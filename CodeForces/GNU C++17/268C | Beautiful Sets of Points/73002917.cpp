#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int mn = min(n, m);
 
    int lows = 0, highs = mn;
 
 vector<pair<int, int>> pairs;
 cout << mn+1 << endl;
 for(int i = 0; i < mn+1; i++)
 {
  //pairs.push_back({lows, highs});
  cout << lows << " " << highs << endl;
  lows++;
  highs--;
 }
 
 //cout << pairs.size() << endl;
 
 return 0;
}