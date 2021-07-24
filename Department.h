#ifndef DEPARTMENT_H
#define DEPARTMENT_H

//#include"Teacher.h"//Teacher is incomplete without department hence don't include it here
#include <iostream>
#include <map>
#include<vector>
#include <string>
//#include"Teacher.h"

class Teacher;

class Department{
    std::string D_name{};
    std::vector<Teacher*> D_teacher{};
    std::map<int,const std::string> D_subjects;

public:
    using myMap = std::map<int,const std::string>;
   
    Department(const std::string& name="",const myMap& subjects = myMap() )
    :D_name{name},D_subjects{subjects}{}

    ~Department();

    void addTeacher( Teacher* teacher);

    void addSubject( Teacher* teacher,std::pair<int,const std::string> subject);

    std::pair<int,const std::string> getSubject(int subCode){
        
        return{subCode,D_subjects[subCode]};
    }

    friend std::ostream& operator<<(std::ostream& out,const Department& depat);

    const std::string getDname(){return D_name;}

};

#endif