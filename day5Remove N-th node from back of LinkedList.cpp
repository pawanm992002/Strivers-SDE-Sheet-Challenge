/*
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
*/

Node *removeKthNode(Node *head, int K)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    int count = len - K - 1, i = 0;
    temp = head;
    if (count < 0)
    {
        head = head->next;
        return head;
    }

    while (i < count && temp != NULL)
    {
        i++;
        temp = temp->next;
    }
    temp->next = temp->next->next;
    return head;
}
