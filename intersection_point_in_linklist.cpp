 int intersectPoint(Node* head1, Node* head2) {
        // Your Code Here
        map<Node*,int>mp;
      //  map<Node*,int>check;
      Node* temp = head1;
        while(head1){
            mp[head1]++;
            head1=head1->next;
        }while(head2){
            mp[head2]++;
            head2=head2->next;
        }
        while(temp){
            if(mp[temp]>1)return temp->data;
            temp=temp->next;
        }
        return -1;
    }