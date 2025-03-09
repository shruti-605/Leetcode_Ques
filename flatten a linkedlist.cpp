class Solution {
public:
    Node* flatten(Node* head) {
        if(head==NULL){
            return head;
        }
            Node* curr=head;
            while(curr!=NULL){
                if(curr->child!=NULL){
                    //flatten the child nodes
                    Node* next=curr->next;//stores next point before modification
                    curr->next=flatten(curr->child);//recursively faltten the child list

                    curr->next->prev=curr;
                    curr->child=NULL;

                    //find tail
                    while(curr->next!=NULL){
                        curr=curr->next;
                    }
                    //attach tail with next ptr
                    if(next!=NULL){
                        curr->next=next;
                        next->prev=curr;
                    }
                }
                curr=curr->next;
            }
            return head;
        //time complexity n nodes exsit 0(n)
    }
};
