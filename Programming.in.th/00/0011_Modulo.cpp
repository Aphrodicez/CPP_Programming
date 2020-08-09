/*
    TASK    : Modulo
    LANG    : CPP
    AUTHOR  : Aphrodicez
    SCHOOL  : RYW
*/
#include <bits/stdc++.h>
using namespace std;

int mark[42];

int main()
{
   int n = 10, num, cnt = 0;
   while(n--){
      cin >> num;
      num %= 42;
      if(mark[num])
         continue;
      cnt++;
      mark[num]++;
   }
   cout << cnt;
   return 0;
}
