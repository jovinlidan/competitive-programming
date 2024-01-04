#include <bits/stdc++.h>
using namespace std;
int main(){
 
    int n, i, j, counts=0, k;
    string kata;
    cin >> n;
    for(i = 0; i < n ; i++){
        int mn = 1e9, mx = -1e9;
        bool isYes = true;
        cin >> kata;
        for(j = 0; j < kata.length(); j++){
            mn = min(mn, int(kata[j]));
            mx = max(mx, int(kata[j]));
        }
 
        int times = mx - mn;
        for(j = 0; j <= times ; j++){
            for(k = 0; k < kata.length(); k++){
                if(mn == int(kata[k])){
                    mn++;
                    //cout << mn << kata[k]<< endl;
                    kata[k] = NULL;
                }
 
 
            }
        }
        for(j = 0; j < kata.length(); j++){
            if(kata[j] != NULL){
                isYes = false;
                break;
            }
        }
        //cout << kata << endl;
        if(isYes) cout << "Yes\n";
        else cout << "No\n";
    }
 
 
 
 
 
return 0;
}