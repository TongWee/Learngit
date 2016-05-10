#include <iostream>
#include <string>
#include <vector>
using namespace std;
void reverse(int * s, int * e){
    int temp;
    e--;
    while(s < e){
        temp = *s;
        *s = *e;
        *e = temp;
        s++;
        e--;
    }
}

void reverseArrayR(int *a, int len, int k){
    k = k % len;
    reverse(a, a + len - k);
    reverse(a + len - k, a + len);
    reverse(a, a + len);
    for (int i = 0; i < len; i++) {
        cout << a[i] << " ";
    }
}
void reverseArrayL(int *a, int len, int k){
    k = k % len;
    reverse(a, a + len);
    reverse(a, a + len - k);
    reverse(a + len - k, a + len);
    for (int i = 0; i < len; i++) {
        cout << a[i] << " ";
    }
}
int main(int argc, const char *argv[])
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    reverseArrayR(a, 10, 3);
    cout << endl; 
    int b[10] = {1,2,3,4,5,6,7,8,9,10};
    reverseArrayL(b, 10, 3);
    cout << endl;
    return 0;
}
