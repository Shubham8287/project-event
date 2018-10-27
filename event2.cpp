#include<iostream>
#include<conio.h>
#include<utility>
#include<string.h>
#include<time.h>
#include<cstdlib>
#include<fstream>
using namespace std;

class event
	{
	public:
		
		int ac_room,room;
		pair <char[20],int> ac_name[3],non_ac[2];
		
	event()
	{ac_room=0;
		room=0;		
		strcpy(ac_name[0].first,"A01");
		strcpy(ac_name[1].first,"A02");
		strcpy(ac_name[2].first,"A03");
		strcpy(non_ac[0].first,"R01");
		strcpy(non_ac[1].first,"R02");	
	
	}
		
	}a[7];
	
int menu();
void cancel()
{
system("CLS");
	int day;
	cout<<endl<<"                     Which day you want to choose ";
	cout<<endl<<endl<<"                1. Monday";
	cout<<endl<<"                2.Tuesday";
	cout<<endl<<"                3.Wednesday";
	cout<<endl<<"                4.Thursday";
	cout<<endl<<"                5.Friday";
	cout<<endl<<"                6.Saturday";
	cout<<endl<<"                7.Sunday";
	cout<<endl<<"                8.Menu";
	cout<<endl<<" enter your choice - ";
	cin>>day;
	if(day>0&&day<8)
	{
	day--;
	system("CLS");
	 cout<<endl<<endl<<"                      Which room you like to cancel";
	cout<<endl<<"                              1. AC room";
	cout<<endl<<"                              2. Non AC room";
		int k;cout<<endl;
		cin>>k;
		 
		
		if(k==1)
		{
			if(a[day].ac_room>0)
		{int p,key;
		system("CLS");
		cout<<endl<<endl<<"             Which AC room you want to cancel";
			cout<<endl<<endl<<"                        1. A01";
			cout<<endl<<"                        2. A02";
			cout<<endl<<"                        3. A03";
			cout<<endl;
			cin>>p;
			p--;
			
			if(a[day].ac_name[p].second!=0) 
			{again:
			cout<<endl<<" enter security key to cancel room No. "<<a[day].ac_name[p].first<<endl;
			cout<<"                       ";cin>>key;
			if(key==a[day].ac_name[p].second||key==1111)
			{system("CLS");
			a[day].ac_name[p].second=0;	
			a[day].ac_room--;
			cout<<endl<<endl<<"                              AC room cancelled Successfully";
			getch();
		}else 
		{cout<<endl<<"Entered wrong key, press 1. to try again :- ";
		cout<<endl<<"Any other key for Menu :-"<<endl;
		int h;
		cin>>h;
		if(h==1)
		{system("CLS");
		goto again;}
		
		}
		}else
		{system("CLS");
		cout<<endl<<endl<<"                      This room is not booked yet";
		getch();
	}
			
			
			}
			else
			{system("CLS");
			cout<<endl<<endl<<"                   There is no pre booked AC room";
			getch();
		}
		}
	
		
		if(k==2)
		{
			if(a[day].room>0)
			{int p,key;
			system("CLS");
			cout<<endl<<endl<<"                       Which room you want to cancel";
			cout<<endl<<endl<<"                                         1. R01";
			cout<<endl<<"                                         2. R02"<<endl;
			cin>>p;
			p--;
			if(a[day].non_ac[p].second!=0) 
			{pagain:
			cout<<endl<<" enter security key to cancel room "<<a[day].non_ac[p].first<<endl;
			cout<<"                ";cin>>key;
			if(key==a[day].non_ac[p].second||key==1111)
			{system("CLS");
			
			a[day].non_ac[p].second=0;	
			a[day].room--;
			cout<<endl<<"                       Non AC room cancelled Successfully";
			getch();
		}else
		{
		cout<<endl<<"Entered wrong key press 1. to try again"<<endl;
		cout<<endl<<"Any other key for Menu :- "<<endl;
		int h;
		cin>>h;
		if(h==1)
		{system("CLS");
		goto pagain;	
		}}
		}else
		{system("CLS");
		cout<<endl<<"                   This room is not booked yet";
		getch();
	}
		}
		else
		{system("CLS");
		cout<<endl<<"                   There is no prebooked room yet";
		getch();
		}
	
}
}
}






