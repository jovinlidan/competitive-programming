#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n, a, b;
 cin >> n;
 vector<pair<int, int >> arr;
 bool poorAlex= true;
 while(n--){
  cin >> a >> b;
  arr.emplace_back(make_pair(a, b));
 }
 
 sort(arr.begin(), arr.end());
 
 for(int i = 0; i < arr.size()-1; i++){
  if(arr[i].first < arr[i+1].first && arr[i].second > arr[i+1].second ) poorAlex = false;
 }
 if(poorAlex) cout << "Poor Alex\n";
 else cout << "Happy Alex\n";
 
 
 
 
 
    return 0;
}