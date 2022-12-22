#include<stdlib.h>
#include<stdio.h>

typedef struct ListNode{
    int val;
    struct ListNode *next;
} ListNode;


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode * output, *tempp;
    struct ListNode * temp=(struct ListNode*)malloc(sizeof(struct ListNode));
    output=temp;
    tempp=temp;
    struct ListNode *temp1=l1;
    struct ListNode * temp2=l2;
    int sum;
    int carry=0;
    while (temp1!=NULL && temp2 != NULL)
    {
        sum=temp1->val + temp2->val;
        struct ListNode * temp0=(struct ListNode*)malloc(sizeof(struct ListNode));
        temp0->val=0;
        temp0->next=NULL;
        temp1=temp1->next;
        temp2=temp2->next;
        if(carry==0){
            if(sum>9){
                carry=1;
                temp->val=sum-10;
            }
            else{
                carry=0;
                temp->val=sum;
            }
        }
        else{
            if(sum>=9){
                carry=1;
                temp->val=sum+1-10;
            }
            else{
                carry=0;
                temp->val=sum+1;
            }
        }
        temp->next=temp0;
        temp=temp->next;
    }
    while ((tempp->next)->next!=NULL)
    {
        tempp = tempp->next;
    }
    if(carry==0){
        if(temp1==NULL){
            tempp->next=temp2;
        }
        else if (temp2==NULL)
        {
            tempp->next=temp1;
        }
        else
            tempp->next=NULL;
    }
    else{
        temp->val=1;
        temp->next=NULL;
        if(temp1==NULL && temp2 !=NULL){
            tempp->next=temp2;
            if(temp2->val<9){
                temp2->val=temp2->val+1;
            }
            else{
                while(temp2->val==9 && temp2->next!=NULL){
                    temp2->val=0;
                    temp2=temp2->next;
                }
                if(temp2->val==9){
                    temp2->val=0;
                    temp2->next=temp;}
                else
                    temp2->val=temp2->val+1;
            }
        }
        else if (temp2==NULL && temp1!=NULL){   
            tempp->next=temp1;
            if(temp1->val<9){
                temp1->val=temp1->val+1;
            }
            else{
                while(temp1->val==9 && temp1->next!=NULL){
                    temp1->val=0;
                    temp1=temp1->next;
                }
                if(temp1->val==9){
                    temp1->val=0;
                    temp1->next=temp;}
                else
                    temp1->val=temp1->val+1;
            }
        }
        else
            tempp->next= temp;
        }
    
    return output;
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
    ListNode * out= addTwoNumbers(head1, head2);
    display_list(out);
}