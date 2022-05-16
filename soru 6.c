/* -1 girilene kadar cift sayilari basa, tek sayilari sona ekleyen */

#include <stdio.h>
#include <stdlib.h>

   struct node{
   int num;
   struct node *next;
  }*head,*p,*newNode;


   typedef struct node node;

    int main(){
    int sayi;

    printf("sayi giriniz: ");
    scanf("%d",&sayi);

    while(sayi!=-1){
         if(head==NULL){
            head=(node*)malloc(sizeof(node));
            head->num=sayi;
}
    if(sayi%2==0){
       newNode=(node*)malloc(sizeof(node));
       newNode->num=sayi;
       newNode->next=head;
       head=newNode;

       printf("cift eklendi.\nsayi giriniz: ");scanf("%d",&sayi);

 } else{
      p=head;

   while(p->next==NULL)
        p=p->next;
        newNode=(node*)malloc(sizeof(node));
        newNode->num=sayi;
        p->next=newNode;
        printf("tek eklendi.\nsayi giriniz: ");scanf("%d",&sayi);
 }
 }
      free(head);
}
