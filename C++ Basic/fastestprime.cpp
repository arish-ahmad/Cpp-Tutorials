#include<iostream>

using namespace std;

void sieve_of_eratosthenes(int n){

    bool prime[n+1];
    memset(prime,true,sizeof(prime));

    for(int p=2; p*p<=n; p++){
        if( prime[p] == true){
            for(int i=p*p; i<=n; i+=p)
                prime[i] = false;

        }
    }

    for(int i =2 ; i<=n; i++){
        if(prime[i])
            cout<<i<<endl;
    }
}

int main(){

    int n = 1000000;
    sieve_of_eratosthenes(n);
    return 0;
}