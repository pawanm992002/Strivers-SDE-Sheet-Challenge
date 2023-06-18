#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
        return head;
    LinkedListNode<int> *cur = head, *prev = NULL, *forward = head->next;
    while (forward != NULL)
    {
        cur->next = prev;
        prev = cur;
        cur = forward;
        forward = forward->next;
    }
    cur->next = prev;
    return cur;
}
