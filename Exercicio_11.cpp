#include <iostream>
#include <locale>
#include <unistd.h>

using namespace std;
int main() {
	setlocale (LC_ALL, "portuguese");

	int num, resto, unid_1, unid_2, dezena_1, dezena_2, centena;
	
	
	cout<<"Deseja saber quantas centenas, dezenas e unidades seu n�mero tem? "<<endl;
	cout<<"Informe o n�emro:";
	cin>>num;
	
	sleep(1);
	
	if(num>0 && num<=9){
		cout<<"Este n�mero tem "<<num <<" unidades!" <<endl;
		sleep(1.5);
	}
	else if(num>9 && num<=99){
		
		dezena_1=num/10;
		unid_1=num%10;
		
		cout<<"Este n�mero tem "<<dezena_1 <<" dezenas e "<<unid_1 <<" unidades!" <<endl;
		sleep(1.5);
	
	}
	else if(num>99 && num<=999){

		centena=num/100;
		dezena_2=(num%100)/10;
		resto=(num%100);
		unid_2=resto%10;
	
		cout<<"Este n�mero tem "<<centena <<" centenas e, "<<dezena_2 <<" dezenas e "<<unid_2 <<" unidades!" << endl;
		sleep(1.5);	
	}
	else{
		cout<<"N�mero digitado inv�lido!!!";
	}
	
	
	return 0;
}
