#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct T1{
    T1(){
        cout << "Construct t1"<<endl;
    };
    T1(const T1 &t1){
        cout << "Copy constructor" << endl;
        this->a = t1.a;
    };
    T1 & operator = (const T1 &t1){
        cout << "Assignment" << endl;
        this->a = t1.a;
        return *this;
    };
    int a;
};

struct T2{
    T1 t1;
    T2(T1 &t):t1(t){
    };};
int main(int argc, const char *argv[])
{
    T1 t1;
    T2 t2(t1);
    return 0;
}
