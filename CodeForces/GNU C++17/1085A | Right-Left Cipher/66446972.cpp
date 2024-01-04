#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int n, counts = 0, left=0, right=0, i;
    string kata;
    char newKata[60];
    cin >> kata;
    left = right = (kata.length()/2) - 1 + (kata.length()%2);
    while(left >= 0 || right <=kata.length()-1){
        if(right <= kata.length() - 1){
            newKata[counts] = kata[right];
            //cout << newKata[counts] << endl;
            if(left != right) counts++;
            right++;
 
        }if (left >= 0){
            newKata[counts] = kata[left];
            //cout << newKata[counts] << endl;
            left--;
            counts++;
        }
 
    }
 
    for(int i = 0 ; i < kata.length(); i++){
        cout << newKata[i];
    }
 
 
 
 
 
 
return 0;
}