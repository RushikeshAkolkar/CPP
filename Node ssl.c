h#include<stdlib.h>
#include<stdio.h>
typedef struct singly_link_list_node
{
	int data;
	struct singly_link_list_node *next;
}node;
node *create();
void display(node *g);
main()
{
	node *HEAD;
	HEAD=create();
	display(HEAD);
}
node *create()
{
	node *head,*p;
	int i,n;
	head=(node *)malloc(sizeof(node));
	printf("enter value in node");
	scanf("%d",head->data);
	head->next=NULL;
	p=head;
	printf("how many nodes you want");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		p->next=(node *)malloc(sizeof(node));
		p=p->next;
		printf("enter values in data part");
		scanf("%d",&(p->data));
		p->next=NULL;
		
	}
	return(head);
}
void display(node *q)
{
	while(q!=NULL)
	{
		printf("[_%d_]->",q->data);
		q=q->next;
	}
	if(q==NULL)
	{
		printf("NULL");
	}
}
