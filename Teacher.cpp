#include"Teacher.h"


void Teacher::removeSubject(){
    if(!T_subject.empty()){
        int subCode{};
        std::cout<<"Which subject you want to remove: \n";
        for(auto it = T_subject.begin();it!=T_subject.end(); ++it){
            std::cout<<it->first<<'\t'<<it->second<<'\n';
        }

        std::cout<<"Enter sub code : ";
        std::cin>>subCode;
        T_subject.erase(subCode);
    }
    else{
        std::cout<<getTname()<<" don't teach any subjects\n";
    }
}


std::ostream& operator<<(std::ostream& out,const Teacher& teacher){
    out<<"Teacher : "<<teacher.T_name<<'\n';
    out<<"Qualification : "<<teacher.T_qualification<<'\n';
    out<<"Department : ";
    if(teacher.T_depat!=nullptr){
        out<<teacher.T_depat->getDname()<<'\n';
        out<<"He teaches : ";
        if(teacher.T_subject.empty()){
            out<<"Currently not assigned ay subjects";
        }
        else{
            char delim = ' ';
            for(const auto& subject:teacher.T_subject){

                out<<delim<<subject.second;
                delim = ',';
            }
        }
        out<<'\n';
    }
    else
        out<<"Not working in any Department\n";
    return out;
}