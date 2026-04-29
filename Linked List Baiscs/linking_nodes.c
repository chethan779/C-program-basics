#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};


void display(struct Node** head)
    {
        struct Node* temp = *head;
        printf("\n\n printing the linked list : \n\n");
        while(temp != NULL)
        {
            printf("%d -> ", temp -> data);
            temp = temp -> next;
        }
        printf("NULL\n");
    }

void insert_at_first(struct Node** head_reference , int new_data)
{
    struct Node* new_node;
    
    new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node -> data = new_data;
    new_node -> next =NULL;
   
    new_node -> next = *head_reference;
    *head_reference = new_node;   
}

void insert_at_end(struct Node** head , int new_data)
{
    struct Node* new_node;

    new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node -> data = new_data;
    new_node -> next =NULL;
    if(*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        struct Node* last = *head;

        while (last -> next != NULL)
            last = last -> next;
        
        last -> next = new_node;
    }
}

void delete_at_first(struct Node** head)
{
    struct Node* temp = *head;

    if(*head == NULL)
    {
        printf("There is no linked list created at all\n");
        return;
    }
        
    *head = (*head) -> next;

    free(temp);
    
    printf("\nFirst node deleted successfully!!!!");
}

void delete_at_end(struct Node** head)
{
    struct Node* previous = NULL;
    struct Node* current = *head;

    if(*head == NULL)
    {
        printf("There is no linked list created at all\n");
        return;
    }

    while(current -> next != NULL)
        {previous = current;
        current = current -> next;}

    previous -> next = NULL;
    free(current);

    printf("\nLast node deleted successfully!!!!");

}
int main(){
    struct Node *head = NULL , *temp , *new_node;

    printf("Enter the number of nodes to be created: ");
    int n , i = 0;
    scanf("%d", &n);
    
    while(i<n)
    {
            new_node = (struct Node *)malloc(sizeof(struct Node));
            printf("Enter data for %d linked list here :\n",i+1);
            scanf("%d", &new_node->data);
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

    int new_data1 , new_data2;

    printf("Enter the element u wanna insert at first : ");
    scanf("%d", &new_data1);

    insert_at_first(&head,new_data1);

    display(&head);

    printf("Enter the element u wanna insert at first : ");
    scanf("%d", &new_data2);

    insert_at_end(&head,new_data2);

    display(&head);

    delete_at_first(&head);
    display(&head);

    delete_at_end(&head);
    display(&head);

    return 0;
}