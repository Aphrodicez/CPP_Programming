/*
    TASK:
    LANG: CPP
    AUTHOR: Aphrodicez
    SCHOOL: RYW
*/

#include <bits/stdc++.h>
using namespace std;

int a[3];

int main()
{
    int sum, i, Rock, Paper, Scissors;
    for (i = 0; i < 3; i++) {
        scanf("%d", &a[i]);
    }
    sum = a[0] + a[1] + a[2];
    if (sum != 100) {
        printf("BUG");
        return 0;
    }
    Rock = a[0], Paper = a[1], Scissors = a[2];
    sort(a, a + 3);
    if (a[1] == a[2]) {
        printf("I DON'T KNOW");
        return 0;
    }
    if (Rock == a[2]) {
        printf("PAPER");
    }
    else if (Paper == a[2])
        printf("SCISSORS");
    else
        printf("ROCK");
    return 0;
}
