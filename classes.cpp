#include <iostream>
#include <string>

using namespace std;

class Person {
    public:
        void setName(string n);
        string getName();
        void greetings();
    private:
        string name;
};

void Person::setName(string n){
    name = n;
}

string Person::getName(){
    return name;
}

void Person::greetings(){
    cout << "Hi! Im a person\n";
}

class Student: public Person{
    public:
        void setGrade(int g);
        int getGrade();
        void greetings();
    private:
        int grade;
};

void Student::setGrade(int g){
    grade = g;
}

int Student::getGrade(){
    return grade;
}

void Student::greetings(){
    cout << "Hi! Im a student\n";
}

class Teacher: public Person {
    public:
        void setSubject(string s);
        string getSubject();
        void greetings();
    private:
        string subject;
};

void Teacher::setSubject(string s){
    subject = s;
}

string Teacher::getSubject(){
    return subject;
}

void Teacher::greetings(){
    cout << "Hi! Im a teacher\n";
}


int main(){
    Student student;
    Teacher teacher;
    string name;
    string subject;
    int number;

    cout << "Name of the student? ";
    cin >> name;

    cout << "Grade? ";
    cin >> number;

    student.setName(name);
    student.setGrade(number);

    cout << "\nHi " << student.getName() << "!, you are in grade " << student.getGrade() << "\n";
    student.greetings();

    cout << "\nName of the teacher? ";
    cin >> name;

    cout << "Subject? ";
    cin >> subject;

    teacher.setName(name);
    teacher.setSubject(subject);

    cout << "\nHi " << teacher.getName() << "!, you are teacher of " << teacher.getSubject() << "\n";
    teacher.greetings();
    
    return 0;
};
