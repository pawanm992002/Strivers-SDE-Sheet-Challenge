/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addTwoNumbers(Node *num1, Node *num2)
{
    Node *sum = new Node();
    Node *temp1 = num1, *temp2 = num2, *temp3 = sum;

    int carry = 0;
    while (temp1 != NULL || temp2 != NULL || carry)
    {
        int s = 0;
        if (temp1 != NULL)
        {
            s += temp1->data;
            temp1 = temp1->next;
        }
        if (temp2 != NULL)
        {
            s += temp2->data;
            temp2 = temp2->next;
        }
        s += carry;
        carry = s / 10;
        Node *newNode = new Node(s % 10);
        temp3->next = newNode;
        temp3 = newNode;
    }
    return sum->next;
}
