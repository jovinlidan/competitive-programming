#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n, m, i;
    string nameN[1005], ipN[1005], nameM, ipM;
    cin >> n >> m;
 
    for(i = 0; i < n; i++){
        cin >> nameN[i] >> ipN[i];
        ipN[i]+=';';
    }
 
 
    for(i = 0; i < m; i++){
        cin >> nameM >> ipM;
        for(int j = 0; j < n; j++){
            if(ipM == ipN[j]){
                cout << nameM << " " << ipM << " #" << nameN[j] << endl;
                break;
            }
        }
    }
 
 
 
 
 
 
 
 
 
 
    return 0;
}