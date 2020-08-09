/*
    TASK    : Grading
    LANG    : CPP
    AUTHOR  : Aphrodicez
    SCHOOL  : RYW
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int score, a, b, c;
    cin >> a >> b >> c;
    score = a + b + c;
    if(score >= 80)        cout << "A";
    else if(score >= 75)   cout << "B+";
    else if(score >= 70)   cout << "B";
    else if(score >= 65)   cout << "C+";
    else if(score >= 60)   cout << "C";
    else if(score >= 55)   cout << "D+";
    else if(score >= 50)   cout << "D";
    else cout << "F";
    return 0;
}
