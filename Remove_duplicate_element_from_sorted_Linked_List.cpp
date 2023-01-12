/*
Approach is very simple take two pointer 
  |- last - points to head
  |- q - points to head ka next;
  
  now traverse until q gets null;
  while traversing if q->data == last->data;
  
  then break that link by pointing last to next node of q;
  then continue traversing
  
  */

/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

//Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head)
{
 struct Node *q = head->next;
 struct Node* last = head;
 
 while(q){
     if(q->data == last->data){
         last->next = q->next;
        
     }
     
     else{
         last = q;
     }
     
     q = q->next;
 }
 
 return head;
}
