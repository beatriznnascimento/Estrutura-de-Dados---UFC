#include <iostream>
using namespace std;



bool primo (int n){

    for(int i = 2; i < n; i++){ // vai procurar um divisor de 2 até n-1

        if(n % i == 0){ 
            return false;
        }
    }
       return true;
}
int main(){

    int a, b;

    cin >> a >> b;

    for(int i = a; i <= b; i++){

       if(primo(i))
      cout << i << endl;
        
    }

}


        
