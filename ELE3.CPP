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
cout << "         ELEVATOR PROBLEM USING MATRIX"<<endl;
cout << "*+*+*+*+*+*+*+*+*+*+*+*+*+**+*+*+*+*+*+*+*+*+*+*"<<endl << endl;


int floors = 0;
//Keep track of current floor
int CurrentFloor=0;

//to end all loops
x=0;

int req_time;
//total number of floors
cout << "Total Number of Floors: ";
cin >> floors;

cout << "Lift Resting at Floor No.: ";
cin >> CurrentFloor;
randomize();
//CurrentFloor=random(floors);
cout << "Total time required for travel floors (in Seconds): ";
cin >> req_time;

int i, nextFloor, call = 0;
int temp,ttime = 0;
int calls[MAX];

//Simulate people calling elevator
cout<<"Total number of calls: ";
cin>>call;

/*cout<<"call sequence"<<endl;
for (i=0;i<call;i++)
{
cin>>calls[i];
}
*/
for(i=0;i<call;i++)
{
calls[i]= random(floors);
}
cout << endl <<"Floors has been qued!" << endl;
cout<< "Lift at: "<< CurrentFloor;
for (i=0;i<call;i++)
cout<<" >> " << calls[i];

for (i=0;i<call;i++)
{if(call==1)
nextFloor=calls[0];
else
nextFloor=calls[i];

temp= req_time * (nextFloor-CurrentFloor);

if(temp<0)
temp = temp * -1;
ttime = ttime + temp;

CurrentFloor=calls[i];
}
cout << endl << "Total Time: "<<ttime <<" Seconds";

c=1;
cout << endl <<"press any key to exit.... OR 0 to repeat" << endl;
cin >> c;
}while(c==0);
return x;
}
