
#include<stdlib.h>
#include<stdio.h>

int top=-1,stack[5],size=5,choice,i,queue[5],front=0,rear=-1;
void push();
void menu();
void print();
void stacktoqueue();
void printqueue();
int main()
{
menu();
return(0);
}
menu()
{
    printf("Enter Your Choice\n");
    printf("1-Push\n");
    printf("3-Print\n");
    printf("4-Stack To Queue\n");
    printf("5-Print the Queue\n");
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1:
        push();
        break;
        case 3:
        print();
        break;
        case 4:
        stacktoqueue();
        break;
        case 5:
        printqueue();
        break;
        default:
        exit(0);
        
        break;
    }
}

push()
{
    if(top==size-1)
    {
    printf("\nStack Full\n");
    
    }
    else
    {
        ++top;
        printf("Enter the New element\n");
        scanf("%d",&stack[top]);
        
    }
    menu();
}

print()
{
    printf("Stack elements are\n");
    for(i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
    menu();
}

stacktoqueue()
{
    if(rear==size-1)
    {
        printf("Queue Full\n");
    }
    else
    {
    for(i=top;i>=0;i--)
    {
        rear++;
        queue[rear]=stack[i];
       
    }
    }
    menu();
}

printqueue()
{
    for(i=front;i<=rear;i++)
    {
        printf("%d\t",queue[i]);
    }
    menu();
}


