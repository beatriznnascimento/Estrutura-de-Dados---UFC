#include <iostream>
using namespace std;

int main(){

int n, ok = 0;
cin >> n;
int vetor[n];

    for(int i = 0; i < n; i++){ // recebe os elementos do vetor

        cin >> vetor[i];
    }

    for(int j = 0; j < n; j++){ // verifica se é crescente ou n
    
        if(j<=n-2 && vetor[j] > vetor[j+1]) 
            ok = 1;

    }
    if(ok == 1){
        cout << "precisa de ajuste";
    }
    else{
        cout << "ok";
    }
}






