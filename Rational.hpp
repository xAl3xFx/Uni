#ifndef RATIONAL_H
#define RATIONAL_H


#include<iostream>

class Rational{
private:
    int nom,denom;
    void normalise();
public:
    Rational(const int, const int);
    Rational operator+(const Rational&);
    Rational operator-(const Rational&);
    Rational operator*(const Rational&);
    Rational operator/(const Rational&);

    void print()const;

};
void Rational::normalise(){
    int x=nom,y=denom;
    while(x!=0){
        if(x<y)std::swap(x,y);
        x=x%y;
    }
    nom/=y;
    denom/=y;
    if(y<0){
        nom*=-1;
        denom*=-1;
    }
}

Rational::Rational(const int p=0, const int q=1){
    nom=p;
    denom=q;
}

Rational Rational::operator+(const Rational& other){
    Rational newR(nom*other.denom+denom*other.nom, denom*other.denom);
    newR.normalise();
    return newR;
}

Rational Rational::operator-(const Rational& other){
    Rational newR(nom*other.denom-denom*other.nom, denom*other.denom);
    newR.normalise();
    return newR;
}

Rational Rational::operator*(const Rational& other){
    Rational newR(nom*other.nom, denom*other.denom);
    newR.normalise();
    return newR;
}

Rational Rational::operator/(const Rational& other){
    Rational newR(nom*other.denom, denom*other.nom);
    newR.normalise();
    return newR;
}

void Rational::print()const{
    std::cout << nom << "/"<<denom<< std::endl;
}

#endif // RATIONAL_H
