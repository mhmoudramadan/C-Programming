#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
int main()
{
    //   create pointers to get data	
	struct node *head;
	struct node *new_node;
	struct node *last_node;
	struct node *one=NULL;
	struct node *two=NULL;
	struct node *three=NULL;
	struct node *current_data;
	//   allocate data using DMA with pointer created
	
	one = (struct node *)malloc(sizeof(struct node));
	two = (struct node *)malloc(sizeof(struct node));
	three = (struct node *)malloc(sizeof(struct node));
	new_node=(struct node*)malloc(sizeof(struct node));
	
	//     assign values too pointer
	
	one->data =10;
	two->data =20;
	three->data =40;
	
	// connect data single list  * awsl kolhm bb3d 
	
	one->next=two;
	two->next=three;
	three->next = new_node;
	new_node=NULL;
	 
	 //   save address 
	 
	 head=one;
	 current_data=head;
	 
	 
	 // print values
	 
	 
	 while(current_data!=NULL)
	 {
		 printf(" current_data->data = %d\n",current_data->data);
		 current_data=current_data->next;
	 }
	 // insert in beginning
	 
	 new_node->next=head;
	 head=new_node;
	 
	 
	 //  insert node at end 
	 
	 last_node->next=three->next;
	 three->next = last_node;
	
}
