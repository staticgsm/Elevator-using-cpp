#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 999
#include <time.h>

int main()
{
int c,x;
do{
clrscr();

cout << "*+*+*+*+*+*+*+*+*+*+*+*+*+**+*+*+*+*+*+*+*+*+*+*"<<endl;
cout << "         ELEVATOR PROBLEM USING QUEUE"<<endl;
cout << "*+*+*+*+*+*+*+*+*+*+*+*+*+**+*+*+*+*+*+*+*+*+*+*"<<endl<<endl;


int floors = 0;
//Keep track of current floor
int CurrentFloor;
//to end all loops
x=0;
int req_time;
//total number of floors
cout << "Total Number of Floors: ";
cin >> floors;

//cout << "Lift Resting at Floor No.: ";
//cin >> CurrentFloor;
randomize();
CurrentFloor=random(floors);
cout << "Total time required for travel floors (in Seconds): ";
cin >> req_time;

int i=0;
int nextFloor=0;
int call=0;
int rear = 0;
int front=0;
int temp=0;
int ttime = 0;
int calls[MAX]; //que

//Simulate people calling elevator
cout<<"Total number of calls: ";
cin>>call;

if(call>0)
calls[front]=CurrentFloor;

/*cout<<"call sequence"<<endl;
for (i=0;i<call;i++)
{
cin>>calls[i];
}
*/
for(i=0;i<call;i++)
{
calls[rear++]= random(floors);
}
cout << endl <<"Floors has been qued!" << endl;
cout<< "Lift at: "<< CurrentFloor;
for (i=0;i<rear;i++)
cout<<" >> " << calls[i];

for (i=front;i<rear;i++)
{if(call==1)
nextFloor=calls[front];
else
nextFloor=calls[front];
temp= req_time * (nextFloor-CurrentFloor);
if(temp<0)
temp = temp * -1;
ttime = ttime + temp;
front++;
CurrentFloor=calls[i];
}
if(front==rear)
cout << endl << "Total Time: "<<ttime <<" Seconds";
else
cout<< "something went wrong";
c=1;
cout << endl <<"press any key to exit.... OR 0 to repeat" << endl;
cin >> c;
}while(c==0);
return x;
}
