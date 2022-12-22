#include<stdlib.h>
#include<stdio.h>

typedef struct ListNode{
    int val;
    struct ListNode *next;
} ListNode;



struct ListNode* removeElements(struct ListNode* head, int val){
    int len=0;
    struct ListNode * temp= malloc(sizeof(struct ListNode));
    temp->next= head;
    struct ListNode *temp3= temp;
    while(head!=NULL){
        if(head->val== val){
            temp3->next= head->next;
            head=head->next;
        }
        else{
            head= head->next;
            temp3=temp3->next;
        }
    }
    return temp->next;

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
    printf("Enter the n ");  
    int n;
    scanf("%d", &n);
    ListNode * out= removeElements(head1, n);
    display_list(out);
}