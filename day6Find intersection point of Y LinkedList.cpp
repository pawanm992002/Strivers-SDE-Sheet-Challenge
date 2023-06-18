/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };

*****************************************************************/

#include <bits/stdc++.h>
Node *findIntersection(Node *firstHead, Node *secondHead)
{
    Node *temp1 = firstHead, *temp2 = secondHead;
    unordered_set<Node *> s;
    while (temp1 != NULL)
    {
        s.insert(temp1);
        temp1 = temp1->next;
    }
    while (temp2 != NULL)
    {
        if (s.find(temp2) == s.end())
            temp2 = temp2->next;
        else
            return temp2;
    }
    return NULL;
}