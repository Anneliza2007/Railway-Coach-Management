#include<stdio.h>
# define MAX 10
#include<stdlib.h>
int train[MAX];
int front=-1;
int rear=-1;

void insertf(int x){
    if((front==0 && rear == MAX-1)||(front== rear+1)) {
        printf("train is full\n");
    } else {
        if(front ==-1){
            rear = front =0;
        }
        else if(front ==0){
            front = MAX-1;
        }
        else{
            front--;
        
        }
    train[front] = x;
    }
}
void insertr(int x){
    if((front==0 && rear == MAX-1) || (front== rear+1)){
        printf("train is full\n");
    } else {
        
        if(front ==-1){
            rear = front =0;
        }
        else if(rear == MAX-1){
            rear = 0;
        }
        else{
            rear++;
        
        }
        train[rear] = x;
    }    
}
void deletef(){
    if(front==-1){
        printf("train is empty");
    }
    else{
        printf("removed %d\n",train[front]);
        if(front==rear){
            front=rear=-1;
        }
        else if(front==MAX-1){
            front =0;
        }else 
        front++;
    
    }
}
void deleter(){
    if(front==-1){
        printf("train is empty");
    }
    else{
        printf("removed %d\n",train[rear]);
        if(front==rear){
            front=rear=-1;
        }
        else if(rear==0){
            rear =MAX-1;
        }else 
        rear--;
    
    }
}
void display()
{
    if(front == -1)
    {
        printf("Train is empty\n");
        return;
    }

    int i = front;

    while(1)
    {
        printf("%d ", train[i]);

        if(i == rear)
            break;

        i = (i + 1) % MAX;
    }

    printf("\n");

}
int main(){
    int choice,x;
    while(1){
        printf("1.insert front\n2.insert rear\n3.delete front\n4.delete rear\n5.display\n6.exit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("enter the value to be inserted\n");
                scanf("%d",&x);
                insertf(x);
                break;
            case 2:
                printf("enter the value to be inserted\n");
                scanf("%d",&x);
                insertr(x);
                break;
            case 3:
                deletef();
                break;
            case 4:
                deleter();
                break;
            case 5:
                display();
                break;
            case 6:
                return 0;
            default:
                printf("invalid choice\n");
        }
    }
    return 0;    
}