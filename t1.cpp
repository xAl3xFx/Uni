#include<iostream>
using namespace std;

class Rational{
private:
    int nom,denom;
public:
    Rational(const int, const int);
    void print()const;

};

Rational::Rational(const int p=0, const int q=1){
    nom=p;
    denom=q;
}

void Rational::print()const{
    cout << nom << "/"<<denom<< endl;
}

int main(){
    Rational r;
    Rational r1(1,2);
    r.print();
    r1.print();


return 0;
}
