/*
Title: 2.AddTwoNumber
You are given two linked lists representing two non-negative numbers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8

Author: Hezijian
Data: 2016-05-27 19:11:50 
*/
#include <iostream>
using namespace std;
struct ListNode 
{
    public:
    ListNode(int x) : val(x), next(0) {}
    int val;
    ListNode* next;
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
{
    ListNode* ret = 0;
    ListNode* pRet = ret;
    ListNode* p1 = l1;
    ListNode* p2 = l2;
    int num1, num2, sum;
    int k = 0;
        
    while(p1 || p2)
    {
        num1 = 0, num2 = 0;
        if(p1)
        {
            num1 = p1->val;
            p1 = p1->next;
        }
        if(p2)
        {
            num2 = p2->val;
            p2 = p2->next;
        }
        
        sum = num1 + num2 + k;
        k = sum / 10;
        sum = sum % 10;
            
        ListNode* temp = new ListNode(0);    
        temp->val = sum;
        if(pRet == 0)
        {
            ret = temp;
            pRet = ret;
        }
        else
        {
            pRet->next = temp;
            pRet = temp;
        }
        
    }
    if(k)
    {
        ListNode* temp = new ListNode(1);
        pRet->next = temp;
    }
    return ret;
    
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
        it_a->next = t;
        it_a = t;
    }
    for(int i = 0; i < len_b; i++)
    {
        ListNode* t = new ListNode(b[i]);
        it_b->next = t;
        it_b = t;
    }
    
}

void PrintList(ListNode* l)
{
    ListNode* p = l;
    while(p != 0)
    {
        cout << p->val << endl;
        p = p->next;
    }
}

int main(int argn, int** argv)
{
    ListNode* l1 = new ListNode(0);
    ListNode* l2 = new ListNode(0);
    initData(l1, l2);
    cout << "Hello World" << endl;
    PrintList(addTwoNumbers(l1->next, l2->next));
    getchar();
    return 0;
}
