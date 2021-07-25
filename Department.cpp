#include"Department.h"
#include "Teacher.h"
#include<iostream>

void Department::addSubject( Teacher* teacher,std::pair<int,const std::string> subject){
    teacher->addSubjects( subject);
    teacher->addDepartment(this);
}

void Department::addTeacher(Teacher* teacher){
     D_teacher.push_back(teacher);
        teacher->addDepartment(this);
}

void Department::retainSubject(Teacher* teacher){
    teacher->removeSubject();
}

Department::~Department(){
    for (std::size_t i = 0; i < D_teacher.size(); ++i)
    {
        D_teacher[i]->T_subject.clear();
        D_teacher[i]->T_depat = nullptr;
    }
}

std::ostream& operator<<(std::ostream& out,const Department& depat){
    out<<"Department : "<<depat.D_name<<'\n';
    out<<"Subject code\tSubject\t\tTeacher\n";
    // for(auto& it:depat.D_subjects){
    //     out<<it->first<<'\t'<<it->second<<"\t\n";
    // }
    for (auto it = depat.D_subjects.begin(); it != depat.D_subjects.end(); ++it)
    {
        out<<"  "<<it->first<<"\t\t"<<it->second<<"\t\t";
        if(depat.D_teacher.size()!=0){
            //out<<depat.D_teacher.size()<<' ';
            for(int i{};i<depat.D_teacher.size();++i){

            auto found = depat.D_teacher[i]->getSubmap().find(it->first);
                
            if(found!=depat.D_teacher[i]->getSubmap().end()){
                out<<depat.D_teacher[i]->getTname()<<'\n';
            }
            else{
                out<<"Not available\n";
            }
        }
    }
    else{
        out<<"No teacher in this Department\n";
    }
}
    return out;

}
