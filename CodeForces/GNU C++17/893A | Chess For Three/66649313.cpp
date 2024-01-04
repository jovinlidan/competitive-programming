#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
 
    bool a=true, b=true, c=false, isYes=true;
    int n, temp;
    cin >> n;
 
    for(int i = 0; i < n; i++){
        cin >> temp;
        if(temp == 1){
            if(!a){
                isYes = false;
            }
            b = !b;
            c = !c;
 
        }else if(temp == 2){
            if(!b){
                isYes = false;
            }
 
            a = !a;
            c = !c;
 
        }else if(temp == 3){
            if(!c){
                isYes = false;
            }
 
            b = !b;
            a = !a;
 
        }
    }
    if(isYes) cout << "YES\n";
    else cout << "NO\n";
 
 
 
 
 
 
 
    return 0;
}