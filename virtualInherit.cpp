#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Base{
    public :
        Base(){
        cout << "Base" << endl;
    }
};

class Parent1 : virtual public Base{
    public:
        Parent1(){
        cout << "Parent1" << endl;
    }
};


class Parent2 : virtual public Base{
    public:
        Parent2(){
        cout << "Parent2" << endl;
    }
};

class Child : public Parent1,Parent2{
    public:
        Child(){
        cout << "Child" << endl;
    }
};

int main(int argc, const char *argv[])
{
    Child d;
    cout << sizeof(d) << endl;
    return 0;
}
