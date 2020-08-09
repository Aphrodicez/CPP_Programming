/*
    TASK    : Trik
    LANG    : CPP
    AUTHOR  : Aphrodicez
    SCHOOL  : RYW
*/
#include <bits/stdc++.h>
using namespace std;

int a[3];
char s[60];

int main()
{
    int i, len;
    a[0] = 1;
    a[1] = a[2] = 0;
    cin >> s;
    len = strlen(s);
    for(i=0; i<len; i++){
       if(s[i]=='A')
          swap(a[0], a[1]);
       if(s[i]=='B')
          swap(a[1], a[2]);
       if(s[i]=='C')
          swap(a[0], a[2]);
    }
    for(i=0; i<3; i++){
       if(a[i])
          cout << i+1;
    }
    return 0;
}
