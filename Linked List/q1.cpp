#include <iostream>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;

    // Constructor
    ListNode(int x)
    {
        val = x;
        next = NULL;
    }
};

// Merge two sorted linked lists
ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{
    if (list1 == NULL) return list2;
    if (list2 == NULL) return list1;

    if (list1->val <= list2->val)
    {
        list1->next = mergeTwoLists(list1->next, list2);
        return list1;
    }
    else
    {
        list2->next = mergeTwoLists(list1, list2->next);
        return list2;
    }
}

// Utility: Print linked list
void printList(ListNode *head)
{
    while (head != NULL)
    {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    // Creating first list: 1 -> 3 -> 5
    ListNode *list1 = new ListNode(1);
    list1->next = new ListNode(3);
    list1->next->next = new ListNode(5);

    // Creating second list: 2 -> 4 -> 6
    ListNode *list2 = new ListNode(2);
    list2->next = new ListNode(4);
    list2->next->next = new ListNode(6);

    cout << "List 1: ";
    printList(list1);

    cout << "List 2: ";
    printList(list2);

    ListNode *merged = mergeTwoLists(list1, list2);

    cout << "Merged List: ";
    printList(merged);

    return 0;
}