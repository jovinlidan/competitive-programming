#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int nStudents, nQuestions, score[1005]= {}, mx=-1e9, ans=0;
    string usAns[1005]= {};
    map <char, int> patokan;
 
    cin >> nStudents >> nQuestions;
 
    for(int i = 0; i< nStudents; i++)
    {
        cin >> usAns[i];
    }
    for(int i = 0; i < nQuestions; i++)
    {
        cin >> score[i];
    }
 
    for(int col = 0; col < nQuestions; col++)
    {
        patokan.clear();
        mx = -1e9;
        for(int row = 0; row < nStudents; row++)
        {
            patokan[usAns[row][col]]++;
            mx = max(mx, patokan[usAns[row][col]]);
        }
        ans += (mx * score[col]);
 
    }
 
    cout << ans << endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    return 0;
}