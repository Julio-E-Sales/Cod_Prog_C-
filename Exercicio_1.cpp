#include <iostream>
#include<locale>

using namespace std;
int main() {
	setlocale (LC_ALL, "portuguese");
	
	float valorhoras;
	float meshoras;
	float salario;
	
	cout<<"Vamos descobrir seu sal�rio mensal\n";
	cout<<"Nos informe quanto recebe por hora trabalhada:\n";
	cout<<"R$"; 
	cin >>valorhoras;
	cout<<"Agora nos informe quantas horas trabalha por m�s:\n";
	cin >>meshoras;
	
	salario=valorhoras*meshoras;
	
	cout<<"Seguindo o que disse, seu sal�rio no m�s referido ser� de " << salario <<"R$";
	
	
	
	
	return 0; 
}
