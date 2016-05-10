#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool helper(const char * start, const char * end){
    while(start < end){
        if(*start == *end){
            start++;
            end--;
            return helper(start, end);
        }
        else
            return false;
    } 
    return true;
}
bool isReverseStr(const char * str, int len){
    const char * s = str;
    const char * e = str + len - 1;
    return helper(s, e);
}

int main(int argc, const char *argv[])
{
    char m[] = "abcdba";
    cout << isReverseStr(m, 7);
    return 0;
}
