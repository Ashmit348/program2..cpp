
#include <iostream>
#include <string>
using namespace std;

template <typename T>
struct Student {
    T name;        
    int age;         
    string course;   
    string department;  

    Student(T n, int a, string c, string d) : name(n), age(a), course(c), department(d) {}

    void display() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {

    Student<string> student1("Sahil", 20, "Computer Science", "Engineering");
    cout << "Student 1 Details:" << endl;
    student1.display();

    cout << endl;

    Student<const char*> student2("Ashmit", 22, "Mechanical Engineering", "Engineering");
    cout << "Student 2 Details:" << endl;
    student2.display();

    return 0;
}
