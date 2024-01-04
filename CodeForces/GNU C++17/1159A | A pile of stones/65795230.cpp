#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, i, j, counts=0, total= 0;
    string sign;
 
    cin >> n;
    cin >> sign;
    for(i = 0; i < n; i++){
        if(sign[i] == '-') total++;
        if(sign[i] == '+'){
            for(j = i; j < n ; j++){
                if(sign[j] == '-'){
                    sign[i] = '?';
                    sign[j] = '?';
                    break;
                }
            }
        }
    }
 
    for(i = 0; i<n;i++){
        if(sign[i] == '-') total--;
        else if(sign[i] == '+') total++;
 
    }
 
    cout << total << endl;
 
 
 
 
 
 
 
 
 
return 0;
}