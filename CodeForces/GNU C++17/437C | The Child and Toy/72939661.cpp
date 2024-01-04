#include <bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int v, path;
 bool visited[1005] = {};
 const int MAXN = -1e9;
 long long ans = 0;
 cin >> v >> path;
    int bobot[1005] = {}, totalBobot[1005] = {};
    vector<vector<int>> listV(v+5);
    for(int i = 1; i <= v; i++)cin >> bobot[i];
 int l, r;
 memset(totalBobot, 0, sizeof(totalBobot));
 for(int i = 1; i <= path; i++)
 {
  cin >> l >> r;
  listV[l].push_back(r);
  listV[r].push_back(l);
  totalBobot[l] += bobot[r];
  totalBobot[r] += bobot[l];
 }
 int mn = MAXN, titik = -1;
 //cout << listV[4].size() << "SIZE"<< endl;
 while(1)
 {
  mn = MAXN;
  titik = -1;
 
  for(int i = 1; i<=v ; i++)
  {
   if(bobot[i] >= mn && !visited[i])
   {
    mn = bobot[i];
    titik = i;
   }
  }
  visited[titik] = true;
  //cout << totalBobot[titik] << endl;
  if(mn == MAXN)break;
  ans+= totalBobot[titik];
  totalBobot[titik] = MAXN;
  for(int i = 0; i < listV[titik].size(); i++)
  {
   int temp = listV[titik][i];
   //cout << totalBobot[temp] << "-TEMP-" << temp << '\n';
   if(totalBobot[temp] == MAXN)continue;
   totalBobot[temp] -= bobot[titik];
  }
 }
 cout << ans << endl;
 
 
 
 
 
 
 
 return 0;
}