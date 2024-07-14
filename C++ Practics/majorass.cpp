#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Person {
private:
    string name;
    int age;
    string address;
public:
    Person(const string& n, int a, const string& addr)
        : name(n), age(a), address(addr) {}

    void setName(const string& n) { name = n; }
    void setAge(int a) { age = a; }
    void setAddress(const string& addr) { address = addr; }

    string getName() const { return name; }
    int getAge() const { return age; }
    string getAddress() const { return address; }

    virtual void displayRole() const {
        cout << "Person" << endl;
    }
};

class Student : public Person {
private:
    string studentID;
    string major;

public:
    Student(const string& n, int a, const string& addr, 
            const string& id, const string& m)
        : Person(n, a, addr), studentID(id), major(m) {}

    void setStudentID(const string& id) { studentID = id; }
    void setMajor(const string& m) { major = m; }

    string getStudentID() const { return studentID; }
    string getMajor() const { return major; }

    void displayRole() const override {
        cout << "Student" << endl;
    }
};

class Professor : public Person {
private:
    string professorID;
    string department;

public:
    Professor(const string& n, int a, const string& addr, 
              const string& id, const string& dept)
        : Person(n, a, addr), professorID(id), department(dept) {}

    void setProfessorID(const string& id) { professorID = id; }
    void setDepartment(const string& dept) { department = dept; }

    string getProfessorID() const { return professorID; }
    string getDepartment() const { return department; }

    void displayRole() const override {
        cout << "Professor" << endl;
    }
};

class Course {
private:
    string courseID;
    string courseName;
    int credits;
    Professor* professor;
    vector<Student*> enrolledStudents;

public:
    Course(const string& id, const string& name, int cred, Professor* prof)
        : courseID(id), courseName(name), credits(cred), professor(prof) {}

    void addStudent(Student* student) {
        enrolledStudents.push_back(student);
    }

    void removeStudent(const string& studentID) {
        auto it = find_if(enrolledStudents.begin(), enrolledStudents.end(),
            [&studentID](const Student* s) { return s->getStudentID() == studentID; });

        if (it != enrolledStudents.end()) {
            enrolledStudents.erase(it);
        }
    }

    void displayCourseInfo() const {
        cout << "Course ID: " << courseID << endl;
        cout << "Course Name: " << courseName << endl;
        cout << "Credits: " << credits << endl;
        cout << "Professor: " << professor->getName() << endl;
        cout << "Enrolled Students: " << enrolledStudents.size() << endl;
        for (const auto& student : enrolledStudents) {
            cout << " - " << student->getName() << " (" << student->getStudentID() << ")" << endl;
        }
    }
};

int main() {
    Professor prof("Sami Ullah", 45, "City University Of Science & Information Technology ", "P001", "Computer Science");
    Course course("CS205", "Object Oriented Programming", 3, &prof);

    Student student1("Abdullah", 20, "456 College Ave", "15077", "Computer Science");
    Student student2("Hizb Ullah", 20, "789 Campus Rd", "14936", "Mathematics");

    course.addStudent(&student1);
    course.addStudent(&student2);

    cout << "Initial Course Info:" << endl;
    course.displayCourseInfo();

    cout << endl;
    prof.displayRole();
    student1.displayRole();

    course.removeStudent("S001");
    
    cout << endl << "Course Info after removing a student:" << endl;
    course.displayCourseInfo();

    return 0;
}

