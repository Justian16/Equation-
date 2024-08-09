#include <iostream>
#include <string>
#include <math.h>
int main ()
{
    std::cout <<"\t Resolution de l'equatin du second degre"<<std::endl;
    float a,b,c,d,e,x1,x2;
    std::cout <<"entrer la valeur de a:"<<std::endl;
    std::cin >> a;
    std::cout <<"entrer la valeur de b:"<<std::endl;
    std::cin >> b;
    std::cout <<"entrer la valeur de c:"<<std::endl;
    std::cin >> c;
    std::cout<<"calcul du discriminant d"<<std::endl;
    std::cout<<"Soit l'equation "<<a<<"x^2 +"<<b<<"x +"<<c<<"=0"<<std::endl;
    std::cout<<"d = b^2 - 4ac"<<std::endl;
    d = (b*b)-(4*a*c);
    std::cout<<"la valeur de d est:"<<d<<std::endl;
    if(d>=0)
    {
        std::cout<<"Notre equation possède deux simple racine reel x1 et x2"<<std::endl;
        std::cout<<"telque x1 = (-b - sqrt(d))/2a et x2 = (-b + sqrt(d))/2a"<<std::endl;
        x1 = (-b-sqrt(d))/(2*a);
        x2 =(-b+sqrt(d))/(2*a);
        std::cout<<"La solution de l'equation est x1="<<x1<<"et x2="<<x2<<std::endl;
    }
    else
    {
        std::cout<<"Notre equation possède deux simple racine complexe x1 et x2"<<std::endl;
        std::cout<<"telque x1 = (-b - sqrt(d))/2a et x2 = (-b + sqrt(d))/2a"<<std::endl;
        e = -d;
        x1 = (-b)/(2*a);
        x2 = (sqrt(e))/(2*a);
        std::cout<<"La solution de l'equation est x1="<<x1<<"-i"<<x2<<"et x2="<<x1<<"+i"<<x2<<std::endl;
    }
    return 0;
}
