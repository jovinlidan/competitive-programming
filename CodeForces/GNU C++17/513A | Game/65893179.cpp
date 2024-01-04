#include <bits/stdc++.h>
using namespace std;
int main(){
    int n1, n2, k1, k2, i, chk=1;
 
    cin >> n1 >> n2 >> k1 >> k2;
    while(n1 != 0 && n2 != 0){
        if(chk == 1){
            n1--;
        }
        else{
            n2--;
        }
 
        chk *= -1;
    }
    if(n2 == 0)
        cout <<"First\n";
    else
        cout << "Second\n";
 
 
 
 
 
 
 
return 0;
}