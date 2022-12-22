#include<stdlib.h>
#include<stdio.h>
#include <math.h>
typedef struct ListNode{
    int val;
    struct ListNode *next;
} ListNode;

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode * head, * h1= list1, *h2= list2;
    int len1=0; 
    int len2=0;
    int len;
    while(h1!= NULL){
        len1++;
        h1=h1->next;
    }
    while(h2!= NULL){
        len2++;
        h2=h2->next;
    }
    len = len1+len2;
    if(len==0){
        return NULL;
    }
    if(list1==NULL){
        return list2;
    }
    if(list2==NULL){
        return list1;
    }
    else{
        struct ListNode * tem= malloc(sizeof(struct ListNode));
        head= tem;
        tem->next=NULL;
        if(list1->val <= list2->val){
            tem->val= list1->val;
            list1=list1->next;
        }
        else{
            tem->val= list2->val;
            list2=list2->next;
        }
        for(int i=1; i<len; i++){
            if(list1!=NULL && list2!=NULL){
                struct ListNode * temp= malloc(sizeof(struct ListNode));
                tem->next= temp;
                temp->next=NULL;
                if(list1->val <= list2->val){
                    temp->val=list1->val;
                    list1=list1->next;
                }
                else{
                    temp->val= list2->val;
                    list2= list2->next;
                }
                tem=tem->next;
            }
            else{
                if(list1==NULL){
                    tem->next= list2;
                }
                if(list2==NULL){
                    tem->next= list1;
                }
            }
        }
    }
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
    ListNode *head1, *head2;
    scanf("%d", &size_1);
    printf("Enter val to be inserted in node 1 of 1st ");
    scanf("%d", &data1);
    head1= create_list( size_1, data1);
    printf("Enter the size of 2nd linked list  ");
    int size_2;
    scanf("%d", &size_2);  
    printf("Enter val to be inserted in node 1 of 2nd ");
    scanf("%d", &data2);
    head2= create_list( size_2, data2);
    // head=createchain(size);
    display_list( head1);
    display_list( head2);
    ListNode * out= mergeTwoLists(head1, head2);
    display_list(out);
}