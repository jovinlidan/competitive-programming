#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int nHouse, girlHouse, kDollars, ans=0, lt=1e9, rt =1e9, house[105], i;
    cin >> nHouse >> girlHouse >> kDollars;
 
    for(i = 1; i <= nHouse; i++){
        cin >> house[i];
    }
 
    for(i = girlHouse-1; i >= 1; i--){
        if(house[i] != 0){
            if(kDollars >= house[i]){
                lt = girlHouse - i;
                break;
            }
        }
    }
 
    for(i = girlHouse+1; i <= nHouse ; i++){
        if(house[i] != 0){
            if(kDollars >= house[i]){
                rt = i - girlHouse;
                break;
            }
        }
    }
 
    ans = min(rt, lt);
 
    cout << ans * 10 << endl;
 
 
 
 
 
return 0;
}