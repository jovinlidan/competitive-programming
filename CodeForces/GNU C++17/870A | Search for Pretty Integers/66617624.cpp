#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, mn1 = 1e9, mn2 = 1e9, temp, data1[20], data2[20], counts[20] = {};
    set<int> dbl;
    cin >> n >> m;
 
    for(int i = 0; i < n ; i++)
    {
        cin >> data1[i];
        mn1 = min(mn1, data1[i]);
        counts[data1[i]]++;
        if(counts[data1[i]] == 2){
   dbl.insert(data1[i]);
        }
    }
    for(int i = 0; i < m ; i++)
    {
        cin >> data2[i];
        mn2 = min(mn2, data2[i]);
        counts[data2[i]]++;
        if(counts[data2[i]] == 2){
   dbl.insert(data2[i]);
        }
    }
    if(!dbl.empty()){
  auto first = dbl.begin();
  cout << *first;
    }else{
  if(mn1 > mn2){
   cout << mn2 << mn1 << endl;
  }else if (mn2 > mn1){
   cout << mn1 << mn2 << endl;
  }else{
   cout << mn1 << endl;
  }
    }
 
 
 
 
 
 
    return 0;
}