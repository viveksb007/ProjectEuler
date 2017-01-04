#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

unsigned long long n,t,sum,temp;
int main() {
    cin>>t;
    while(t--){
        cin>>n;
        temp = --n;
        
        sum = 0;
        while(temp%3 != 0) temp--;
        sum += (3 + temp)*(temp/3)/2;
        
        temp = n;
        while(temp%5 != 0) temp--;
        sum += (5 + temp)*(temp/5)/2;
        
        temp = n;
        while(temp%15 != 0) temp--;
        sum -= (15 + temp)*(temp/15)/2;
        
        cout<<sum<<endl;
    }
    return 0;
}

