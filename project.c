#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
char data[10][15];
int count=0;

int input (int s,int e); 
void move(){
    printf("input any number to move on:\n");
    int x;
    scanf("%d",&x);
}
void ma (void){
    printf(" ---welcome ---\n1- Admin \n2- Student\n3- exit\n");

}
void Add(){
    system("cls");
    char x[15];
    printf("enter first name: ");
    scanf("%s",&data[count]);
    printf("enter second name:");
    scanf("%s",&x);
    strcat(data[count],x);
    count++;

}
void view(){
    system("cls");
    printf("num.\t\t name\n");
    if(count==0){
        printf("there isn't any recorded student\n");
    }
    for(int i=0;i<count;i++)
    {
        printf("%d \t\t%s\n",i+1,data[i]);
    }
    move();
}
void update(){
    system("cls");
    printf("======UPDATE student======\n");
    char s[20];
    char x[20];
    if(count>0){
        int u=input(0,count);
        printf("enter first name: ");
        scanf("%s",&s);
        printf("enter second name:");
        scanf("%s",&x);
        strcpy(data[u-1],strcat(s,x));
    }
    else{
        printf("there isn't ant recorded student to update\n");
        move();
    }
}
void del(){
    system("cls");
    printf("======DELETE student======\n");
    if(count>0){
    int x=input(0,count);
    strcpy(data[x]," ");
    for(int i=x;i<=count;i++)
    {
        strcpy(data[i],data[i+1]);
    }
    count--;
    }
    else{
        printf("there isn't any recorded student to remone\n");
        move();
    }
}
int input (int s,int e){ 
    int x;
    do{
    printf("enter the number\n");
    scanf("%d",&x);
    }while(x<s||x>e);
    return x;
}
void admin(void){
    int m=0;
    while(m==0){
    system("cls");
    printf("---Admin panel---\n1- Add student Record \n2- View Student Record \n3- Update Student Record \n4- Delete Student Record \n5- Main Menu \n6- Exit\n");

    switch (input(1,6))
    {
    case 1:
        Add();
        break;
    
    case 2:
        view();
        break;
    case 3:
        update();
        break;
    case 4:
        del();
        break;
    case 5:
        m++;
        break;
    case 6:
        exit(0);
        break;
    
    }
    }
}
int student(){
    system("cls");
    printf("--- student ---\n welcome As Student\n\n\n1- back to main menu\n2- Exit\n");
    switch (input(1,2))
    {
    case 1:
        
        break;
    
    case 2:
        exit(0);
        break;
    }

}

int main(){

    while(1)
    {
        system("clear");
        ma(); 
        
        switch (input(1,3))
        {
        case 1:
            admin();
            break;
        
        case 2:
            student();
            break;
        
        case 3:
            exit(0);
            break;
        
        default:
            break;
        }

    }

}