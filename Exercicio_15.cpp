#include <iostream>
#include <locale>

using namespace std;
int main() {
	setlocale (LC_ALL, "portuguese");

	
	int num, num1, num2, proximo;
	
	
	cout<<"Vamos construir uma sequ�ncia da S�rie de Fibonacci !!!" <<endl;
	
	cout<<"Quantos n�meros da s�rie de Fibonacci deseja gerar? \n";
	cin>>num; 
	
	if(num > 0){
		num1=0;
		num2=1;
		
		cout<<"A s�rie de Fibonacci que tem "<<num <<" n�meros fica: "<<endl;
		cout<<num1 <<" " <<num2 <<" ";
		
	for (int i = 2; i < num; i++) {
        proximo = num1 + num2;
        cout << proximo << " ";
        num1 = num2;
        num2 = proximo;
    }
		
			
	}
	else{
		
		cout<<"N�mero inv�lido!!! "<<endl;
	}
	
	
	
	return 0;
}
