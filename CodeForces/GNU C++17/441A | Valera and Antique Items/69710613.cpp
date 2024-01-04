#include <bits/stdc++.h>
using namespace std;
 
bool comparator(pair<int, int> isi, pair<int, int> isi2)
{
 return isi.second < isi2.second;
}
 
int main()
{
 int n, v;
 vector<pair<int, int>> isi;
 cin >> n >> v;
 for(int i = 1; i<= n; i++)
 {
  int seller, price, current = 0;
  cin >> seller;
  for(int j = 0; j < seller; j++)
  {
   cin >> price;
   if(v - price > current) current = v-price;
 
  }
  if(current != 0)isi.push_back({v-current, i});
 }
 sort(isi.begin(), isi.end(), comparator);
 cout << isi.size() << endl;
 for(int i = 0; i < isi.size(); i++)
 {
  if(i != 0) cout << " ";
  cout << isi[i].second;
 
 }
 
 
 
 
 
 return 0;
}