#include <iostream>
using namespace std;

#define endl "\n";

// retorna a soma dos n primeiros inteiros positivos
int soma(int n){

    if(n == 1){
        return 1;
    }else
        return soma(n-1) + n;

}

int main(){

    int num;
    cin >> num;

    cout << soma(num);
    

    return 0;
}
