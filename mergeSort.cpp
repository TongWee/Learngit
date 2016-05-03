#include <iostream>
#include <string>
#include <vector>

using namespace std;
vector<int> merge(vector<int>, vector<int> );

void mergeSort(vector<int> &a){
    if(a.size() > 1){
        vector<int> res;
        int mid = a.size() / 2;
        vector<int> :: iterator itr = a.begin();
        vector<int> f(itr, itr + mid - 1);
        vector<int> s(itr + mid, a.end());
        mergeSort(f);
        mergeSort(s);
        res = merge(f, s);
    }      
}

vector<int> merge(vector<int> f, vector<int> s){
    int i,j,k;
    i = j  = k = 0;
    vector<int> res(f.size() + s.size());
    while(i < f.size() && j < s.size()){   
    if(f[i] < f[j])
        res[k++] = f[i++];
    else
        res[k++] = f[i++];
    }
    while(i < f.size())
        res[k++] = f[i++];
    while(j < s.size())
        res[k++] = s[j++];
    return res;
}

int main(int argc, const char *argv[])
{
    int a[] = {1,2,3,4,9,8,7,6,5,4}; 
    vector<int> arr(a, a + 10);
    mergeSort(arr);
    for(int i = 0; i < arr.size(); i++)
        cout << arr[i] << " " ;
    cout << endl;
    return 0;
}
