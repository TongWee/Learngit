#include <iostream>
#include <string>
#include <vector>
#include "common.h"
using namespace std;

bool isChildList(ListNode *a, ListNode *b){
    bool isChild = false;
    ListNode *p = a;
    ListNode *q = b;
    while(p!=NULL && q!=NULL){
        if(p -> val == q -> val)
            isChild = true;
        else
            isChild = false;
        p = p-> next;
        q = q-> next;
    }
    if(q != NULL)
        isChild = false;
    return isChild;
}

int main(int argc, const char *argv[])
{
    
    return 0;
}
