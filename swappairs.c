#include<stdlib.h>
#include<stdio.h>

typedef struct ListNode{
    int val;
    struct ListNode *next;
} ListNode;

struct ListNode* swapPairs(struct ListNode* head){
    int len=0;
    struct ListNode * temp= head;
    while(temp!= NULL){
        len++;
        temp=temp->next;
    }
    if(head==NULL){
        return NULL;
    }
    if(len==1){
        return head;
    }
    struct ListNode * ptr=head->next;
    if(len==2){
        ptr->next=head;
        head->next=NULL;
        return ptr;
    }
    struct ListNode *t=head;
    struct ListNode *tt, *ttt;
    if(len>2){
        for(int i=0; i<len; i++){
            if(i%2==0 && i==0){
                tt=t->next;
                t->next= tt->next;
                tt->next=t;
            }
            
            if(i%2==0 && i!=len-1 && i>0){
                tt=t->next;
                ttt->next=t->next;
                t->next= tt->next;
                tt->next=t;
            }
            
            if(i%2!=0 ){
                ttt=t;
                t=t->next; 
            }
        }
    }
    return ptr;
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
    ListNode * out= swapPairs(head1);
    display_list(out);
}