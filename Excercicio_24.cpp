#include <iostream>
#include <locale>

using namespace std;
int main() {
	setlocale (LC_ALL, "portuguese");
    
    
	int vetor[10];
    int numero;
    bool numeroExiste;
    
    for(int i=0; i<10; i++) {
        do{
            numeroExiste=false;
            cout<<"Digite um n�mero diferente: ";
            cin>>numero;

            
        for(int j=0; j<i; j++) {
            if(vetor[j] == numero) {
                numeroExiste=true;
                cout<<"N�mero j� foi digitado. Digite outro n�mero." <<endl;
                break;
            }
            }
        } while(numeroExiste);

        vetor[i]=numero;
    }

    cout<<"Vetor final:" <<endl;
    for (int i=0; i<10; i++) {
        cout<<vetor[i] <<" ";
    }
    cout<<endl;

    return 0;
}

