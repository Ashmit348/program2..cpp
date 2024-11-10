#include <iostream>
using namespace std;

class Student {
public:
    inline void displaySum(int a, int b) {
        cout << "The sum of " << a << " and " << b << " is: " << (a + b) << endl;
    }
};

int main() {
    Student student;
    int num1 = 10, num2 = 20;
    
    student.displaySum(num1, num2);

    return 0;
}
