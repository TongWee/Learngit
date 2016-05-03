#include <iostream>
#include <string>
#include <vector>

using namespace std;

void bubbleSort(int *a, int len){
    int i,j;
    int temp;
    for (i = len - 1; i >= 0; i--) {
        for(j = 0; j < i; j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }   
        }
    }
}

int main(int argc, const char *argv[])
{
    int a[] = {1,2,11,4,5,8,7,-2,9,10};
    bubbleSort(a, 10);
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}

