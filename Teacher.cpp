#include"Teacher.h"


std::ostream& operator<<(std::ostream& out,const Teacher& teacher){
    out<<"Name: "<<teacher.m_name<<"\nQualification : "<<teacher.m_qualification<<"\nDepartment : " ;  //<<teacher.m_depat[0].get().getName()
    if(teacher.getDepatSize()!=0){
        out<<teacher.m_depat[0].get().getName();
    }
    else{
        out<<"Not working in any department";
    }
    out<<"\nSubject(s) : ";
    if(teacher.getsubSize()!=0){
    for (std::size_t i = 0; i <teacher.getsubSize(); ++i)
    {
        out<<teacher.m_subject[i].get()<<' ';//should I make a map for storing the subject in Department with a subject code 
    }//how to give an iterator to for-each loop
    out<<'\n';
    }
    else{
        out<<"Currently not teaching any subjects\n";
    }

    
    return out;
}