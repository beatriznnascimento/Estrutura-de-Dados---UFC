#include <iostream>
using namespace std;


bool palindromo(string str, int i, int j){
    if(i <= j)
        return true;
    else str[i] == str[j] && palindromo(str, i + 1, j - 1);
}

int main(){
    string str2 = "casa";
    cout << boolalpha;
    

    return 0;
}
