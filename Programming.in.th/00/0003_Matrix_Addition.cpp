/*
    TASK    : Matrix Addition
    LANG    : CPP
    AUTHOR  : Aphrodicez
    SCHOOL  : RYW
*/
#include <bits/stdc++.h>
using namespace std;

int a[110][110];

int main()
{
    int r, c, i, j, num;
    cin >> r >> c;
    for(i=0; i<r; i++){
       for(j=0; j<c; j++){
          cin >> a[i][j];
       }
    }
    for(i=0; i<r; i++){
       for(j=0; j<c; j++){
          cin >> num;
          a[i][j] += num;
       }
    }
    for(i=0; i<r; i++){
       for(j=0; j<c; j++){
          cout << a[i][j] << " ";
       }
       cout << endl;
    }
    return 0;
}
