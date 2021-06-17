#ifndef DEPARTMENT_H
#define DEPARTMENT_H

//#include "Teacher.h"
#include<functional>
#include <vector>
#include<iterator>//for std::size
#include<string>
#include<cstddef>//for std::size_t

class Teacher;
class Department{
    std::string depat_name{};
    std::vector<std::string> depat_subject{"OperatingSystems","DSA","CSA","UNIX","JAVA"};
    std::vector<std::reference_wrapper<const Teacher>> depat_teacher{};

public:
    Department(const std::string name = "Unknown")
    :depat_name{name}{}

    void addTeacherandSubject( Teacher& teacher,const std::string& subject);
    
    friend std::ostream& operator<<(std::ostream& out,const Department& depat);

    const std::string getName() const {return depat_name;}
    std::size_t getSize() const{return depat_teacher.size();}
    //const std::string getSubject(){return}

    const std::string& getSubject(int index) const {return depat_subject[index];}
};

#endif /* DEPARTMENT_H */