#include"Teacher.h"
#include"Department.h"
#include<iostream>


int main(){
    Teacher alex{"Alex","PHD in CS"};
    Teacher nascardriver{"Nas","Masters in CS"};
    Teacher haldhar{"Haldhar","studying in learncpp"};


    Department CS{"Computer Science"};

    CS.addTeacherandSubject(alex,CS.getSubject(0));
    CS.addTeacherandSubject(nascardriver,CS.getSubject(1));

    //std::cout<<CS.getSize()<<'\n';



    std::cout<<alex<<'\n'<<nascardriver<<'\n';
    std::cout<<haldhar<<'\n';
    std::cout<<CS<<'\n';

    return 0;
}
