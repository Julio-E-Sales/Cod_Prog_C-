#include <iostream>
#include <locale>
#include <unistd.h>

using namespace std;
int main() {
		setlocale (LC_ALL, "portuguese");

	
	int ano;
	
	cout<<"Descobrindo se o Ano � bissexto ou n�o!!";
	cout<<endl;
	cout<<endl;
	
	cout<<"Informe qual ano deseja descobrir: ";
	cin>>ano;
	cout<<endl;
	
	sleep(1.5);
	
	if(ano%4==0){
		cout<<"O ano informado � um ano bissexto"<<endl;
	}else{
		cout<<"O ano informado n�o � um ano bissexto"<<endl;
	}
	
	return 0;
}
