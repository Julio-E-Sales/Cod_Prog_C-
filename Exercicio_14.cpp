#include <iostream>
#include <locale>


using namespace std;

int main() {
	setlocale (LC_ALL, "portuguese");

	
    int num_max;

 
    cout << "Digite o n�mero m�ximo (deve ser �mpar): ";
    cin >> num_max;

 
    while (num_max % 2 == 0) {
        cout << "O n�mero deve ser �mpar. Digite novamente: ";
        cin >> num_max;
    }

 
    for (int i = 0; i <= num_max / 2; i++) {
 
        for (int j = 0; j < i; j++) {
            cout << "   ";
        }
 
        for (int j = i + 1; j <= num_max - i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
