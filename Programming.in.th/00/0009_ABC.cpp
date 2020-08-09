/*
    TASK    : ABC
    LANG    : CPP
    AUTHOR  : Aphrodicez
    SCHOOL  : RYW
*/
#include <bits/stdc++.h>
using namespace std;
int a[3];
char s[3];
int main()
{
    int i;
    for(i=0; i<3; i++)
       cin >> a[i];
    cin >> s;
    sort(a, a + 3);
    for(i=0; i<3; i++){
       if(s[i]=='A')
          cout << a[0];
       if(s[i]=='B')
          cout << a[1];
       if(s[i]=='C')
          cout << a[2];
       cout << " ";
    }
    return 0;
}
