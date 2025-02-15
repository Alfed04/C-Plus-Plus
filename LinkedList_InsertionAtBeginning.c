#include<stdlib.h>
#include<stdio.h>
struct Node
{
    int data;
    struct Node * next;
};
void Print(struct Node* head){
    printf("List is ");
    while(head!=NULL){
        printf("%d ",head->data);
        head=head->next;
    }
    printf("\n");
}
struct Node* Insert(struct Node *head,int data){
    struct Node * temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=head;
    head=temp;
    return head;
}

int main (){

    struct Node * head;
    head=NULL;
    int x,i,n;
    printf("Enter the Number of Elements : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the element ");
        scanf("%d",&x);
        head=Insert(head,x);
        Print(head);
    }
    return 0;
}