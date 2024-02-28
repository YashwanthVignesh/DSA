#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* link;
};

int main(){

    struct node*head = NULL;
    head = (struct node*)malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;
    printf("%d\n",head->data);
    
    struct node* next = NULL;
    next = malloc(sizeof(struct node));
  
    next->data = 67;
    next->link = NULL;
    head->link= next;

    next = malloc(sizeof(struct node));
    int x;scanf("%d",&x);
    next->data=x;
    next->link=NULL;
    head->link->link=next;

    printf("%d",next->data);
        
    
    
    


}