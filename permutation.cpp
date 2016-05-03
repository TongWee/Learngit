#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
using namespace std;
void Permutation(char *str);
void Permutation(char *str, char *pBegin);
void Permutation(char* str){
    if(str == NULL)
        return;
    Permutation(str, str);
}
void Permutation(char *str, char *pBegin){
    if(*pBegin == '\0')
        printf("%s\n", str);
    else{
        for(char *pCh = pBegin; *pCh != '\0'; pCh++){
            char temp = *pCh;
            *pCh = *pBegin;
            *pBegin = temp;
            Permutation(str, pBegin + 1);
            temp = *pCh;
            *pCh = *pBegin;
            *pBegin = temp;
        }
    }
}

int main(int argc, const char *argv[])
{
    char a[] = "abc";
    Permutation(a);
    return 0;
}
