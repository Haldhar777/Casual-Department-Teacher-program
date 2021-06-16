#ifndef TEACHER_H
#define TEACHER_H

class Teacher{

    std::string m_name{};
    std::string m_qualification{};

    std::vector<std::reference_wrapper<const std::string>> m_subject{};
    std::vector<std::reference_wrapper<const Department>> m_depat{}; 
    
private:

    void addDepartmentandSubject(const Department& depat,const std::string& subject)
    {
        m_depat.push_back(depat);
        m_subject.push_back(subject);
    }

public:
    Teacher() = default;
    
    Teacher(const std::string& name="unnammed",const std::string& qualification = "unknown")
    :m_name{name}, m_qualification{qualification} {}

    friend std::ostream& operator<<(std::ostream& out,const Teacher& teacher);

    friend void Department::addTeacherandSubject( Teacher& teacher,const std::string& subject);

    std::string getName() const {return m_name;}
    const std::size_t getsubSize() const {return std::size(m_subject);}
    const std::size_t getDepatSize() const{return std::size(m_depat);}

};

#endif /*TEACHER_H*/