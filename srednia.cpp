#include <iostream>
int liczbaocen;
int oceny[1000];
int sumaOcen;
int srednia;
int main(){
    std::cin>>liczbaocen;
    if(liczbaocen<1){
        std::cout<<"liczba ocen musi być dodatnie"<<std::endl;
        return 1;
    }
    for(int i=0; i<liczbaocen;i++){
        std::cin>>oceny[i];
    }
    for(int i=0; i<liczbaocen; i++){
        sumaOcen+=oceny[i];
    }
    srednia = (double)sumaOcen/liczbaocen;
    std::cout<<"Srednia ocen: "<<srednia<<std::endl;
    return 0;
}