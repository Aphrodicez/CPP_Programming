/*
    TASK    : Character Checker
    LANG    : CPP
    AUTHOR  : Aphrodicez
    SCHOOL  : RYW
*/
#include <bits/stdc++.h>
using namespace std;

char s[10010];

int main()
{
    cin >> s;
    int len, up = 0, low = 0, i;
    len = strlen(s);
    for(i=0; i<len; i++){
       if(isupper(s[i]))
          up = 1;
       if(islower(s[i]))
          low = 1;
    }
    if(low+up==2)
       cout << "Mix";
    else if(low)
       cout << "All Small Letter";
    else if(up)
       cout << "All Capital Letter";
    cout << endl;
    return 0;
}
