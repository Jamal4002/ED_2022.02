#include <iostream>
#include "Rotinas.h"

using namespace std;

int main()
{
    // somar os n�meros inteiros menores que um inteiro N qualqer.
    cout << "6: " << somarInteiros(6) << endl << endl;

    //  calcular o quociente de uma divis�o inteira subtraindo o dividendo pelo divisor
    cout << "308/8: " << divisaoInteiros(304, 8) << endl << endl;

    //  calcular o quociente de uma divis�o inteira pelo m�todo
    cout << "294/7: " << divisaoMetodo(294, 7) << endl << endl;

    //  calcular o quociente de uma divis�o inteira pelo m�todo
    cout << "10/4: " << restoDivisao(10, 4) << endl << endl;

    return 0;
}
