#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef unsigned long long ull;
int main() {

    ull t,n,sum,a = 0,b = 2,c = 0;
    cin>>t;
    while(t--){
        cin>>n;
        sum = 2;
        a = 0;
        b = 2;
        c = 0;
        while(c <= n){
            sum += c;
            c = 4*b + a;
            a = b;
            b = c;
        }
        cout<<sum<<endl;
    }
    return 0;
}
