#include<iostream>
using namespace std;
int stack[100], top=-1;
void push(int value)
{
    if(top>100)
    {
        cout<<"SORRY!! stack is full\n";
    }
    else

        top++;
        stack[top]=value;
}

void pop()
{
    if(top<=-1)
        cout<<"SORRY!! stack is empty\n";
    else
    {

    cout<<"popped value:"<< stack[top];
    top--;
    }
}

void check()
{
    if(top==-1)
        cout<<"SORRY!! stack is empty\n";
    else if(top>=100)
        cout<<"SORRY!! stack is full\n";
    else
        cout<<stack[top];
}

void isEmpty()
{
    if(top<=-1)
        cout<<"stack is empty\n";
    else
        cout<<"SORRY!! stack is not empty\n";

}

void isFull()
{
    if(top>=100)
        cout<<"stack is full\n";
    else
        cout<<"SORRY!! stack is not full\n";
}

void show()
{
    int x, i;
    x=top;
    if(x<=-1)
    {
        cout<<"SORRY!! stack is empty\n";
    }
    cout<< "stack:\n";
    for(i=top; i>-1; i--)
    {

        if(stack[i]-10>=0 && stack[i]-99<=0)
        {cout<<"| "<<stack[i]<<"|\n";
        cout<<"|___|\n";
        }
        else if(stack[i]-100>=0 )
        {cout<<"|"<<stack[i]<<"|\n";
        cout<<"|___|\n";
        }
        else
            {cout<<"|  "<< stack[i]<<"|\n";
        cout<<"|___|\n";}
        }
}





int main()
{
    int a;
    do
        {
    int   b, c;
    cout<<"\n\n________________\n|(1)push       |\n|(2)pop        |\n|(3)check top  |\n|(4)is Empty   |\n|(5)is Full    |\n|(6)show stack |\n|(7)exit       |\n|______________|\nenter choice:";
    cin>>a;
    switch(a)
    {

    case 1:
        cout<<"enter value to push:";
        cin>>b;
        push(b);

        break;

    case 2:
        pop();

        break;

    case 3:
        check();

        break;


   case 4:
       isEmpty();

        break;

    case 5:
        isFull();

        break;

    case 6:
        show();

        break;

   case 7:
       cout<<"Thank u. Closed Successfully :)\n";
       break;

    default:
        cout<<"Error :(\n";

        break;
    }

    }while( a!=7);
    return 0;
}
