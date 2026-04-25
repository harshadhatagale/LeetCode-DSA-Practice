#include <iostream>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;

    ListNode(int x)
    {
        val = x;
        next = NULL;
    }
};

ListNode *removeNthFromEnd(ListNode *head, int n)
{
    ListNode *fast = head;
    ListNode *slow = head;

    for (int i = 0; i < n; i++)
    {
        fast = fast->next;
    }

    if (fast == NULL)
    {
        ListNode *temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    while (fast->next != NULL)
    {
        fast = fast->next;
        slow = slow->next;
    }

    ListNode *temp = slow->next;
    slow->next = temp->next;
    delete temp;

    return head;
}

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
    ListNode *list1 = new ListNode(1);
    list1->next = new ListNode(3);
    list1->next->next = new ListNode(5);

    cout << "Original List: ";
    printList(list1);

    int n = 2;
    list1 = removeNthFromEnd(list1, n);

    cout << "After Removal: ";
    printList(list1);

    return 0;
}