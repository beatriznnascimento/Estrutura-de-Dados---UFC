#include <iostream>
using namespace std;

void bubblesort(int A[], int l, int r){
    for (int i = l; i < r; i++){
        for (int j = r; j > i; j--){
            if (A[j] < A[j - 1]){
                int aux = A[j];
                A[j] = A[j - 1];
                A[j - 1] = aux;
            }
        }
    }
}
int main(){





    
}