#include <iostream>
#include<locale>

using namespace std;
int main() {
	setlocale (LC_ALL, "portuguese");
	
	float l1, l2, l3; 
	
	
	cout<<"Vamos montar um tri�ngulo \n";
	cout<<"Nos informe os lados do tri�ngulo: \n";
	cin>>l1;
	cin>>l2;
	cin>>l3;
	
	if( l1+l2>l3 && l1+l3>l2 && l2+l3>l1){
		if(l1==l2 && l2==l3){
			cout<<"Este se torna um Tri�ngulo Equil�tero. \n";
		}
		else if(l1==l2 && l2!=l3 || l1!=l2 && l2==l3 || l1==l3 && l2!=l1){
			cout<<"Este se torna um Tri�ngulo is�celes. \n";
		}
		else {
			cout<<"Este se torna um Tri�ngulo Escaleno. \n";
		}
	}
	else{
		cout<<"Os n�meros informados n�o formam um tri�ngulo. \n";
	}
	
	
	
	
	return 0;
}
