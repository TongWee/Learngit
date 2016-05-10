#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool isMatch(const char * src, const char * dst){
    if(*src == '\0'|| *dst == '\0')
        return true;
    if(*src != '\0' && *dst =='\0')
        return false;
    if(*src == *dst)
        return isMatch(src + 1, dst + 1);
    if(*(src + 1) == '*'){
        if(*src == *dst)
            return isMatch(src, dst + 2) || isMatch(src + 1, dst + 2) || isMatch(src + 1, dst);
        else
            return isMatch(src, dst + 2);
    }
    return false;
}
bool match(const char * src, const char * dst){
    if(src == NULL || dst == NULL)
        return false;
    return isMatch(src, dst);
}
int main(int argc, const char *argv[])
{
    const char * src = "abc*cba";
    const char * dst = "abcdccba";
    cout << isMatch(src, dst) << endl;   
    return 0;
}
