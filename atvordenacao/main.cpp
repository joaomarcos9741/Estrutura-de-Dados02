#include "ordenacao.h"
# define tam 10

 using namespace std;

int main (){
 ordenacao O( tam) ;
 O. preencheVetor( tam );
    cout << "Vetor Original"<<endl;
 O. exibeVetor( tam , 0) ;
 O. copiaVetor( tam );
 O. Bolha ( tam );
    cout<<endl;
    cout << "Vetor Ordenado pelo Bolha"<<endl;
 O. exibeVetor( tam , 1) ;
    cout<<endl;
    cout<<"Foram realizadas "<< O.getTroca() <<" trocas e "<<O.getComp()<<" comparações"<<endl;;

 O. copiaVetor( tam );
 O. BolhaMelhorado ( tam );
    cout<<endl;
    cout << "Vetor Ordenado pelo Bolha Melhorado"<<endl;
 O. exibeVetor( tam , 1) ;
    cout<<endl;
    cout<<"Foram realizadas "<< O.getTroca() <<" trocas e "<<O.getComp()<<" comparações"<<endl;

 O. copiaVetor( tam );
 O. Insertion( tam) ;
    cout<<endl;
    cout << "Vetor Ordenado pelo Insertion"<<endl;
 O. exibeVetor( tam , 1) ;
    cout<<endl;
    cout<<"Foram realizadas "<< O.getTroca() <<" trocas e "<<O.getComp()<<" comparações"<<endl;

 O. copiaVetor( tam );
 O. Selection( tam) ;
    cout<<endl;
    cout << "Vetor Ordenado pelo Selection"<<endl;
 O. exibeVetor( tam , 1) ;
    cout<<endl;
    cout<<"Foram realizadas "<< O.getTroca() <<" trocas e "<<O.getComp()<<" comparações"<<endl;

 return 0;
 }
