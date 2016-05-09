#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main(int argc, const char *argv[])
{
    map <string, int> words;
    string word;
    while(cin >>word){
        ++words[word];
    }
    map <string, int> :: iterator itr = words.begin();
    for(itr; itr != words.end(); itr++){
        cout << (*itr).first << " " << (*itr).second << endl;
    } 
    return 0;
}
