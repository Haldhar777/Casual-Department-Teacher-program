#include"Department.h"
#include"Teacher.h"

void Department::addTeacherandSubject(Teacher& teacher,const std::string& subject){
    //depat_teacher = teacher;
    teacher.addDepartmentandSubject(*this,subject);

    depat_teacher.push_back(teacher);
}

std::ostream& operator<<(std::ostream& out,const Department& depat){

    out<<"Department : "<<depat.depat_name<<"\nSubjects : ";
    for(int i{};i<5;++i){
        out<<(i+1)<<'.'<<depat.depat_subject[i]<<' ';
        if(static_cast<std::size_t>(i)<depat.getSize())
        out<<depat.depat_teacher[i].get().getName()<<'\n';
        else
            out<<"Not alloted yet\n";
    }
    out<<'\n';
    return out;
}