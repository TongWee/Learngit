#include <iostream>
#include <string>
#include <vector>
//Merge two vector
using namespace std;

vector<int> merge(vector<int> a, vector<int> b){
    int len_a = a.size();
    int len_b = b.size();
    vector<int> res;
    vector<int> :: iterator itra = a.begin();
    vector<int> :: iterator itrb = b.begin();
    while(itra!=a.end() && itrb!=b.end()){
        if(*itra < *itrb)
            res.push_back(*itra++);
        else
            res.push_back(*itrb++);
    }
    while(itra!=a.end())
        res.push_back(*itra++);
    while(itrb!=b.end())
        res.push_back(*itrb++);
    return res;   
}

int main(int argc, const char *argv[])
{
    int src[10] = {1,2,3,4,5,6,7,8,9,10};
    vector<int> a(src, src+10);
    vector<int> b(src, src+10);
    vector<int> res = merge(a, b);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}
