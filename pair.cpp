#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(int argc, const char *argv[])
{
    int key;
    string str;
    pair <int, string> p;
    vector <pair<int, string> > pairs;
    //cin >> p.first >> p.second;
    while(cin >> key >> str){
        //p = pair<int, string> (key, str);
        p = make_pair(key, str);
        pairs.push_back(p);
    }   
    for (int i = 0; i < pairs.size(); i++) {
        cout << pairs[i].second << " "; 
    }
    cout << endl;
    return 0;
}
