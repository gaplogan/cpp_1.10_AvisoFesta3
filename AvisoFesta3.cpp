#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int j; //declara vari�vel inteira para controle do loop
    j = 1; //inicializa vari�vel de controle do loop

    do //in�cio do loop
    {
        //escreve a frase
        cout << "Hoje vai ter festa na casa da Fabi" << endl;
        //incrementa vari�vel de controle do loop (contador) 
        j++; // Mesmo que j = j + 1 
    } while (j <= 5); //fim do loop

    return 0;
}