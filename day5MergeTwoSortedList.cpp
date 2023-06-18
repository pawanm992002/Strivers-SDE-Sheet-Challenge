#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int> *sortTwoLists(Node<int> *first, Node<int> *second)
{
    Node<int> *third = new Node<int>(-1);
    Node<int> *temp = third;

    while (first != NULL && second != NULL)
    {
        Node<int> *newNode = NULL;
        if (first->data < second->data)
        {
            newNode = new Node<int>(first->data);
            first = first->next;
        }
        else
        {
            newNode = new Node<int>(second->data);
            second = second->next;
        }
        temp->next = newNode;
        temp = temp->next;
    }
    if (first != NULL)
    {
        temp->next = first;
    }
    else
    {
        temp->next = second;
    }
    return third->next;
}
