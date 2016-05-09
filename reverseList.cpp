#include <iostream>
#include <string>
#include <vector>
#include <list>
using namespace std;

int main(int argc, const char *argv[])
{
    int arr[5] = {1,2,3,4,5};
    list<int> a(arr, arr + 5);
    list<int> :: iterator itr = a.end();
    cout << "iterator" << endl;
    do{
        cout << *(--itr) << " ";
    }while(itr != a.begin());
    cout << endl;
    cout << "reverse_iterator" << endl;
    list<int> :: reverse_iterator itr_reverse = a.rbegin();
    for(itr_reverse; itr_reverse != a.rend(); itr_reverse++){
        cout << *itr_reverse << " ";
    }
    cout << endl;
    return 0;
}
