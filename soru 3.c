/* Bir bagli dogrusal listelerde listenin ortasinda yer alan elemani silen
(tuttugu alani bellege geri iade eden) bir fonksiyon yaziniz.
*/

#include <stdio.h>
#include <stdlib.h>
   struct node{ int num;
   struct node *next;
 }*head,*p,*q,*temp,*New,*show;


 typedef struct node node;

     node *makeList(int size){
     int i;

     head=(node*)malloc(sizeof(node));
     temp=head;

     printf("ilk deger?: ");scanf("%d",&head->num);

     for(i=1;i<size;i++){
        New=(node*)malloc(sizeof(node));

        printf("yeni deger?: ");scanf("%d",&New->num);
        temp->next=New;
        temp=New;
 }
        temp->next=NULL;
        printf("olusturuldu.\n");
 }

       node *showList(node *head){
       show=head;

       printf("Liste:");

       while(show!=NULL){
            printf("%d,",show->num);
            show=show->next;
 }
            printf("\n");
 }

     node *deleteMiddle(node *head){
     int i,delte,cnt=1;
     p=head;

     while(p->next!=NULL){
          p=p->next;
          cnt++;
 }
         delte=cnt/2;
         if(cnt%2!=0)
           delte++;
           p=head;
           q=head->next;


         for(i=0;i<=delte-3;i++){
            q=q->next;
            p=p->next;
 }
         p->next=q->next;

        free(q);
        printf("guncellendi.\n");

        return head;
}
    int main(){
        int size;

        if(head==NULL){
           printf("boyut giriniz:");scanf("%d",&size);
           makeList(size);
 }
        showList(head);
        deleteMiddle(head);
        showList(head);
        free(head);
 }

