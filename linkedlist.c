#include <stdio.h>
#include <stdlib.h>
struct node{
     int data;
     struct node *next;
     
 };
 
 typedef struct node node;
 node *head;
 
 void insert_end(){
        int data;
        node *temp ,*pre;
        
        printf("\nenter value : ");
        scanf("%d",&data);
        temp=(node*)malloc(sizeof(node));
        temp->data=data;
        
        if(head == NULL){
              head=temp;
              head->next=NULL;
       }
       else{
               pre=head;
               while(pre->next != NULL){
                        pre=pre->next;
               }
               pre->next=temp;
               temp->next=NULL;
       }
 }
 
 void insert_first(){
          int data;
          node *temp;
          
          printf("\nenter value to insert : ");
          scanf("%d",&data);
          
          temp=(node*)malloc(sizeof(node));
          temp->data=data;
          
          if(head ==NULL){
                  head=temp;
                  head->next=NULL;
          }
          else{
                  temp->next=head;
                  head=temp;
         }
  }
  
  void insert_pos(){
        int data;
        int pos;
        int count=2;
        node *temp,*pre;
        printf("\nenter value to insert : ");
        scanf("%d",&data);
        printf("\nenter position to insert : ");
        scanf("%d",&pos);
        temp=head;
        pre=(node*)malloc(sizeof(node));
        pre->data=data;
        
        if(head == NULL){
             printf("\nlist is empty \n");
        }
        else if(pos == 1){
                         pre->next=head;
                         head=pre;
        }
        else{
                temp=head;
                while(temp->next !=NULL){
                if(pos==count){
                        pre->next=temp->next;
                        temp->next=pre;
                        break;
               }
               else{
                        temp=temp->next;
                        count++;
               }
       }
       }
  }
  
  void display(){
          node *temp;
          int count=1;
          temp=head;
          if(head == NULL){
                   printf("\nlist is empty \n");
          }
          else{
          while(temp->next != NULL){
                 printf("list [%d] : %d\n",count,temp->data);
                 temp=temp->next;
                 count++;
          }
          printf("list [%d] : %d\n",count,temp->data);
  }
  }
  
  void search(){
         node *temp;
         int flag=0;
         int count=1;
         temp=head;
         int data;
         printf("enter element to search : ");
         scanf("%d",&data);
         
         if(head == NULL){
                 printf("\nlist is empty \n");
         }
         else{
         while(temp->next !=NULL){
                if(data == temp->data){
                         flag=1;
                         break;
                }
                temp=temp->next;
                count++;
        }
        if(temp->data == data){
                 flag=1;
        }
        if(flag==1){
        printf("\nfound\n");
        }
        else{
               printf("\nnot found\n");
        }
  }
  }
  
  int main(){
         int opt;
         do{
                printf("\n1)Insert in FIRST");
                printf("\n2)Insert in END");
                printf("\n3)Insert @ a position");
                printf("\n4)Display");
                printf("\n5)Search");
                printf("\n6)Delete");
                printf("\n0)Quiet\n");
                printf("\nChoose option : ");
                scanf("%d",&opt);
                switch(opt){
                        case 1:
                               insert_first();
                               break;
                        case 2:
                               insert_end();
                               break;
                        case 3:
                               insert_pos();
                               break; 
                        case 4:
                               display();
                               break;
                        case 5:
                               search();
                               break;
                        case 6:
                               //delete_e();
                               break; 
                        default:
                                 printf("invalid option ! try again..");
                 }
             }while(opt!=0);
             return 0;
   }                                                                 
                                                                                                                    
                                     

