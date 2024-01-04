#include <bits/stdc++.h>
using namespace std;
int main(){
 
    int word, total=0;
    cin >> word;
    while(true){
        total = 0;
        stringstream ss;
        ss << word;
        string kata;
        ss >> kata;
        for(int i = 0; i < kata.length(); i++){
            total += (kata[i]-48);
        }
        if(total % 4 == 0){
            cout << kata << endl;
            break;
        }else{
            word++;
        }
 
    }
 
 
 
 
 
 
return 0;
}