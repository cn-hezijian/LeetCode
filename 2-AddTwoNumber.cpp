/*
Title: 2.AddTwoNumber
You are given two linked lists representing two non-negative numbers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8

Author: Hezijian
Data: 2016-05-27 19:11:50 
*/
struct ListNode 
{
    public:
    ListNode(int x) : val(x), next(0) {}
    int val;
    ListNode* next;
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
{
    
}

void initData(ListNode* l1, ListNode* l2)
{
    ListNode* it_a = l1;
    ListNode* it_b = l2;
    int a[] = {2, 4, 3};
    int b[] = {5, 6, 4};
    int len_a = sizeof(a) / sizeof(int);
    int len_b = sizeof(b) / sizeof(int);
    for(int i = 0; i < len_a; i++)
    {
        ListNode* t = new ListNode(a[i]);
        it_a.next = t;
        it_a = t;
    }
    for(int i = 0; i < len_b; i++)
    {
        ListNode* t = new ListNode(b[i]);
        it_b.next = t;
        it_b = t;
    }
    
}

int main(int argn, int** argv)
{
    
    return 0;
}
