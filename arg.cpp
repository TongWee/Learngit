#include <iostream>
#include <string>
#include <vector> 

using namespace std;

int main(int argc, const char *argv[])
{
    cout << "argc = " << argc << endl;
    for (int i = 0; i < argc; i++) {
        cout << i+1 << "--->  "<< argv[i] << endl;
    }
    return 0;
}
