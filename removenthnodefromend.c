#include<stdlib.h>
#include<stdio.h>

typedef struct ListNode{
    int val;
    struct ListNode *next;
} ListNode;


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode * temp= head;
    struct ListNode * prev= NULL;
    while(temp!= NULL){
        n--;
        if(n<0){
            if(prev== NULL){
                prev = head;
            }
            else 
                prev = prev->next;
        }
        temp=temp->next;
    }
    if(n==0){
        return head=head->next;
    }
    prev->next= prev->next->next;
    return head;
    // int len=0;
    // struct ListNode * temp= head;
    // struct ListNode * ptr;
    // while(temp->next!= NULL){
    //     len++;
    //     temp=temp->next;
    // }
    // struct ListNode * temp2= head;
    // for(int i=0; i<len-n; i++){
    //     head = head->next;
    // }
    // if (len==0){
    //     return NULL;
    // }
    // else if (len+1==n)
    // {
    //     temp2=temp2->next;
    //     return temp2;
    // }
    
    // else{
    //     ptr=head->next;
    //     head->next= ptr->next;
    //     return temp2;}
}
ListNode *create_list(int size, int val){
    ListNode *temp;
    ListNode *p = malloc(sizeof(ListNode));
    ListNode *head= p;
    p->val= val;
    p->next=NULL;
    head=p;
    int data_;
    for (int i = 2; i <= size; i++)
    {
        temp=malloc(sizeof(ListNode));
        printf("Enter val to be inserted in node %d  ", i);
        scanf("%d", &data_);
        temp->val= data_;
        temp->next=NULL;
        p->next= temp;
        p=temp;
    }  
    return head; 

}
void display_list( ListNode* head){
    ListNode *temp;
    temp =head;
    while(temp!= NULL){
        printf("%d  ", temp->val);
        temp=temp->next;
    }
    printf("\n");
    
}
int main(){
    printf("Enter the size of 1st linked list  ");
    int size_1;
    int data1,data2;
    ListNode *head1;
    scanf("%d", &size_1);
    printf("Enter val to be inserted in node 1 of 1st ");
    scanf("%d", &data1);
    head1= create_list( size_1, data1);
    printf("Enter the n ");
    int n;
    scanf("%d", &n);  
    // printf("Enter val to be inserted in node 1 of 2nd ");
    // scanf("%d", &data2);
    // head2= create_list( n, data2);
    // head=createchain(size);
    display_list( head1);
    ListNode * out= removeNthFromEnd(head1, n);
    display_list(out);
}