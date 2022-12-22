#include<stdlib.h>
#include<stdio.h>
#include <math.h>
typedef struct ListNode{
    int val;
    struct ListNode *next;
} ListNode;

struct ListNode* reverseKGroup(struct ListNode* head, int k){
    int len=0, value;
    struct ListNode * temp= head;
    struct ListNode * t= head, *tt=head;
    while(temp!= NULL){
        len++;
        temp=temp->next;
    }
    int count= floor(len/k);
    if(len==1|| k==1){
        return head;
    }
 
    struct ListNode * head2, * headret=NULL;
    if(len==2 && (k==2)){
        (t->next)->next= head;
        head=head->next;
        t->next=NULL; 
        return head;
    }
    int arr[k];
    for(int i=1; i<=count; i++){
        int top=0;
        for (int j= 0; j < k; j++)
        {
            arr[j]=t->val;
            t=t->next;
            top++;
        }
        for(int l = k-1; l>=0; l--){
            struct ListNode * tem= (struct ListNode*)malloc(sizeof(struct ListNode));
            tem->next= NULL;
            tem->val= arr[l];
            if (headret == NULL){
                headret= tem;
                tt= headret;
            }
            if (headret != NULL){
                tt->next= tem;
                tt= tt->next;
            }
        }       
    }
    if(t!=NULL);
        tt->next= t;
    return headret;
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
    ListNode * out= reverseKGroup(head1, data2);
    display_list(out);
}