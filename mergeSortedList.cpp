#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct ListNode{
    int val;
    ListNode * next;
};

ListNode * mergeSortedList(ListNode *a, ListNode *b){
    if(a == NULL) return b;
    if(b == NULL) return a;

    ListNode * p = a;
    ListNode * q = b;
    ListNode * newHead = NULL;
    ListNode * m = NULL;
    
    if(p->val < q->val){
        m = p;
        p = p->next;
    }
    else{
        m = q;
        q = q->next;
    }
    newHead = m;
    while(p != NULL && q != NULL){
        if(p -> val < q -> val){
            m -> next = p;
            p = p -> next;
            m = m -> next;
        }
        else{
            m -> next = q;
            q = q -> next;
            m = m -> next;
        }
    }
    if(p == NULL)
        m -> next = q;
    else
        m -> next = p;
    return newHead;
}
int main(int argc, const char *argv[])
{
    
    return 0;
}
