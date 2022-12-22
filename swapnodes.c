#include<stdlib.h>
#include<stdio.h>

typedef struct ListNode{
    int val;
    struct ListNode *next;
} ListNode;

struct ListNode* swapNodes(struct ListNode* head, int k){
    int len=0, value;
    struct ListNode * temp= head;
    while(temp->next!= NULL){
        len++;
        temp=temp->next;
    }
    len++;
    if(len==1){
        return head;
    }
    if(len==2 && (k==1||k==2)){
        value=head->val;
        head->val=head->next->val;
        head->next->val=value;
        return head;
    }
    struct ListNode *t=head, *tt=head;
    for(int i=0; i<k-1; i++){
        t=t->next;
    }
    for(int i=0; i<len-k; i++){
        tt=tt->next;
    }
    value=tt->val;
    tt->val=t->val;
    t->val=value;
    return head;
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
    display_list( head1);
    scanf("%d", &data2);
    ListNode * out= swapNodes(head1, data2);
    display_list(out);
}