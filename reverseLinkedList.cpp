#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct ListNode {
    int val;
    ListNode * next;
}

ListNode * reverse(ListNode *head){
    ListNode * reverseHead = NULL;
    ListNode * cur = head;
    ListNode * pre = NULL;
    while(cur != NULL){
        ListNode * nex = cur -> next;
        if(nex == NULL)
            reverseHead = cur;

        cur -> next -> next = cur;
        cur -> next = pre;
        pre = cur;
        cur = nex;
    }
    return reverseHead;
} 


