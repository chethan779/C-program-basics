// PES1UG25AM095
#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node* next;
};


void display(struct Node** head_reference)
{
struct Node* temp = *head_reference;
printf("The linked list is :  \n\n");
while(temp != NULL)
{	
	printf("%d -> ", temp->data);
	temp = temp->next;
}
printf("NULL\n");
}

int main()
{
	struct Node *head = NULL  , *temp , *new_node;

	int n , i=0;
	
	printf("Enter number of nodes : ");
	scanf("%d",&n);

	while(i<n)
	{	
		new_node = (struct Node *)malloc(sizeof(struct Node));
		printf("Enter data for node %d : ",i+1);
		scanf("%d",&new_node -> data);
		new_node -> next = NULL;

		if(head == NULL)
		{
			head = new_node;
			temp = new_node;
		}
		else
		{
			temp -> next = new_node;
			temp = temp -> next;
		}
		i++;
	}

	display(&head);
	return 0;
}