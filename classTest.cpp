#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Base{
private:
    int a1;
    static int a2;
public:
    Base(){};
    virtual void fun(){};
};
class Child{
    public:
        void fun(){
        };      
};

int main(int argc, const char *argv[])
{
    Child ch;
    Base bs;
    cout << sizeof(ch) << endl;
    cout << sizeof(bs) << endl;
    return 0;
}


