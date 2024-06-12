#include <iostream>
#include <locale>

using namespace std;

bool ehPerfeito(int num) {
    int somaDivisores = 0;
    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            somaDivisores += i; 
        }
    }
    return somaDivisores == num;
}

int main() {
	setlocale (LC_ALL, "portuguese");
	
    int num;
    cout << "Digite um n�mero: ";
    cin >> num;

    if (ehPerfeito(num)) {
        cout << num << " � um n�mero perfeito." << endl;
    } else {
        cout << num << " n�o � um n�mero perfeito." << endl;
    }

    return 0;
}
