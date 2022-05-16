/* son ile ilk dugumun yerlerini degistiren fonksiyon */


#include <stdio.h>
#include <stdlib.h>
  struct node{
  int num;
 struct node *next;
 }*head,*p,*New,*temp,*show;


   typedef struct node node;

   node *makeList(int size){
   int i;

   head=(node*)malloc(sizeof(node));
   temp=head;

   printf("ilk deger?:");
   scanf("%d",&head->num);

   for(i=1;i<size;i++){
      New=(node*)malloc(sizeof(node));
      printf("yeni deger?:");
	  scanf("%d",&New->num);

      temp->next=New;
      temp=temp->next;
 }
      temp->next=NULL;
 }

   node showList(node *head){
   printf("Liste:");
   show=head;

   while(show!=NULL){
   printf("%d,",show->num);

   show=show->next;
 }
    printf("\n");
}

    node *changeFirstAndLast(node *head){
    int c;
    p=head;

    while(p->next!=NULL)
         p=p->next;
         c=head->num;
         head->num=p->num;
         p->num=c;
         printf("guncellendi.\n");
 }

   int main(){
   int size;

   if(head==NULL){
      printf("boyut giriniz:");
	  scanf("%d",&size);

      makeList(size);
 }
     showList(head);
     changeFirstAndLast(head);
     showList(head);
     free(head);

 }
