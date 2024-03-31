#include <iostream>
using namespace std;

class student {
protected:
    int roll;
    string name;
public:
    student() {
        cout << "Enter your name and roll: ";
        cin >> name >> roll;
    }
};

class internal :virtual public student {
public:
    int marks1;
    internal() {
        cout << "Enter your internal marks: ";
        cin >> marks1;
    }
};

class external :virtual public student {
public:
    int marks2;
    external() {
        cout << "Enter your external marks: ";
        cin >> marks2;
    }
};

class result : public internal, public external {
public:
    result(){
        cout << "Your grade is: " << (marks1 + marks2) << endl;
    }
};

int main() {
    result r;
    return 0;
}
