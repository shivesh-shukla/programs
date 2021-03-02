#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
typedef struct node ll;
ll *first=NULL, *temp, *temp1;
int size=0,i,j,pos,choice;
int stack1[10],stack2[10];
int top=-1;
int main()
{
    menu();
    return 0;
}


void menu()
{
    printf("\n1-InsertBeg\n2-InsertEnd\n3-InsertPos\n4-DeleteBeg\n5-DeleteEnd\n6-DeletePos\n7-Search\n8-Print\n9-Exit\n10-Alternate Stack odd\n11-Even\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        insertbeg();
        break;
        case 2:
        insertend();
        break;
        case 3:
        insertat();
        break;
        case 4:
        deletebeg();
        break;
        case 5:
        deleteend();
        break;
        case 6:
        deletepos();
        break;
        case 7:
        search();
        break;
        case 8:
        print();
        break;
        case 9:
        exit(0);
        break;
        case 10:
        altstackodd();
        break;
        case 11:
        altstackeven();
        break;
    }
}

void insertbeg()
{
    if(first==NULL)
    {
        first=(ll*)malloc(sizeof(ll));
        size=size+1;
        printf("Enter the data\n");
        scanf("%d",&first->data);
        first->link=NULL;
    }
    else
    {
        temp=(ll*)malloc(sizeof(ll));
        printf("Enter the data\n");
        scanf("%d",&temp->data);
        temp->link=first;
        first=temp;
        size=size+1;
    }
    menu();
}


void insertend()
{
    if(first==NULL)
    {
        insertbeg();
    }
    else
    {
        temp=first;
        for (int i = 1; i < size; i++)
        {
            temp=temp->link;
        }
        temp1=(ll*)malloc(sizeof(ll));
        printf("Enter the data\n");
        scanf("%d",&temp1->data);
        temp1->link=NULL;
        temp->link=temp1;
        size=size+1;
    }
    menu();
}


void insertat()
{
    ll *temp6;
    if(first==NULL)
    {
        insertbeg();
    }
    printf("Enter the position starting from 1\n");
    scanf("%d",&pos);
    if(pos==1||pos==0)
    {
        insertbeg();
    }
    else if(pos==size+1)
    {
        insertend();
    }
    else if(pos>size+1)
    {
        printf("Out of memory\n");
    }
    else
    {
        temp=first;
        for (int i = 1; i < pos; i++)
        {
            temp6=temp;
            temp=temp->link;
        }
        temp1=(ll*)malloc(sizeof(ll));
        printf("Enter the data\n");
        scanf("%d",&temp1->data);
        temp1->link=temp6->link;
        temp6->link=temp1;
        size=size+1;
    }   
    menu();
}


void deletebeg()
{
    ll *temp2;
    if(first==NULL)
    {
        printf("Empty List\n");
    }
    else
    {
        temp2=first;
        first=first->link;
        free(temp2);
    }
    menu();
}


void deleteend()
{
    ll *temp3;
    if(first==NULL)
    {
        printf("Empty List\n");
        return;
    }
    else
    {
        temp=first;
        for(;temp->link!=NULL;)
        {
            temp3=temp;
            temp=temp->link;
        }
        temp3->link=NULL;
        free(temp);
    }
    menu();
}


void deletepos()
{
    ll *temp4;
    if(first==NULL)
    {
        printf("Empty List\n");
    }
    else
    {
        printf("Enter the position starting with 1\n");
        scanf("%d",&pos);
        if(pos==1)
        {
            deletebeg();
        }
        else if(pos==size)
        {
            deleteend();
        }
        else
        {
            temp=first;
            for(i=1;i<pos;i++)
            {
                temp4=temp;
                temp=temp->link;
            }
            temp4->link=temp->link;
            free(temp);
        }
    }
    menu();
}


void search()
{
    int sdata,flag=0;
    if(first==NULL)
    {
        printf("Empty List\n");
        return;
        
    }
    
    printf("Enter The Search Element\n");
    scanf("%d",&sdata);
    temp=first;
    
        for (; temp!=NULL ;)
        {
            temp=temp->link;
            if(temp->data==sdata)
            {
                printf("Found at %d\n",i+1);
                flag=1;
            }
        }
    if(flag==0)
    printf("Not Found\n");
    menu();
}


void print()
{
    if(first==NULL)
    {
        printf("Empty List\n");
    }
    else
    {
        temp=first;
        while(temp!=NULL)
        {
            printf("%d \t %u-->",temp->data,temp->link);
            temp=temp->link;
        }
    }   
    menu();
}

altstackodd()
{
    ll *temp2;
    temp=first;
    while(temp!=NULL)
    {
        top++;
        stack1[top]=temp->data;
        temp2=temp->link;
        temp=temp2->link;
    }
    for(j=0;j<=top;j++)
    {
        printf("%d\n",stack1[j]);
    }
    menu();
}

altstackeven()
{
    top=-1;
    ll *temp2;
    temp=first;
    while(temp!=NULL)
    {
        top++;
        temp2=temp->link;
        
        stack2[top]=temp2->data;
        temp=temp2->link;
    }
    for(j=0;j<=top;j++)
    {
        printf("%d\n",stack2[j]);
    }
    menu();
}



