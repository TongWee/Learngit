#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{   
    string str = "abcdedasdsssda";
    int *hashtable = new int[256];
    unsigned int hashcode = 0;
    for (int i = 0; i < str.size(); i++) {
        hashcode = (int)str[i] % 256;
        hashtable[hashcode]++;
    }
    int i;
    for (i = 0; i < str.size(); i++) {
        hashcode = (int)str[i] % 256;
        if(hashtable[hashcode] == 1){
            break;
        }
    }
    cout << str[i] << endl;
    delete [] hashtable;
    return 0;
}
