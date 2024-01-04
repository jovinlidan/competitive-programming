#include <bits/stdc++.h>
 
 
using namespace std;
int main()
{
    int link=0, pearl= 0, i;
    string necklace;
    cin >> necklace;
 
    for(i = 0; i < necklace.length(); i++)
    {
        if(necklace[i] == '-')
            link++;
        else
            pearl++;
    }
    if(pearl > 0)
    {
        if(link % pearl == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    else
        cout << "YES\n";
 
 
 
 
 
 
 
    return 0;
}