struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */

class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
    
        Node *ptr = head;
        int count = 0;
        while(ptr!=NULL) {
            count++;
            ptr = ptr->next;
        }
        return count;
    
    }
};