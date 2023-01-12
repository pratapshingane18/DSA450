/*

Apporach is pretty straight forward-

Take a map;
initiate map with head val as 1;
take two pointer prev and curr;
initialize curr as head ka next and prev as head;

now traverse till curr becomes NULL;
while doing so if mp[curr->data] i.e. if value is already present in map then change node point prev->next to curr->next 
and delete curr else create new element in map and initiate its value as 1 - mp[curr->data] = 1;
and make prev= curr;

continue traversing curr = curr->next;

*/

class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     map<int,int> mp;
     struct Node* curr = head;
     mp[curr->data] =1;
     struct Node* prev = curr;
     curr = curr->next;
     
     while(curr){
         if(mp[curr->data]){
             prev->next = curr->next;
             free(curr);
         }
         
         else{
             mp[curr->data] =1;
             prev = curr;
            
         }
         
         curr = curr->next;
         
     }
     
     return head;

    }
};
