#include<bits/stdc++.h>
using namespace std;

int friendsPairing(int n){
    if(n==1 || n==2){
        return n;
    }
    return friendsPairing(n-1) + (n-1) * friendsPairing(n-2);
}

int main(){
    cout<<friendsPairing(4)<<endl;
    cout<<friendsPairing(3)<<endl;
return 0;
}