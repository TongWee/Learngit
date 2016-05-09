#include <iostream>
#include <string>
#include <vector>
using namespace std;
void reverseStr(char * str, int l, int r){
    if(l < r){
        char temp = str[l];
        str[l] = str[r];
        str[r] = temp;
        reverseStr(str, ++l, --r);
    }
    else
        return;
};

void reverseStr(char * str, int len){
    reverseStr(str, 0, len - 1);
};
int main(int argc, const char *argv[])
{
    char p[] = "abcdefg";
    reverseStr(p, 7);
    cout << p << endl;
    return 0;
}
