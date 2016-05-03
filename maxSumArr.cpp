#include <iostream>
#include <string>
#include <vector>

using namespace std;

int maxSumArr(int a[], int length){
    int maxSum = 0x80000000, curSum = 0;
    for (int i = 0; i < length; i++) {
        curSum += a[i];
        if(maxSum < curSum)
            maxSum = curSum;
        if(curSum < 0){
            curSum = 0;
        }
    }
    return maxSum;
}

int main(int argc, const char *argv[])
{
    int a[] = {-1,-2,-1,-2,-3,-4,-5,-6,-10,-8};
    cout << maxSumArr(a, 10) << endl;
    int min = 0x80000000;
    cout << "Min Integer:"<< min <<endl;
    return 0;
}
