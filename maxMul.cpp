#include <iostream>
#include <string>
#include <vector>

using namespace std;

int maxMul(int *a, int length){
    int *sum = new int[length];
    int s = 0;
    for(int i = 0; i < length; i++){
        s += a[i];
        sum[i] = s;
    }
    int min = 0x7fffffff;
    int index = 0;
    for (int i = 1; i < length; i++) {
        int c = sum[length - 1] - sum[i] - sum[i - 1];
        if(min > c){
            min = c;
            index = i;
        }
    } 
    cout << "Index: " <<index << endl;
    return sum[index - 1] * (sum[length - 1] - sum[index - 1]);
}


int main(int argc, const char *argv[])
{
    int a[] = {1,2,3,6};
    cout << "MaxMul: " << maxMul(a, 4) << endl;
    return 0;
}
