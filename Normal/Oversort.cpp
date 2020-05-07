/*
    TASK:
    LANG: CPP
    AUTHOR: Aphrodicez
    SCHOOL: RYW
*/

#include <bits/stdc++.h>
using namespace std;

struct A{
    char str[110];
    bool operator < (const A&o) const{
        if(strcmp(str,o.str)>0)
            return false;
        return true;
    }
};

int main()
{
    int n, Operation, i;
    scanf("%d",&Operation);
    scanf("%d",&n);
    if(Operation==1){
        int a[n];
        for(i=0; i<n; i++)
            scanf("%d",&a[i]);
        sort(a,a+n);
        for(i=0; i<n; i++)
            printf("%d ",a[i]);
        printf("\n");
        for(i=n-1; i>=0; i--)
            printf("%d ",a[i]);
    }
    else if(Operation==2){
        double a[n];
        for(i=0; i<n; i++)
            scanf("%lf",&a[i]);
        sort(a,a+n);
        for(i=0; i<n; i++)
            printf("%.0lf ",a[i]);
        printf("\n");
        for(i=n-1; i>=0; i--)
            printf("%.0lf ",a[i]);
    }
    else if(Operation==3){
        char a[n];
        for(i=0; i<n; i++)
            scanf(" %c",&a[i]);
        sort(a,a+n);
        for(i=0; i<n; i++)
            printf("%c ",a[i]);
        printf("\n");
        for(i=n-1; i>=0; i--)
            printf("%c ",a[i]);
    }
    else if(Operation==4){
        A a[n];
        for(i=0; i<n; i++)
            scanf(" %s",a[i].str);
        sort(a,a+n);
        for(i=0; i<n; i++)
            printf("%s ",a[i].str);
        printf("\n");
        for(i=n-1; i>=0; i--)
            printf("%s ",a[i].str);
    }
    return 0;
}

///Test Case :
/*
1
4
5 2 5 7
*/
/*
2
3
4.78 3.14 16
*/
/*
3
4
# A f *
*/
/*
4
5
peatt peat e pot handsome
*/
