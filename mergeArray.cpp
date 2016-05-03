#include <iostream>
#include <string>
#include <vector>

using namespace std;

void merge(vector<int> a, int m, vector<int> b, int n){
    int k = m + n - 1;
    a[k--] = b[0];
}

int main(int argc, const char *argv[])
{
    vector<int> a;
    vector<int> b;
    a.push_back(1);
    a.push_back(2);
    b.push_back(3);
    merge(a, 2, b, 1);
    return 0;
}
