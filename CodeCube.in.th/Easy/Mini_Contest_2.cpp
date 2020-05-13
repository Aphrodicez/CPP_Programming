/*
    TASK: Mini Contest 2
    LANG: CPP
    AUTHOR: Aphrodicez
    SCHOOL: RYW
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, ch = 1, i;
    char last_letter, this_letter;
    scanf("%d", &n);
    scanf(" %c", &last_letter);
    for (i = 1; i < n; i++) {
        scanf(" %c", &this_letter);
        if (this_letter == last_letter)
            ch = 0;
        last_letter = this_letter;
    }
    if (!ch)
        printf("Wrong Answer");
    else
        printf("Accepted");
    return 0;
}
