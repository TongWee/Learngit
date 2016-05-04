#include <iostream>
#include <string>
#include <vector>
#include <set>
//删除单链表中重复的元素
//注意set的用法
using namespace std;

struct ListNode{
    int data;
    ListNode * next;
};
ListNode * delRepeatData(ListNode * head){
    if(head == NULL)
        return head;
    ListNode * p = head;
    set<int> repeat;
    repeat.insert(head -> data);
    while(p != NULL){
        if(repeat.count(p -> data) == 0)
            repeat.insert(p -> data);
        else{
            if(p -> next == NULL){
                p = NULL;            
            }
            else{
                p->data = p->next->data;
                p->next = p->next->next;
            }
        }
        p = p -> next;
    }
    free(p);
    return head;
};

int main(int argc, const char *argv[])
{   
    return 0;
}
