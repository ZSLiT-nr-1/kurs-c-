#include <bits/stdc++.h>
using namespace std;
int main{
    double liczba;
    double pierwiastek;
    double bok1;
    double bok2;
    double bok3;
    int liczbaCalkowita;
    double frekfencja;
    double srednia;
    const double minSrednia = 3.0;
    const double minFrekfencja=0,5;
    cin>>srednia;
    cin>>frekfencja;
    if(srednia>=minSrednia&&frekfencja>=minFrekfencja){
        cout<<"zdał"<< endl;
    }
    else{
        cout<<"nie zdał"<< endl;
    }
    cin>>liczbaCalkowita
    if(liczbaCalkowita%2=0){
        cout<<"parzysta"<< endl;
    }
    cin>>bok1;
    cin>>bok2;
    cin>>bok3;
    if(bok1+bok2>bok3&&bok2+bok3>bok1&&bok1+bok3>bok2){
        cout<<"boki są odpowiednich długości"<< endl;
    }
    cin>>liczba;
    if(liczba>=0){
        pierwiastek=std::sqrt(liczba);
        cout<<pierwiastek<< endl;
    }
    else{
        cout<<"liczba jest mniejsza od 0"<< endl;

    }
      return 0;
}