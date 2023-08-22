#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n, m, aux;
    
    cin >> n;
    vector<int> fila(n);
    for(int i = 0; i < n; i++){
        cin >> fila[i];
    }
    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> aux;
        for(int j = 0; j < n; j++){
            if(fila[j] == aux){
                fila.erase(fila.begin() + j);
                n--;
                break;
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << fila[i] << " ";
    }
    cout << endl;
}