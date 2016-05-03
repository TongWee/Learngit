#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
    int a;
    cin >> a;
    cout << a << " = ";
    int i;
    for (i = 2; i < a;) {
        if(a % i == 0 && a != 0){
            a /= i;
            cout << i << "*";
        }   
        else
            i++;
    }
    cout << i << endl;
    return 0;
}
