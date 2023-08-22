#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, aux;
    vector<int> vetor;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> aux;
        vetor.push_back(aux);
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-1; j++){
            if(vetor[j] > vetor[j+1]){
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;


}
