/* leetcode
2. ADD two number
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.
Link : https://leetcode.com/problems/add-two-numbers/
 */

#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    ListNode *head = NULL, *ptr = NULL;
    int pre = 0;
    while (l1 != NULL || l2 != NULL)
    {
        int a = 0;
        if (l1 != NULL)
        {
            int c = l1->val;
            l1 = l1->next;
            a += c;
        }
        if (l2 != NULL)
        {
            int b = l2->val;
            l2 = l2->next;
            a += b;
        }
        a += pre;
        if (a > 9)
        {
            int rem = a % 10;
            pre = a / 10;
            ListNode *node = new ListNode(rem);
            if (head == NULL)
                head = node;
            if (ptr == NULL)
            {
                ptr = node;
            }
            else
            {
                ptr->next = node;
                ptr = node;
            }
        }
        else
        {
            pre = 0;
            ListNode *node = new ListNode(a);
            if (head == NULL)
                head = node;
            if (ptr == NULL)
            {
                ptr = node;
            }
            else
            {
                ptr->next = node;
                ptr = node;
            }
        }
    }
    if (pre != 0)
    {
        ListNode *node = new ListNode(pre);
        ptr->next = node;
        ptr = node;
    }
    return head;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << "\n";
    return 0;
}