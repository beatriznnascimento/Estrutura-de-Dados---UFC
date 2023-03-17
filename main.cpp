#include <iostream>
using namespace std;
/*int main(){

    std::cout << "Bom dia! \n";
    std::cout << "Digite um inteiro: \n";

    int valor = 0; //atribuição
    int valor2 (0); // inicialização direta
    int valor2 {0}; // inicialização uniforme
    std::cin >> valor; // lê um inteiro do terminal
    std::cout << "O valor digitado foi: " << valor << "\n";
}*/
int main () {
/* cout << " char : " << sizeof ( char ) << endl ;
 cout << " bool : " << sizeof ( bool ) << endl ;
 cout << " short : " << sizeof ( short ) << endl ;
 cout << " short int : " << sizeof ( short int ) << endl ;
 cout << " int : " << sizeof ( int ) << endl ;
 cout << " long int : " << sizeof ( long int ) << endl ;
 cout << " long : " << sizeof ( long ) << endl ;
 cout << " long long : " << sizeof ( long long ) << endl ;
 cout << " float : " << sizeof ( float ) << endl ;
 cout << " double : " << sizeof ( double ) << endl ;
 cout << " long double : " << sizeof ( long double );*/
    int n; //tamanho de vetor
    cin >> n; // usuario entra com a qtd
    int vetor[n]; // vetor recebe o tamnho que o usuário digitou

 for(int i = 0; i < n; i++){
    cin >> vetor[i];
 }

for(int i = n - 1; i >= 0; i--){
    cout << vetor[i] << endl;
}

}