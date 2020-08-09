/*
    TASK    : Seven Dwarves
    LANG    : CPP
    AUTHOR  : Aphrodicez
    SCHOOL  : RYW
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, sum = 0;
    int a[9];
    for(i=0; i<9; i++){
       cin >> a[i];
       sum += a[i];
    }
    for(i=0; i<9; i++){
       for(j=i+1; j<9; j++){
          if(sum - a[i] - a[j] == 100){
             a[i] = a[j] = -1;
          }
       }
    }
    for(i=0; i<9; i++){
       if(a[i]==-1)
          continue;
       cout << a[i] << "\n";
    }
    return 0;
}
