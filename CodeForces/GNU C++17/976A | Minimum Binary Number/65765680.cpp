#include <bits/stdc++.h>
using namespace std;
int main(){
 
    int n;
    string kata;
    bool isOne = false;
    char temp;
    cin >> n;
 
    for(int i =0; i < n ; i++){
        cin >> temp;
        if(temp == '0')
            kata += temp;
        else
            isOne = true;
 
    }
    if(isOne)
        cout << "1" << kata << endl;
    else
        cout  << kata << endl;
 
return 0;
}