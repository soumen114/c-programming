#include<stdio.h>
#include<stdlib.h>
struct NODE
{
	int num;
	struct NODE *next;
};
struct NODE *nodeDel(struct NODE *head,int key)
{
	struct NODE *curr,*prev;
	int found=0;
	if(head->num==key)
	{
		           ; 
		        ;
		found=1;
	} else {
	       	prev = head;
	       	curr = prev->next;
	       	while(   )
	         	{
	         		if(curr->num==key)
	         		{
	         			
	         			found =1;
	         			break;
					 }
					 prev =curr;
					 curr =prev->next;
			    }
	       	
         	}
	      if(found==1)
	      {
	      	   ;
		  }
	return(head);
}
