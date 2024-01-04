#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long int nDays, mxName, temp, i, j, ans=0, mods = 0;
 
    cin >> nDays >> mxName;
    for(i = 0; i < nDays; i++){
        cin >> temp;
        cout << (temp + mods) / mxName;
        if(i != nDays-1) cout << " ";
        mods = (temp+mods) % mxName;
    }
 
 
 
 
return 0;
}