Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    Node* anshead=NULL;
    Node* anstail=NULL;
    Node* temp1=head1;
    Node* temp2=head2;
    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1->data==temp2->data)
        {
            Node* temp=new Node(temp1->data);
            if(anshead==NULL)
            {
                anshead=temp;
                anstail=temp;
            }
            else
            {
                anstail->next=temp;
                anstail=temp;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        else if(temp1->data<temp2->data)
        {
            temp1=temp1->next;
        }
        else
        {
            temp2=temp2->next;
        }
    }
return anshead;
}
