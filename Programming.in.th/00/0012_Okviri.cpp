/*
    TASK    : OkViri
    LANG    : CPP
    AUTHOR  : Aphrodicez
    SCHOOL  : RYW
*/
#include <bits/stdc++.h>
using namespace std;

char s[20];

int main()
{
    char tmp, lasttmp = '#';
    cin >> s;
    int len;
    len = strlen(s);
    int i, j, k;
    for (i = 0; i < 5; i++) {
        lasttmp = '#';
        for (k = 0; k < len; k++) {
            for (j = 0; j < 4; j++) {
                if (k % 3 == 2)
                    tmp = '*';
                else
                    tmp = '#';
                if(j==2 && i==2)
                    cout << s[k];
                else if (i == 2) {
                    if(tmp=='*')
                        lasttmp = '*';
                    if (j == 0)
                        cout << lasttmp;
                    else
                        cout << ".";
                }
                else if (i % 2 == 1) {
                    if (j == 1 || j == 3) {
                        cout << tmp;
                    }
                    else
                        cout << ".";
                }
                else if(i==0 || i==4){
                    if(j == 2)
                        cout << tmp;
                    else
                        cout << ".";
                }
                else
                    cout << ".";
            }
            lasttmp = tmp;
        }
        if(i==2)
            cout << lasttmp;
        else
            cout << ".";
        cout << "\n";
    }
    return 0;
}
