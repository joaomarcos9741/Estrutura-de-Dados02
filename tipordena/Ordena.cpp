#include "Ordena.h"

int Ordena::getComp(){
    return comp;
};

int Ordena::getTrocou(){
    return trocou;
};

Ordena::Ordena(int t){
    this -> vetOriginal = new int[ t ];
    this -> vetAuxiliar = new int[ t ];
    srand(time(NULL));
};


void Ordena :: preencheVetor( int t){
    for( i = 0; i < t ; i ++){
        this -> vetOriginal[i ] = rand () %100+1;
    }
};


void Ordena :: copiaVetor(int t){
    for( i = 0; i < t ; i ++){
        this -> vetAuxiliar[i ] = this -> vetOriginal[i ];
    }
};


void Ordena::exibeVetor(int t, int v){
    if( v == 0){
        for(int i = 0; i < t; i ++){
            std::cout << this-> vetOriginal[i ] << "  ";
        }
    }else{
        for(i = 0; i < t; i ++){
            std :: cout << this -> vetAuxiliar[i ] << " ";
        }
    }
};


void Ordena :: Bolha ( int t){
    comp = trocou = 0;
    for( i = 0; i < t ; i ++){
        for(j = 0; j < t -1; j ++){
            comp++;
            if( this -> vetAuxiliar[j ] > this -> vetAuxiliar[j +1]){
                trocou++;
                this -> aux = this -> vetAuxiliar[j ];
                this -> vetAuxiliar[ j] = this -> vetAuxiliar[j +1];
                this -> vetAuxiliar[ j +1] = this -> aux;
            }
        }
    }
};



void Ordena :: BolhaMelhorado ( int t){
    comp = trocou = 0;

    i = 1;
    this -> troca = true ;
    while (( i <= t ) && ( troca )){
        comp++;
        troca = false ;
        for(j = 0; j < t -1; j ++){
            comp++;
            if( this -> vetAuxiliar[j ] > this -> vetAuxiliar[j +1]){
                trocou++;
                this -> troca = true ;
                this -> aux = this -> vetAuxiliar[j ];
                this -> vetAuxiliar[ j] = this -> vetAuxiliar[j +1];
                this -> vetAuxiliar[ j +1] = this -> aux;
            }
        }
        i++;
    }
};



void Ordena :: Insertion( int t){
    comp = trocou = 0;
    for( i = 1; i < t ; i ++){
    comp++;
        this -> aux = this -> vetAuxiliar[i ];
        j = i - 1;
        while (( j >= 0) && ( this -> vetAuxiliar[j] > this -> aux )){
        comp++;
            this -> vetAuxiliar[ j + 1] = this -> vetAuxiliar[j ];
            j--;
        }
        this -> vetAuxiliar[j + 1] = this -> aux ;
        trocou++;
    }
};



void Ordena::Selection( int t){
    comp = trocou = 0;

    for(i = 0; i < t -1; i ++){
        this -> aux = this -> vetAuxiliar[i ];
        this -> menor = this -> vetAuxiliar[i + 1];
        this -> pos = i + 1;
        for(j = i +2; j < t; j ++){
        comp++;
            if( this -> vetAuxiliar[j ] < this -> menor ){
            trocou++;
                this -> menor = this -> vetAuxiliar[j ];
                this -> pos = j;
            }
        }
        comp++;
        if( this -> menor < this -> aux ){
        trocou++;
            this -> vetAuxiliar[ i] = this -> vetAuxiliar[ pos ];
            this -> vetAuxiliar[ pos] = this -> aux;
        }
    }
};

