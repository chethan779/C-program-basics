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

void insert_at_begining(struct Node** head_reference , int new_data)
{
	struct Node* new_node = (struct Node *)malloc(sizeof(struct Node));
	new_node -> data = new_data;
	new_node -> next = *head_reference;
	
	*head_reference = new_node;

}


void insert_at_end(struct Node** head_reference , int new_data)
{
	struct Node* new_node = (struct Node *)malloc(sizeof(struct Node));
	new_node -> data = new_data;
	new_node -> next = NULL;

	
	
	if(*head_reference == NULL)
	{
		*head_reference = new_node;
	}
	else
	{
		struct Node* temp = *head_reference;

		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
}

void delete_at_begening(struct Node** head_reference)
{
	if(*head_reference == NULL)
	{
		printf("There is no linked list to delete!!!");
		return;
	}
	
	struct Node* temp = *head_reference;

	(*head_reference) = (*head_reference) -> next;
	
	free(temp);
	printf("Deleted first node successfully!!!!");

}

void delete_at_end(struct Node** head_reference)
{
	if(*head_reference == NULL)
	{
		printf("There is no linked list to delete!!!");
		return;
	}

	struct Node* current = *head_reference;
	struct Node* previous = NULL;

	while(current -> next != NULL)
	{
		previous = current;
		current = current -> next;
	}
	previous -> next = NULL;

	printf("Deleted Last node successfully!!!!");
	
}
int main()
{
	struct Node *head = NULL  , *temp , *new_node;
	int new_data1 , new_data2;
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

	printf("Enter the new data to be inserted at begining  : ");
	scanf("%d",&new_data1);

	insert_at_begining(&head , new_data1);
	display(&head);
	
	printf("Enter the new data to be inserted at end    : ");
	scanf("%d",&new_data2);

	insert_at_end(&head , new_data2);
	display(&head);

	delete_at_begening(&head);
	display(&head);

	delete_at_end(&head);
	display(&head);

	return 0;
}
