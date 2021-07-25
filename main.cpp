#include <iostream>
#include"Department.h"
#include"Teacher.h"
#include <string>
#include <map>


int main(){
    Teacher alex{"Alex","Owner of learncpp"};

    std::map<int,const std::string> m_subject{{1,"Physics"},
        {2,"Chem"},
        {3,"Maths"},
        {4,"DSA"},
        {5,"OS"},
        {6,"CSA"},
        {7,"DBMS"},
        {8,"JAVA"}};

        
    Department CS{"CSE",m_subject};
    

    CS.addTeacher(&alex);
    CS.addSubject(&alex,CS.getSubject(1));
    CS.addSubject(&alex,CS.getSubject(7));

    std::cout<<CS<<'\n';


    std::cout<<alex<<'\n';
    CS.retainSubject(&alex);

    std::cout<<CS<<'\n';
    std::cout<<alex<<'\n';

    CS.dismissTeacher(&alex);
    Teacher nascardriver("nascar","friend of alex");
    CS.addTeacher(&nascardriver);
    CS.addSubject(&nascardriver,CS.getSubject(1));

    std::cout<<CS<<'\n';
    std::cout<<alex<<'\n';


    
    std::cout<<nascardriver<<'\n';


    return 0;
}