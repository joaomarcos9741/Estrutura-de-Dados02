#include "Ordena.h"
#define tam 10
using namespace std;

int main()
{
    Ordena O( tam) ;
    O. preencheVetor( tam );
    cout << "\nVetor Original\n";
    O. exibeVetor( tam, 0) ;
    O. copiaVetor( tam );
    O. Bolha ( tam );
    cout << "\nVetor Ordenado pelo Bolha \n ";
    O. exibeVetor( tam, 1) ;
    cout << "\nComparações: " << O.getComp() << " Troca: " << O.getTrocou() << endl;

    O. copiaVetor( tam );
    O. BolhaMelhorado ( tam );
    cout << "\nVetor Ordenado pelo Bolha Melhorado\n ";
    O. exibeVetor( tam, 1) ;
    cout << "\nComparações: " << O.getComp() << " Troca: " << O.getTrocou() << endl;


    O. copiaVetor( tam );
    O. Insertion( tam) ;
    cout << "\nVetor Ordenado pelo Insertion\n";
    O. exibeVetor( tam, 1) ;
    cout << "\nComparações: " << O.getComp() << " Troca: " << O.getTrocou() << endl;


    O. copiaVetor( tam );
    O. Selection( tam) ;
    cout << "\nVetor Ordenado pelo Selection\n";
    O. exibeVetor( tam, 1) ;
    cout << "\nComparações: " << O.getComp() << " Troca: " << O.getTrocou() << endl;



    return 0;
}
