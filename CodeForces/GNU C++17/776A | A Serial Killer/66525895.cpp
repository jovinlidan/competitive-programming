#include <bits/stdc++.h>
using namespace std;
int main()
{
    string  nm1, nm2, nm[5];
    int n, i;
    cin >> nm1 >> nm2;
    cin >> n;
 
    cout << nm1 << " "<< nm2 << endl;
    nm[0] = nm1;
    nm[1] = nm2;
    for(i = 0; i < n; i++){
 
        cin >> nm1 >> nm2;
        if(nm1 != nm[0]){
            nm[1] = nm2;
            cout << nm2 << " " << nm[0];
        }else{
            nm[0] = nm2;
            cout << nm2 << " " << nm[1];
        }
        cout << endl;
    }
 
 
 
 
 
    return 0;
}