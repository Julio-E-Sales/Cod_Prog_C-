#include <iostream>
#include <locale>

using namespace std;
int main() {
	setlocale (LC_ALL, "portuguese");
 
 
    int vetor[10];
    int valorReferencia, MenorRef=0, Aparece=0;
    
    cout<<"Digite 10 n�meros inteiros:" <<endl;
    for(int i=0; i<10; i++) {
        cin>>vetor[i];
    }

    cout<<"Digite um valor de refer�ncia: ";
    cin>>valorReferencia;

    cout<<"N�meros maiores que o valor de refer�ncia:" <<endl;
    for(int i=0; i<10; i++) {
        if(vetor[i] > valorReferencia) {
            cout<<vetor[i] <<" ";
        }
    }
    cout<<endl;

	
    for(int i=0; i<10; i++) {
        if(vetor[i] < valorReferencia) {
            MenorRef++;
        }
    }
    cout<<"Quantidade de n�meros menores que o valor de refer�ncia: " <<MenorRef << endl;


    
    for(int i=0; i<10; i++) {
        if(vetor[i] == valorReferencia) {
            Aparece++;
        }
    }
    cout<<"Quantidade de vezes que o valor de refer�ncia aparece no vetor: " <<Aparece <<endl;

    return 0;
}
