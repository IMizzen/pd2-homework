
/*
    klavyeden -1 girilene kadar verilen tek sayilari tek bagli dogrusal bir listenin basina,
    verilen cift sayilari ise listenin sonuna ekleyen program

*/
#include <stdio.h>
#include <stdlib.h>

struct node{
    int num;

    struct node *next;
}*head, *p, *newNode;

typedef struct node node;



int main()
{
    p= head;
    int x;
    printf("Bir sayi giriniz: ");
    scanf("%d", &x);

        while(x!= -1){
             if(head== NULL){
                head= (node*)malloc(sizeof(node));
                head->next= NULL;
                head->num= x;

                }

            else if(x%2==0){
                    p=head;
                    while(p->next!= NULL){
                        p= p->next;
                    }
                      newNode= (node*)malloc(sizeof(node));
                      newNode->num= x;
                      newNode->next= NULL;
                      p->next= newNode;
                    }
            else{
                newNode= (node*)malloc(sizeof(node));
                newNode->num=x;
                newNode->next= head;
                head= newNode;
            }

        printf("Sayi giriniz: ");
        scanf("%d", &x);

    }
    p=head;
    while(p!=NULL){
    printf("%d\n", p->num);
    p= p->next;
    }
    getch();
    return 0;
}
