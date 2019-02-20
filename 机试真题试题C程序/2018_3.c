#include<stdlib.h>
#include<stdio.h>
struct list//用结构体表示每一个节点，用队列来实施bfs
{
    long n;
    int step;//表示步数
    struct list *next;
};
int main()
{
    long n,m,k;
    struct list *p,*p1,*p2,*p3,*pm;
    scanf("%ld %ld",&n,&m);
    p=(struct list *)malloc(sizeof(struct list ));
    p->n=n;
    p->step=1;
    p->next=NULL;
    pm=p;
    while(p!=NULL)//每一步-1，+1，*2都保存在链表维护的队列中
    {
        k=p->n;//每一次去队列的队头
        if(k==m)
            break;
        p1=(struct list *)malloc(sizeof(struct list ));
        p1->n=k-1;
        p1->step=p->step+1;
        p1->next=NULL;
        pm->next=p1;
        p2=(struct list *)malloc(sizeof(struct list ));
        p2->n=k+1;
        p2->step=p->step+1;
        p2->next=NULL;
        p1->next=p2;
        p3=(struct list *)malloc(sizeof(struct list ));
        p3->n=k*2;
        p3->step=p->step+1;
        p3->next=NULL;
        p2->next=p3;
        pm=p3;
        p1=p;
        p=p->next;

        free(p1);

    }
printf("%d\n",p->step-1);
return 0;
}

