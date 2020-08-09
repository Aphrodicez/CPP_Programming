/*
    TASK    : Min Max
    LANG    : CPP
    AUTHOR  : Aphrodicez
    SCHOOL  : RYW
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n, Min, Max, num;
   cin >> n;
   cin >> Min;
   Max = Min;
   n--;
   while(n--){
      cin >> num;
      Min = min(Min, num);
      Max = max(Max, num);
   }
   cout << Min << "\n" << Max;
   return 0;
}
