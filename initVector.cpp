#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>

using namespace std;
class book{
    private :  
        int val;
    public :
        book(int _val){
            val = _val;
        };
};
int main(int argc, const char *argv[])
{
    //0 0 0 0 0 0 0 0 0 0
    vector<int> a(10);
    //b == a
    vector<int> b(a);
    //1 1 1 1 1 1 1 1 1 1
    vector<int> c(10, 1);
    vector<int> :: iterator itrc = c.begin();
    //itrc->val <=> (*itrc).val
    //1 1 1 1 1
    vector<int> d(itrc, itrc + 5);
    for (int i = 0; i < a.size(); i++) {
        cout << c[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < d.size(); i++) {
        cout << d[i] << " ";   
    }
    //10 * book.val = 1
    vector<book> e(10, book(1));
    //list deque
    // ">>" is wrong, "> >" is right.
    list<deque<int> > deque_list;
    return 0;
}
