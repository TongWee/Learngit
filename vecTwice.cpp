#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
    int data[] = {1,2,3,4,5,6,7,8,9,10};
    vector<int> a(data, data + 10); 
    int key = 3;
    vector<int> :: size_type mid = a.size() / 2;
    vector<int> :: iterator itr = a.begin();
    while(itr != a.begin() + mid){
        if(*itr == key){
            itr = a.insert(itr, key * 2);
            itr += 2;
        }
        else
        {
            itr++;
        }
    }
    for(itr = a.begin(); itr != a.end(); ++itr){
        cout << *itr << " " << endl;
    }
    return 0;
}
