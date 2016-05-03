#include <iostream>
#include <string>
#include <vector>

using namespace std;

int Min(int a, int b, int c){
    int min = a < b ? a : b;
    return min < c ? min : c;
}

int uglyNum(int index){
    int *res = new int[index];
    res[0] = 1;
    int next = 1;
    int *mul_2 = res;
    int *mul_3 = res;
    int *mul_5 = res;
    while(next < index){
        int min = Min(*mul_2 * 2, *mul_3 * 3, *mul_5 * 5);
        res[next] = min;
        if(*mul_2 * 2 <= min)
            mul_2 ++;
        if(*mul_3 * 3 <= min)
            mul_3 ++;
        if(*mul_5 * 5 <= min)
            mul_5 ++;
        next ++;
    }
    return res[index - 1];
}

int main(int argc, const char *argv[])
{
    cout << uglyNum(10)<< endl;   
    return 0;
}
