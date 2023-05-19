#include <iostream>

 class ordenacao{
   private:
        int * vetOriginal , * vetAuxiliar , i , j , aux , menor , pos, comp, trocou;
        bool troca ;
   public :
        ordenacao(int);
        void preencheVetor( int) ;
        void copiaVetor(int) ;
        void exibeVetor(int , int);
        void Bolha ( int) ;
        void BolhaMelhorado ( int) ;
        void Insertion( int) ;
        void Selection( int) ;
        int getComp();
        int getTroca();

};
