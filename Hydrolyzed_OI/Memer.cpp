#include <bits/stdc++.h>
using namespace std;

int ans[110], primeList[110];

#define MOD (int)42069

bool isPrime(int n){
    if(n <= 1)
        return false;
    if(n <= 3)
        return true;
    if(n%2==0 || n%3==0)
        return false;
    for(int i = 5; i*i <= n; i+=6){
        if(n%i==0 || n%(i+2)==0)
            return false;
    }
    return true;
}

void gen(){
    int cnt = 0;

    for(int i = 1; cnt < 100; i++){
        if(isPrime(i)){
            cnt++;
            primeList[cnt] = i;
        }
    }
}


void memoi(){
    int firstVal = 2, secondVal = 1, l = 1, r;

    for(int i = 1; i <= 100; i++){
        r = primeList[i];
        for(; l < r; l++){
            firstVal *= 2;
            secondVal *= 2;
            firstVal %= MOD;
            secondVal %= MOD;
        }
        ans[i] = (((firstVal - 1) % MOD) * secondVal % MOD) % MOD;
    }
}

int main(){

    ios_base :: sync_with_stdio(0);
    cin.tie(0);

    gen();
    memoi();

    int q, n;

    cin >> q;

    while(q--){
        cin >> n;
        cout << ans[n] << "\n";
    }

    return 0;
}
