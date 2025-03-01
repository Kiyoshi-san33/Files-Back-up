#include <chrono>
#include <iostream>
#include <cmath>

using namespace std;

int isPrime(int n){
    if(n<=1) return 0;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0) return 0;
    }
    return 1;
}

int main(){
    auto start = chrono::high_resolution_clock::now();

    int N = 1000000;
    int primes = 0;
    for(int i = 1; i<N; i++)
        primes += isPrime(i);

    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> elapsed = end-start;
    cout << primes << endl;
    cout << "Elapsed time: " << elapsed.count() << "s" << endl;
}
