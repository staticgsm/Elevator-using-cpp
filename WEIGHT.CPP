#include <iostream>
#include <conio.h>
#include <stdlib.h>
#define MAX 999
#include <time.h>

int main()
{
int c,x;
do{
//clrscr();

std::cout << "*+*+*+*+*+*+*+*+*+*+*+*+*+**+*+*+*+*+*+*+*+*+*+*"<<endl;
cout << "   ELEVATOR PROBLEM WITH WEIGHT USING QUEUE"<<endl;
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

a: cout << "Lift Resting at Floor No.: ";
cin >> CurrentFloor;
if(CurrentFloor>floors)
{
cout<<"Enter correct floor"<<endl;
goto a;
}
randomize();
//CurrentFloor=random(floors);
cout << "Total time required for travel floors (in Seconds): ";
cin >> req_time;

int i=0;
int nextFloor=0;
int call=0;
int rear = 0;
int front=0;
int front1=0;
int rear1=0;
int rear2=0;
int front2=0;
int temp=0;
int ttime = 0;
int w=0;
int f=0;
int wt=0;
int calls[MAX]; //que
int weight[MAX]; //que
int rweight[MAX]; //que


//Simulate people calling elevator
cout<<"Total number of calls: ";
cin>>call;

cout<<"Max. People Allowed in Lift: ";
cin>>w;

if(call>0)
{calls[front]=CurrentFloor;
f=CurrentFloor;
}
/*cout<<"weight sequence"<<endl;
for (i=rear1;i<call;i++)
{
cin>>weight[i];
rear1++;
}
*/
for(i=0;i<call;i++)
{
calls[rear++]= random(floors);
weight[rear1++]= random(floors+4);
rweight[rear2++]= random(floors+5);
}
if(weight[front]>w)
weight[front]=w;
cout << endl <<"Floors has been qued! Processing Requests. . . ." << endl;
cout<< "Lift at: "<< CurrentFloor << " With " <<weight[front] << " Persons"<< endl;
for (i=0;i<rear;i++)
cout<<" >> " << calls[i];
cout<<endl<< "Persons on Each Floor";
for (i=0;i<rear1;i++)
cout<<" >> " << weight[i];
rweight[0]=0;
cout<<endl<< "Persons Will Leave The Lift on Each Floor";
for (i=0;i<rear1;i++)
cout<<" >> " << rweight[i];
i=front;
wt=weight[front];
while(i<rear)
{
	if(call==1)
		nextFloor=calls[front];
	else
		nextFloor=calls[front];

	wt = wt - rweight[front2];
	front2++;
	wt = wt + weight[front1];
	if(wt>w)
	{
	weight[front1]=wt-w;
	wt=wt - weight[front1];
	call++;
	calls[rear++]=nextFloor;
	weight[rear1++]=weight[front1];
	rweight[rear2++]=random(w);
	front1++;
	}
	else
	{

	weight[i]=0;
	front1++;
	if(wt<0)
	wt=0;
	}

	temp= req_time * (nextFloor-CurrentFloor);
	if(temp<0)
		temp = temp * -1;
	ttime = ttime + temp;
	cout<<endl<<"Floor: "<<calls[i]<<" Current Weight: "<<wt<< " Time: "<<ttime<<" Person left: "<<weight[i];
	front++;
	CurrentFloor=calls[i];
	i++;
}
cout<<endl<<endl<<"===============================================";
if(front==rear)
{
cout<< endl <<"Floor Sequence: "<< f;
for (i=0;i<rear;i++)
cout<<" >> " << calls[i];
cout << endl << endl << "Total Time: "<<ttime <<" Seconds \tRemaining Persons in lift: " <<wt << endl <<"Total No. Calls Processed: "<<call;
}
else
	cout<< endl <<"something went wrong";
	cout<< endl <<"===============================================";
	c=1;
	cout << endl <<"press any key	 to exit.... OR 0 to repeat" << endl;
	cin >> c;
}while(c==0);
return x;
}
