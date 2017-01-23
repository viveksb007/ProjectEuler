#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef unsigned long long ull;
#define MAX 10000
#define MAXN 105000
vector<ull> prime;
bool temp_prime[MAXN+1] = {false};

void seive(){
    prime.push_back(2);
    for(ull i=3;i<=sqrt(MAXN);i+=2){
        if(temp_prime[i] == false){
            for(ull j=i*i;j<=MAXN;j+=i){
                temp_prime[j]=true;
            }
        }
    }
    for(ull i=3;i<=MAXN;i+=2){
        if(temp_prime[i]==false){
            prime.push_back(i);
        }
    }
}

int main() {
    ull t,n;
    seive();
    cin>>t;
    while(t--){
        cin>>n;
        cout<<prime[n-1]<<endl;
    }
    
    return 0;
}

