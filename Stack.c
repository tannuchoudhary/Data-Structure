/*push and pop operation in c using pointers*/

#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

typedef struct     

{

     int item[SIZE];
     int top;         /* A "top" variable for containing the value of top elements */

}stack;

/*Function definition*/

void push (stack *sp, int value)  /* For pushing an element into stack, first argument i.e pointer is to receive address to point the variable for that particular datatype. */
{
    if(sp->top == SIZE-1)         /* If the stack will be full, it will not able to take more values*/  
                                     

      {
          printf("STACK OVERFLOW\n");
          return ;
      }

    sp->top++;                           /* sp->top does means that the pointer sp is pointing to the element in the top variable */
    sp->item[sp->top] = value;           /* Assigning the value in the array */
}

int pop(stack *sp)                       /* For popping an element out of stack*/
   {
      if(sp->top == -1)                  /* If the stack will be empty, it will not able to delete values*/

      {
          printf("STACK UNDERFLOW\n");   /* Either if there is not any value in the stack, still it have to return an integer
                                            As the return type of the function pop is int, so we will return -9999.*/
          return -9999;                 
      }
                                       
      int value;                         
      value = sp->item[sp->top];         /* Putting the top element in the variable value */
      sp->top--;                         /* And then decrementing the top by one to get the value of the below element */
      return value;                      /* Returning the value*/

   }
 
void init(stack *sp)                    /* For initializing the top variable */
  {
      sp->top = -1;
  }

void display(stack *sp)
{
     for(int i=0; i < sp->top; i++)
     {
          printf("%d\n", item[sp->top]);
     }
}
/* Function prototype or function declaration */
/* we have passed an asterisk symbol (dereferencing operator) in argument to receive the address i.e pointer variable */

void push(stack *, int);
int pop(stack *);
void init(stack *);


int main()
{
   stack s1, s2;    /* Creating variable s1 and s2 of datatype stack */

   init(&s1);       /* We will do initialization first to avoid garbage values */
   

int choice, value;

printf("1. Push\n2. Pop\n3. Display\n4. Exit");  /* A display message for users */

while(1)

    {
          printf("\nEnter choice");
          scanf("%d",&choice);

              switch (choice)
                {
                    case 1: printf("\nEnter value:");
                             scanf("%d", &value);
                             push(&s1, value);
                             break;

                    case 2: value = pop(&s1);  /*assigning the returned value by pop into variable value*/

                            if(value !=-9999)  /*If the value will be -9999, this does means that stack is empty*/
                               {
                                   printf("Popped data will be %d",value);
                               }
                            break;

                     case 3: display(&s1);
                             break;
                     case 4: exit(0);                         /* To exit the console */

                     default : printf("Invalid choice\n");   /* For invalid choices */

                }
    }

    return 0;

}
