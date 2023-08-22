#include <iostream>
using namespace std;

int max(int v[], int n){
    if(n == 1){
        return v[0];
    }
    else{
        int maxi = max(v, n - 1);
        if(maxi >= v[n-1]) return maxi;
        else return v[n-1];

    }
    
}
int main(){

    

    return 0;
}

