#include <iostream>
#include <string>

using namespace std;

int main()
{

    string frase;
    getline(cin, frase);
    char vogal;
    for (int i = 0; i < frase.length(); i++)
    {

        if ((frase[i] == 'a' 
        || frase[i] == 'e' 
        || frase[i] == 'i' 
        || frase[i] == 'o' 
        || frase[i] == 'u') && frase[i+1] != ' ' && frase[i+2] == frase[i]){
                cout << frase[i];

        vogal = frase[i];
        while(frase[i] == vogal || frase[i] == ' ')
        i++;
        i--;
        }
        else cout << frase[i];
    }
}

#include <iostream>
using namespace std;

int main(){
    string str;
    
    getline(cin, str);
    
    for(int i = 0; i < (int) str.length(); i++){
        if((str[i] == 'a' || str[i] == 'e' || str[i] == 'o' 
        || str[i] == 'i' || str[i] == 'u') && str[i+1] == ' ' 
        && str[i] == str[i+2]){
            cout << str[i];
            char vogal = str[i];
            while(str[i] == vogal || str[i] == ' ') i++;
            i--;
        } else{
            cout << str[i];
        }
    }
}
