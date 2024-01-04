#include <bits/stdc++.h>
 
using namespace std;
 
 
int main()
{
 string kata;
 cin >> kata;
 string temp;
 temp += kata;
 reverse(kata.begin(), kata.end());
 temp += kata;
 cout << temp;
 
 
 
    return 0;
}