#include <iostream>
#include <cmath>
#include <locale>

using namespace std;

int main() {
	setlocale (LC_ALL, "portuguese");

int a, b, c, delta, raiz_real, raiz_1, raiz_2;
	
	cout<<"Descobrindo a raiz da equa��o de segundo grau (ax� + bx + c) \n";
	cout<<endl;
	cout<<"Informe o valor de 'a':";
	cin>>a;
	cout<<"Informe o valor de 'b':";
	cin>>b;
	cout<<"Informe o valor de 'c':";	
	cin>>c;
	cout<<endl;


	if(a==0){
		cout<<"Est� n�o e uma equa��o de segundo grau, Fim do programa!!!";
		
	}
	else if(a!=0){
			
	delta=(b*b)-4*a*c;
			
			if(delta>0){
				cout<<"Est� equa��o n�o possui ra�zes reais, Fim da execu��o!!! ";
				cout<<endl;
			
			}else if(delta==0){
			
				raiz_real=-b / (2 * a);
				cout<<"Est� equa��o possui apenas uma raiz real, sendo ela: "<< raiz_real <<endl;
			
			
			}else{
				
				raiz_1= (-b + (delta*delta)) / (2 * a);
        		raiz_2= (-b - (delta*delta)) / (2 * a);	
				cout<<"Est� equa��o possui duas ra�zes reais, sendo elas: "<<raiz_1 <<" e "<<raiz_2 <<endl;
			}
	}
	

	
	
	
	
	
	return 0;
}
