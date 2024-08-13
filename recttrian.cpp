#include<iostream>
#include<string>
void rectangle(int x, int y)
{
    int i{0}, j{0};
    for (i=0; i<y; i++)
    {
        for(j=0; j<x; j++)
            std::cout<<"*";

        std::cout<<"\n";
    }
}
void triangle(int x, int y)
{
    std::cout<<"triangle rectangle"<<std::endl;
    int i{1},j{1};
    for(i=1; i<=x; i++)
        {
            for(j=1; j<=(y/2); j++)
                std::cout<<" ";
            for(j=1; j<=(i*2-1); j++)
                std::cout<<"*";

              std::cout<<"\n";
        }
        std::cout<<"triangle isocèle"<<std::endl;
    for(i=1; i<=x; i++)
    {
        for(j=1; j<=(y-i); j++)
            std::cout<<" ";
        for(j=1; j<=(2*i-1); j++)
            std::cout<<"*";

        std::cout<<"\n";
    }
}
int main()
{
    std::cout<<"\tCONSTRUCTION DES FORMES GEOMETRIQUE SIMPLE"<<std::endl;
    std::cout<<"rectangle(1), triangle(2), cercle(3)"<<std::endl;
    int choix_du_forme;
    std::cout<<"choisissez la forme que vous voulez construire"<<std::endl;
    std::cin>> choix_du_forme;
    switch(choix_du_forme)
    {
        case 1:
        {
            int longueur, largeur;
            std::cout<<"Entrer une longueur:"<<std::endl;
            std::cin>>longueur;
            std::cout<<"Entrer une largeur:"<<std::endl;
            std::cin>>largeur;
            rectangle(longueur, largeur);
            break;
        }
        case 2:
        {
            triangle(10,10);
            break;
        }
        case 3:
        {
            std::cout<<"Le cercle sera a venir prochainement"<<std::endl;
            break;
        }
    }
    return 0;
}
