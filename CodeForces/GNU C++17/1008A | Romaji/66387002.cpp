#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string kata;
    bool isYes = true;
    cin >> kata;
    int i, j, counts= 1, ans=0;
 
    for(i = 1; i < kata.length(); i+=2)
    {
        if(kata[i] != 'n' && kata[i-1] != 'n'){
            if(kata[i] != 'a' && kata[i] != 'e'&& kata[i] != 'i'&& kata[i] != 'o'&& kata[i] != 'u'){
                if(kata[i-1] != 'a' && kata[i-1] != 'e' && kata[i-1] != 'i'&& kata[i-1] != 'o'&& kata[i-1] != 'u'){
                    isYes = false;
                    //cout << kata[i] << endl;
                }
            }
 
        }else if (kata[i] == 'n'){
            if(kata[i-1] != 'a' && kata[i-1] != 'e' && kata[i-1] != 'i'&& kata[i-1] != 'o'&& kata[i-1] != 'u' && kata[i-1] != 'n'){
                isYes = false;
            }
 
        }
 
 
 
    }
    for(i = 2; i < kata.length(); i+=2)
    {
        if(kata[i] != 'n' && kata[i-1] != 'n'){
            if(kata[i] != 'a' && kata[i] != 'e'&& kata[i] != 'i'&& kata[i] != 'o'&& kata[i] != 'u'){
                if(kata[i-1] != 'a' && kata[i-1] != 'e' && kata[i-1] != 'i'&& kata[i-1] != 'o'&& kata[i-1] != 'u'){
                    isYes = false;
                    //cout << kata[i] << endl;
                }
            }
 
        }else if (kata[i] == 'n'){
            if(kata[i-1] != 'a' && kata[i-1] != 'e' && kata[i-1] != 'i'&& kata[i-1] != 'o'&& kata[i-1] != 'u' && kata[i-1] != 'n'){
                isYes = false;
            }
 
        }
 
 
 
    }
 
 
    if(kata[kata.length()-1] == 'a' || kata[kata.length()-1] == 'e' || kata[kata.length()-1] == 'o' || kata[kata.length()-1] == 'i' || kata[kata.length()-1] == 'u' || kata[kata.length()-1] == 'n')
    {
 
    }
    else
    {
        isYes = false;
    }
 
    if(isYes)
        cout << "YES\n";
    else
        cout << "NO\n";
 
 
}