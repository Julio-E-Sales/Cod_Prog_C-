#include <iostream>
#include <locale>
#include <string>

using namespace std;



bool validar(string cpf) {
    if (cpf.size() != 11) {
        	return false;
    }
    
    for (size_t i = 0; i < cpf.size(); ++i) {
        if (!isdigit(cpf[i])) {
            return false;
        }
    }

    		return true; 
}
int main() {
	setlocale (LC_ALL, "portuguese");

	string cpf;
	
	cout<<"Digite o CPF:";
	cin>>cpf;
	
	if(validar(cpf)){
		
		cout<<"O CPF digitado � v�lido!!!" <<endl;
		
	}
	else{
		
		cout<<"CPF digitado � inv�lido!!!" <<endl;
	
	}
	
	
	return 0;
}
