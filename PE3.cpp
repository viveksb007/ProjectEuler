#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef unsigned long long ull;

ull find_ans(ull n){
    ull i;
        ull root_n = sqrt(n);
        while(n%2 == 0){
            n /=2;
        }
        if(n == 1){ return 2;}
        for(i=3;i<= root_n;i+=2){
            while(n%i == 0){
                n /= i;
                if(n==1){ return i;}
            }
        }
        
    return n;
       

}

int main() {

    int t;
    ull n,i;
    cin>>t;
    while(t--){
        cin>>n;
         cout<<find_ans(n)<<"\n";
    }
    return 0;
}