void bookroom()
{system("CLS");
	srand(time(0));
	int day;
	cout<<endl<<"                     Which day you want to choose ";
	cout<<endl<<endl<<"                1.Monday";
	cout<<endl<<"                2.Tuesday";
	cout<<endl<<"                3.Wednesday";
	cout<<endl<<"                4.Thursday";
	cout<<endl<<"                5.Friday";
	cout<<endl<<"                6.Saturday";
	cout<<endl<<"                7.Sunday";
	cout<<endl<<"                8.Menu";
	cout<<endl<<" enter your choice - ";
	cin>>day;
	if(day>0&&day<8)
	{day--;
	system("CLS");
	if(a[day].ac_room<3)
	{int i=0;
	for(i=0;i<3;i++)
	
	if(a[day].ac_name[i].second==0)
	{
	a[day].ac_name[i].second=rand()%10000+1000;
	cout<<endl<<"                          AC room no. "<<a[day].ac_name[i].first<<" Booked successfully"<<endl;
		cout<<endl<<"                        Security Key for your room is - "<<a[day].ac_name[i].second;
	a[day].ac_room++;
	getch();
	break;}
}
	else
	{int flag=2;
		cout<<endl<<endl<<"                         All AC rooms are booked on this same day";
	
	cout<<endl<<endl<<"Enter 1 to book Non AC room and 2 to select another day :- ";
	cin>>flag;
	if(flag==1)
	{
		if(a[day].room<2)
		{system("CLS");
		for(int i=0;i<2;i++)
		if(a[day].non_ac[i].second==0)
		{
		a[day].non_ac[i].second=rand()%10000+1000;
		cout<<endl<<endl<<"                      Non AC room no. "<<a[day].non_ac[i].first<<" Booked successfully";
		cout<<endl<<endl<<"                         Security Key for your room is - "<<a[day].non_ac[i].second;
		a[day].room++;
		getch();
		break;
	}
		
		}else
		
		{system("CLS");
		cout<<endl<<endl<<"                         All non ac rooms are also booked press 2 to select another day :- ";
		cin>>flag;
		}

	
	}
	
	if(flag==2)
	bookroom();
	
	}
	
}
}
int menu()
{
system("CLS");
	int ch;
	cout<<endl<<endl<<endl;
	cout<<"***************************** ROOM BOOKING CENTER********************";
	cout<<endl<<endl;
	cout<<"                1. BOOK ROOM"<<endl;
	cout<<"                2. CANCEL ROOM"<<endl;
	cout<<"                3. Show Avalability"<<endl;
	cout<<"                4. EXIT"<<endl<<endl;
	cout<<"enter your choice :- ";

cin>>ch;
return ch;	
}


void show()
{system("CLS");
cout<<endl<<endl<<"       Avalable rooms of :- ";
	for(int i=0;i<7;i++)
	{	
		if(i==0)
		cout<<endl<<endl<<"                         MONDAY";
		if(i==1)
		cout<<endl<<endl<<"                         TUESDAY";
		if(i==2)
		cout<<endl<<endl<<"                         WEDNESDAY";
		if(i==3)
		cout<<endl<<endl<<"                         THURSDAY";
		if(i==4)
		cout<<endl<<endl<<"                         FRIDAY";
		if(i==5)
		cout<<endl<<endl<<"                         SATURDAY";
		if(i==6)
		cout<<endl<<endl<<"                         SUNDAY";
		
		for(int j=0;j<3;j++)
		{cout<<endl<<"                 "<<a[i].ac_name[j].first;
		if(a[i].ac_name[j].second==0)
		{cout<<"   -     Available";
		}
		else
		{cout<<"   -     Booked";
		}
		}
		
			for(int j=0;j<2;j++)
		{cout<<endl<<"                 "<<a[i].non_ac[j].first;
		if(a[i].non_ac[j].second==0)
		{cout<<"   -     Available";
		}
		else
		{cout<<"   -     Booked";
		}
		}
	}
	
	
	cout<<endl<<"press any key to go back to MENU :- ";
	getch();
	
	
	
}

int main()
{
ifstream obj("data.txt");
for(int k=0;k<6;k++)
obj.read((char*)&a[k],sizeof(a[k]));
obj.close();
while(1)
	{int x;
	x=menu();
		
	if(x==4)
	{ofstream obj("data.txt");
for(int k=0;k<6;k++)
obj.write((char*)&a[k],sizeof(a [k]));
obj.close();
		break;
		
	}
	else
	if(x==1)
	bookroom();
	else
	if(x==2)
	cancel();
	
	if(x==3)
	show();
	
	}

} 
