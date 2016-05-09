#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(int argc, const char *argv[])
{
    //Must declear as const char *
    const char *a = "Hello";
    //sizeof char* contains '\0'
    cout << "sizeof char * : " << sizeof(a) << endl;
    cout << "strlen of char * : " << strlen(a) << endl;
    
    int b[10] = {1,2,3,4,5,6,7,8,9,0};
    cout << "sizeof array : "<< sizeof(b) << endl;
    return 0;
}
