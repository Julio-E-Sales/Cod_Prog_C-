#include <iostream>
#include<locale>
#include<unistd.h>

using namespace std;

int main() {
	setlocale (LC_ALL, "portuguese");
	
	float valorhoras, meshoras, INSS, IR, descontos, sal_bruto, sal_liquido, sind;
	
	
	cout<<"Vamos descobrir seu sal�rio mensal e os decontos \n";
	sleep(1);
	
	cout<<"Nos informe quanto recebe por hora trabalhada:\n";
	cout<<"R$"; 
	cin >>valorhoras;
	cout<<"Agora nos informe quantas horas trabalha por m�s:\n";
	cin >>meshoras;
	

sal_bruto=valorhoras*meshoras;
IR=(sal_bruto/100)*11;
INSS=(sal_bruto/100)*8;	
sind=(sal_bruto/100)*5;
descontos=IR+INSS+sind;
sal_liquido=sal_bruto-descontos;

	sleep(1.5);
	cout<<"+Sal�rio Bruto: R$" <<sal_bruto <<"\n";
	cout<<"-IR(11%): R$" <<IR <<"\n";
	cout<<"-INSS(8%): R$" <<INSS <<"\n";
	cout<<"-Sindicato(5%): R$" <<sind <<"\n";
	cout<<"=Sal�rio Liqu�do: R$" <<sal_liquido <<"\n";

    sleep(2);
	cout<<"Seu sal�rio liqu�do ser� de R$" <<sal_liquido <<"," <<" seu desconto total foi de R$" <<descontos;
	
	
	
	
	
	return 0;
}
