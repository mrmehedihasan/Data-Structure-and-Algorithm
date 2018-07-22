#include <bits/stdc++.h>

using namespace std;

void sieve(int t){
    bool primes[t+1];
    for(int i=0; i<t+1; i++){primes[i]=true;}
    for(int i=2; i<=sqrt(t); i++){
        for(int j=2; i*j<=t; j++){
            primes[i*j] = false;
        }
    }
    for(int i=2; i<t; i++){
        if(primes[i]){
            cout << i << endl;
        }
    }

}


int main(){

    sieve(10000);

    return 0;
}
