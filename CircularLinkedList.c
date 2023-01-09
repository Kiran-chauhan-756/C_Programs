#include<stdio.h>
#include<Stdlib.h>

typedef struct clist{
    int data;
    struct clist * next;
}cll;

void Insert_Beg(cll **temp,cll **head,cll **prev){
printf("Enter dat\n");
scanf("%d",&(*temp)->data);
if(*head==NULL){
    (*temp)->next=*temp;
    *head=*temp;
    *prev=*temp;
}
else{
    (*temp)->next=*head;
    *head=*temp;
    (*prev)->next=*head;
}

}

void traversal(cll *head){
    cll *other=head;
    if(head!=NULL){
    do{
    printf("%d ",head->data);
    head=head->next;
    }while(head!=other);
    }
}
void traversalRev(cll *prev){
    cll *other=prev;
    if(prev!=NULL){
    do{
    printf("%d ",prev->data);
    prev=prev->next;
    }while(prev!=other);
    }
}
void delete(cll **head,cll **prev){
    cll *beedu;
    beedu=*head;
    (*head)=(*head)->next;
    (*prev)->next=*head;
    free (beedu);
}
void main(){
    cll *temp,*head=NULL,*prev;
    int ch;
    while(1){
        temp=(cll*)malloc(sizeof(cll));
    printf("Enter your choice\n");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        Insert_Beg(&temp,&head,&prev);
        break;
        case 2:
        traversal(head);
        break;
        case 3:
        traversalRev(prev);
        break;

        case 4:
        delete(&head,&prev);
        break;

        case 5:
        exit(0);
        break;
        default:
        printf("Invalid choice\n");
    }
    }
    
}
