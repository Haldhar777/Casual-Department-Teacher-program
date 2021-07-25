#ifndef TEACHER_H
#define TEACHER_H

#include"Department.h"
#include<string>
#include <map>

class Department;


class Teacher{

    std::string T_name{};
    std::string T_qualification{};

public:
    std::map<int,const std::string> T_subject;
    Department* T_depat{};

private:
    void addSubjects(std::pair<int,const std::string> subject){
        T_subject.insert(subject);
    }

    void addDepartment(Department* depat){
        T_depat = depat;
    }

    void removeSubject();

public:
    Teacher() = default;

    Teacher(const std::string& name="",const std::string& qualification="")
    :T_name{name},T_qualification{qualification}{}

    friend void Department::addSubject( Teacher* teacher,std::pair<int,const std::string> subject);

    friend void Department::addTeacher(Teacher* teacher);

    friend void Department::retainSubject(Teacher* teacher);

    friend std::ostream& operator<<(std::ostream& out,const Teacher& teacher);

    const std::map<int,const std::string>& getSubmap() const{
        return T_subject;
    }

    const std::string& getTname() const{
        return T_name;
    }

};

#endif