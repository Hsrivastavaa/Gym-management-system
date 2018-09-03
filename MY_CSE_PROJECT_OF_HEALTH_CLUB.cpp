#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<fstream>
#include<math.h>
#include<ctype.h>
#include<windows.h>
using namespace std;
class infogym
{
	public:
		void putinfo1()
		{
			cout<<endl<<endl<<endl<<endl<<endl<<'\t'<<"1 :   Information About Health club"<<endl;
		//	cout<<'\t'<<"2 :   Health Club Records"<<endl;
			cout<<'\t'<<"3 :   New registration to club"<<endl;
			cout<<'\t'<<"4 :   Log In"<<endl;
			cout<<'\t'<<"5 :   Help"<<endl;
			cout<<'\t'<<"6 :   Log out"<<endl;
			cout<<'\t'<<"7 :   Exit"<<endl;
			
		}
		void putinfo2()
		{
			cout<<endl<<endl<<endl<<endl<<'\t'<<"1 :  Equipment available "<<endl;
			cout<<'\t'<<"2 :  Facilities available"<<endl;
			cout<<'\t'<<"3 :  About Health club "<<endl;
			cout<<'\t'<<"4 :  Return to main menu "<<endl;
			cout<<'\t'<<"5 :  Log out"<<endl;
			cout<<'\t'<<"6 :  Exit "<<endl;
			cout<<endl<<endl;
		}
		void putinfo3()
		{
			cout<<"\n\n\n\n\t1 :- Customer Login"<<endl;
				cout<<"\t"<<"2 :- Trainers Login"<<endl;
				cout<<"\t"<<"3 :- Forget Password"<<endl;
				cout<<"\t"<<"4 :- Return to main menu"<<endl;
		}
		void putinfo4()
		{
			cout<<"\n\n\t1 :- Back to login page"<<endl;
			cout<<"\t2 :-Return to main menu"<<endl;
		}
}obj1;

int main()

{   
    system("title Harsh");
	//system("help");
	system("color 02");
	int k=0;
	A : cout<<"\n\n\n\n\n\n\t"<<"Enter Username  :-"<<endl;
	printf("\t ");
	E : fstream file3;
	fstream file4;
	file3.open("username.txt",ios::out);
	char username[50];
	cin>>ws;
	gets(username);
	file3<<username;
	file3.close();
	
	file3.open("username.txt",ios::in);
	file3.seekg(0,ios::end);
	int l=file3.tellg();
	file3.close();
	file4.open("origusername.txt",ios::in);
	file4.seekg(0,ios::end);
	int m=file4.tellg();
	file4.close();
	if(l==m)
	{
	file3.open("username.txt",ios::in);
	file4.open("origusername.txt",ios::in);
	char c,d;
	int i=0;
	while(file3&&file4)
	{
		file3>>c;
		file4>>d;
		if(c==d)
		{
			i++;
		}
		
	}
	file3.close();
	file4.close();
	if(i==l+1||i==m+1)
	{
		B : cout<<"\n\n\t"<<"Enter Password :-"<<endl;
		printf("\t ");
		fstream file1;
	fstream file2;
	file1.open("Password.txt",ios::out);
	string pass;
	char ch;
	ch=_getch();
	while(ch!=13)
	{
		pass.push_back(ch);
		cout<<"¤";
		Beep(5000,30);//(frequency,delay in milli second);
		ch=_getch();
	}
	
	file1<<pass;
	file1.close();
	
	file1.open("Password.txt",ios::in);
	file1.seekg(0,ios::end);
	int n=file1.tellg();
	file1.close();
	file2.open("origpassword.txt",ios::in);
	file2.seekg(0,ios::end);
	int o=file2.tellg();
	file2.close();
	if(n==o)
	{
	file1.open("Password.txt",ios::in);
	file2.open("origpassword.txt",ios::in);
	char e,f;
	int j=0;
	while(file1&&file2)
	{
		file1>>e;
		file2>>f;
		if(e==f)
		{
			j++;
		}
		
	}
	file1.close();
	file2.close();
	if(j==n+1||j==o+1)
	{
		cout<<"\n\n\t\t\t"<<"You Are Sucessfully logged in";
		getch();
		system("cls");
		int a1;
		for(a1=5;a1>=1;a1--)
		{
			cout<<"\n\n\n\t  Taking you to our server page in "<<a1<<" seconds....\n";
			Sleep(1000);
			Beep(5000,50);
			system("cls");
			//getch
			
			
		}
		
		
		system("cls");
			int n1,n2,n3,n4,n5;
			cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
	cout<<"++++++++++++++++++++++++++++++++++++++++\n";
	Beep(5000,50);
	Sleep(500);
	
	cout<<"\t\t\t                                      +++++++++++++++++++++++++++++++++++++++++++++";
	Beep(5000,50);
	Sleep(500);
	cout<<"\n\t\t\t                                      +++++++++++++++++++++++++++++++++++++++++++++";
	Beep(5000,50);
	Sleep(500);
	cout<<"\n\t\t\t                                      ++                   SPARX                 ++";
	Beep(5000,50);
	Sleep(500);
	cout<<"\n\t\t\t                                      ++                 HEALTH CLUB             ++";
	Beep(5000,50);
	Sleep(500);
	cout<<"\n\t\t\t                                      ++                  INSTITUTE              ++";
	Beep(5000,50);
	Sleep(500);
	cout<<"\n\t\t\t                                      ++                                         ++";
	Beep(5000,50);
	Sleep(500);
	cout<<"\n\t\t\t                                      +++++++++++++++++++++++++++++++++++++++++++++";
	Beep(5000,50);
	Sleep(500);
	cout<<"\n\t\t\t                                      +++++++++++++++++++++++++++++++++++++++++++++";
	Beep(5000,50);
	Sleep(500);
	
	
	printf("\n");
	Beep(5000,50);
	
	cout<< "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*********************************************\n";
	Sleep( 500 );
	Beep(5000,50);
	cout<<"\t\t\t\t\t\t\t\t**\t\t WELCOME\t\t   **\t\t\t\t\t\n";
	Beep(5000,50);
	cout<<"\t\t\t\t\t\t\t\t**\t\t\t\t           **\n";
	Beep(5000,50);
    Sleep( 500 );
	cout<<"\t\t\t\t\t\t\t\t**\t\t   TO   \t\t   **\n";
	Beep(5000,50);
	cout<<"\t\t\t\t\t\t\t\t**\t\t\t\t\t   **\n";
	Beep(5000,50);
	Sleep( 500 );
	cout<<"\t\t\t\t\t\t\t\t**\t\tMY PROJECT \t\t   **\n";
	Beep(5000,50);
	cout<<"\t\t\t\t\t\t\t\t**\t\t\t\t\t   **\n";
	Beep(5000,50);
	Sleep( 500 );
	cout<<"\t\t\t\t\t\t\t\t**\t         OF HEALTH\t\t   **\n";
	Beep(5000,50);
	cout<<"\t\t\t\t\t\t\t\t**\t\t\t\t\t   **\n";
	Beep(5000,50);
	Sleep( 500 );
	cout<<"\t\t\t\t\t\t\t\t**\t\t  CLUB  \t\t   **\n";
	Beep(5000,50);
	cout<<"\t\t\t\t\t\t\t\t**\t\t\t\t\t   **\n";
	Beep(5000,50);
	Sleep( 500 );
	cout<<"\t\t\t\t\t\t\t\t**\t       MANAGEMENT \t           **\n";
	Beep(5000,50);
	cout<<"\t\t\t\t\t\t\t\t**\t\t\t\t\t   **\n";
	Beep(5000,50);
	cout<<"\t\t\t\t\t\t\t\t*********************************************\n";
	Beep(5000,50);
	
	getch();
	system("cls");
   C :	obj1.putinfo1();
	printf("\n\n\n\t Enter Your Choice  :-  ");
	cin>>n1;
	switch(n1)
	{
		case 1:
			system("cls");
			D : obj1.putinfo2();
			printf("\n\n\n\t Enter Your Choice  :-  ");
			cin>>n2;
			switch(n2)
			{
				case 1:
					system("cls");
					cout<<"\n\n\n\tDifferent Equipments available are :-\n";
					cout<<"\t1 :- Weightlifter\n";
					cout<<"\t2 :- Track wheel\n";
					cout<<"\t3 :- Protein shakers\n ";
					cout<<"\t4 :- Dumbled\n";
					cout<<"\t5 :- Stretching Machine\n ";
					cout<<"\t     And many more\n";
						cout<<"\n\n\tPress enter to go back";
					getch();
					system("cls");
					goto D;
					break;
					case 2:
						system("cls");
						cout<<"\n\n\n\t Facilities Are :-\n";
						cout<<"\t1 :- Personal trainers \n";
						cout<<"\t2 :- Well experienced trainers  \n";
						cout<<"\t3 :- Residential stay facility\n";
						cout<<"\t4 :- Air conditioned atmosphere\n";
						cout<<"\t     And many more";
						cout<<"\n\n\tPress enter to go back";
					getch();
					system("cls");
					goto D;
					break;
				case 3:
					system("cls");
					cout<<"\n\n\n\tThis gym was opened in 1997 by the Great businessman Nirav Modi\n" ;
					cout<<"\tFor the help of people to keep them fit and at present time it is running\n";
					cout<<"\tat a very good stage and this health club is having a good reputation in the \n";
					cout<<"\tsociety\n";
				cout<<"\n\n\tDifferent packs available are :-\n";
						cout<<"\t1 :- 500 Rs monthly for 3 hours daily\n";
						cout<<"\n\t2 :- 1000 Rs monthly for 6 hours daily\n";
						cout<<"\n\t3 :- 5000 Rs monthly for 3 hours daily with personal trainer\n";
						cout<<"\n\t4 :- 2000 Rs monthly for 6 hours daily with personal trainer\n";
						cout<<"\t 5 :- 20000 Rs for one year membership\n";
					    cout<<"\n\n\tPress enter to go back";
					getch();
					system("cls");
					goto D;
				case 4:
					//getch();
					system("cls");
					goto C;
					break;
					case 5:
						cout<<"\n\n\n\tYou are successfully logged out";
				getch();
				system("cls");
				goto A;
				break;
					case 6:
						system("cls");
							printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\t\t\t\t\t\t\t\t\t  ++++++++++++++\n");
			printf("\t\t\t\t\t\t\t\t\t  + THANK YOU  +\n");
			printf("\t\t\t\t\t\t\t\t\t  +    FROM    +\n");
			printf("\t\t\t\t\t\t\t\t\t  + SPARX TEAM +\n");
			printf("\t\t\t\t\t\t\t\t\t  ++++++++++++++\n");
			cout<<"\n\n\n\n\n\n\n";
			
						exit(1);
						default:
							cout<<"\n\n\n\n\tYou have entered a wrong choice"<<endl;
					getch();
					system("cls");
					goto D;
							
					break;
			}
			//case 2:
				
			
			case 3:
				
				{
				
			M  : 	system("cls");
				fstream file5;
				fstream file6;
				fstream file7;
				fstream file8;
				fstream file9;
				string u,x,y,m;
				string s,r,t,z,z1;
				  string v= ".txt" ;
			    cout<<"\n\n\n\tEnter your username\n\t";
			    cin>>ws;
			    cin>>y;
			    
				cout<<"\tenter your name  :-\n\t";
				
				cin>>ws;
				cin>>ws;
				  getline(cin,u);
			   //cin>>u;
			   
				 cout<<"\n\tEnter your password :-\n\t";
				 cin>>ws;
				 cin>>m;
				r=y+v;
				t=y+"email"+v;
				
				z=y+"username"+v;
				z1=y+"password"+v;
				s=y+"all"+v;
				cout<<"\n\tEnter your emailid\n\t";
				getline(cin,x);
				cin>>x;
				file5.open(r.c_str(),ios::out);
				file7.open(t.c_str(),ios::out);
				
				file8.open(z.c_str(),ios::out);
				
				file6.open(z1.c_str(),ios::out);
				file9.open(s.c_str(),ios::out);
				
				
				file5<<u;
				
				file8<<y;
					file6<<m;
				file7<<x;
				file9<<"Name :-"<< u<<"\n"<<"Username :- "<<y<<"\n"<<"Password :- "<<m<<"\n"<<"Email id :- "<<x<<endl;
				
				
					file5.close();
				
                file8.close();
			
				file6.close();
				file7.close();
				
				
				file9.close();
				//file5.close();
				//cin>>ws;
			G :	cout<<"\n\n\n\t\tYou have succesfully registered";
				obj1.putinfo4();
				//	obj1.putinfo3();
				printf("\n\n\t Enter Your Choice  :-  ");
			cin>>n4;
			switch(n4)
			{
				case 1:
					system("cls");
					goto F;
					break;
					case 2:
						system("cls");
						goto C;
						break;
						default:
							cout<<"\n\n\n\n\tYou have entered a wrong choice"<<endl;
					getch();
					system("cls");
							goto G;
							//break;
			}
			//break;
			}
			
			case 4:
				{
					
				F : system("cls");
				obj1.putinfo3();
				
				printf("\n\n\n\t Enter Your Choice  :-  ");
			cin>>n3;
			switch(n3)
			
			{
				case  1:
				{
									system("cls");
									cout<<"\n\n\n\t\t"<<"Enter Username of club  :-";
					printf("\n\t");
					string a2,a3,a4,a5,a6;
					string v1=".txt";
				//	cin>>ws;
					cin>>ws;
					cin>>a2;
					
					a3=a2+"username"+v1;
					fstream file10;
					fstream file11;
					fstream file12;
					fstream file13;
					//fstream file14;
					file11.open(a3.c_str(),ios::in);
					if(file11==NULL)
					{
						cout<<"\n\tyou are not registered yet\n";
					
					N1 :	cout<<"\t1 :- To register yourself\n";
						cout<<"\t2 :- Return to main menu\n";
						cout<<"\t3 :- To exit\n";
							printf("\n\n\n\t Enter Your Choice  :-  ");
							int n7;
			cin>>n7;
			switch(n7)
			{
				case 1:
					system("cls");
					goto M;
					break;
					case 2:
						system("cls");
						goto C;
						case 3:
							system("cls");
						//system("cls");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\t\t\t\t\t\t\t\t\t  ++++++++++++++\n");
			printf("\t\t\t\t\t\t\t\t\t  + THANK YOU  +\n");
			printf("\t\t\t\t\t\t\t\t\t  +    FROM    +\n");
			printf("\t\t\t\t\t\t\t\t\t  + SPARX TEAM +\n");
			printf("\t\t\t\t\t\t\t\t\t  ++++++++++++++\n");
			cout<<"\n\n\n\n\n\n\n";
			
						exit(1);
						default:
							cout<<"\n\n\n\n\tYou have entered a wrong choice"<<endl;
					getch();
					system("cls");
					goto N1;
					break;
							
			}
			
						
						
							getch();
					}
					else
					{
					
							O : cout<<"\n\n\t"<<"Enter Password :-"<<endl;
		printf("\t ");
		fstream file12;
	fstream file13;
	
						a5=a2+"password check and confirm for client login"+v1;
		
		a6=a2+"password"+v1;
	file12.open(a5.c_str(),ios::out);
	string password;
	//gets(ch);
	char ch1;
	ch1=_getch();
	while(ch1!=13)
	{
		password.push_back(ch1);
		cout<<"*";
		Beep(5000,30);//(frequency,delay in milli second);
		ch1=_getch();
	}
	
	file12<<password;
	file12.close();
	
					
	file12.open(a5.c_str(),ios::in);
	file12.seekg(0,ios::end);
	int a8=file12.tellg();
	file12.close();
	file13.open(a6.c_str(),ios::in);
	file13.seekg(0,ios::end);
	int a9=file13.tellg();
	file13.close();
	if(a8==a9)
	{
	file12.open(a5.c_str(),ios::in);
	file13.open(a6.c_str(),ios::in);
	char e1,f1;
	int j1=0;
	while(file12&&file13)
	{
		file12>>e1;
		file13>>f1;
		if(e1==f1)
		{
			j1++;
		}
		
	}
	file12.close();
	file13.close();
	if(j1==a8+1||j1==a9+1)
	{
		cout<<"\n\n\t\t\t"<<"You Are Sucessfully logged in";
		getch();
			 	}
					
				
					
					else
	{   k++;
		cout<<"\n\n\n\t"<<"access denied";
		getch();
		if(k>=3)
		{
			cout<<"\n\n\n\t"<<"You have entered password three times wrong";
			cout<<"\n\tWait for ";//5 seconds";
			int s;
		
				for(s=5;s>=1;s--)
			{
				
				cout<<"\n\tWait for "<<s<<" seconds....";
					Sleep( 1000 );
					Beep(5000,50);
					system("cls");
			}
			getch();
			cout<<"\n\tpress enter";
			k=0;
			system("cls");
		goto O;
	
		}
		system("cls");
		goto O;
	}
}

else
{  k++;
	cout<<"\n\n\n\t"<<"not accepted"<<endl;
	getch();
	if(k>=3)
		{
			cout<<"\n\n\n\t"<<"You have entered password three times wrong";
			int r;
		
			for(r=5;r>=1;r--)
			{
				
				cout<<"\n\tWait for "<<r<<" seconds....";
					Sleep( 1000 );
					Beep(5000,50);
					system("cls");
			}
			
		
		
			getch();
			cout<<"\n\tpress enter";
			k=0;
			system("cls");
		goto O;
	}
	
		system("cls");
		goto O;
	
}
	break;
			//	}
			}
		}
		case 2:
			
				{
									system("cls");
									cout<<"\n\n\n\t\t"<<"Enter Trainers Username of  club  :-";
					printf("\n\t");
					string a7,a8,a9,a10,a11,a12;
					string v1=".txt";
				//	cin>>ws;
					cin>>ws;
					cin>>a7;
					
					a8=a7+"username"+v1;
					fstream file10;
					fstream file11;
					fstream file12;
					fstream file13;
					file11.open(a8.c_str(),ios::in);
					if(file11==NULL)
					{
						cout<<"\n\tyou are not registered yet\n";
					
					N2 :	cout<<"\t1 :- To register yourself\n";
						cout<<"\t2 :- Return to main menu\n";
						cout<<"\t3 :- To exit\n";
							printf("\n\n\n\t Enter Your Choice  :-  ");
							int n15;
			cin>>n15;
			switch(n15)
			{
				case 1:
					system("cls");
					goto M;
					break;
					case 2:
						system("cls");
						goto C;
						case 3:
							system("cls");
						//system("cls");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\t\t\t\t\t\t\t\t\t  ++++++++++++++\n");
			printf("\t\t\t\t\t\t\t\t\t  + THANK YOU  +\n");
			printf("\t\t\t\t\t\t\t\t\t  +    FROM    +\n");
			printf("\t\t\t\t\t\t\t\t\t  + SPARX TEAM +\n");
			printf("\t\t\t\t\t\t\t\t\t  ++++++++++++++\n");
			cout<<"\n\n\n\n\n\n\n";
			
						exit(1);
						default:
							cout<<"\n\n\n\n\tYou have entered a wrong choice"<<endl;
					getch();
					system("cls");
					goto N2;
					break;
							
			}
			
						
						
							getch();
					}
					else
					{
						O1 : cout<<"\n\n\t"<<"Enter Password :-"<<endl;
		printf("\t ");
		fstream file12;
	fstream file13;
	
						a10=a7+"password check and confirm for client login"+v1;
		
		a11=a7+"password"+v1;
	file12.open(a10.c_str(),ios::out);
	string password;
	//gets(ch);
	char ch1;
	ch1=_getch();
	while(ch1!=13)
	{
		password.push_back(ch1);
		cout<<"*";
		Beep(5000,30);//(frequency,delay in milli second);
		ch1=_getch();
	}
	
	file12<<password;
	file12.close();
	
					
	file12.open(a10.c_str(),ios::in);
	file12.seekg(0,ios::end);
	int a8=file12.tellg();
//	cout<<l<<endl;
	file12.close();
	file13.open(a11.c_str(),ios::in);
	file13.seekg(0,ios::end);
	int a9=file13.tellg();
//	cout<<m<<endl;
	file13.close();
	if(a8==a9)
	{
	file12.open(a10.c_str(),ios::in);
	file13.open(a11.c_str(),ios::in);
	char e1,f1;
	int j1=0;
	while(file12&&file13)
	{
		file12>>e1;
		file13>>f1;
		//cout<<c<<endl<<d<<endl;
		//int j=strcmp(d,c);
		if(e1==f1)
		{
			j1++;
		}
		
	}
	//cout<<i<<endl;
	file12.close();
	file13.close();
	if(j1==a8+1||j1==a9+1)
	{
		cout<<"\n\n\t\t\t"<<"You Are Sucessfully logged in";
		getch();
	a12=a7+"all"+v1;
					system("cls");
					fstream file16;
					file16.open(a12.c_str(),ios::in);
					char ch22;
					while(file16)
					{
						file16>>ch22;
						putchar(ch22);
						}
						file16.close();	
					}
					else
	{   k++;
		cout<<"\n\n\n\t"<<"access denied";
		getch();
		if(k>=3)
		{
			cout<<"\n\n\n\t"<<"You have entered password three times wrong";
			cout<<"\n\tWait for ";//5 seconds";
			int s;
		
				for(s=5;s>=1;s--)
			{
				
				cout<<"\n\tWait for "<<s<<" seconds....";
					Sleep( 1000 );
					Beep(5000,50);
					system("cls");
			}
			getch();
			cout<<"\n\tpress enter";
			k=0;
			system("cls");
		goto O1;
	
		}
		system("cls");
		goto O1;
	}
}

else
{  k++;
	cout<<"\n\n\n\t"<<"not accepted"<<endl;
	getch();
	if(k>=3)
		{
			cout<<"\n\n\n\t"<<"You have entered password three times wrong";
			int r;
			
			for(r=5;r>=1;r--)
			{
				
				cout<<"\n\tWait for "<<r<<" seconds....";
					Sleep( 1000 );
					Beep(5000,50);
					system("cls");
			}
			
		
		
			getch();
			cout<<"\n\tpress enter";
			k=0;
			system("cls");
		goto O1;
	}
	
		system("cls");
		goto O1;
	
}

					break;
			
			}
		}
		
			case 3:
				{
					system("cls");
					cout<<"\n\n\n\tEnter your email id";
					string c1,c2,c3,c4;
					string v5=".txt";
					cin>>ws;
					cin>>c1;
					cout<<"\n\tEnter your username";
					cin>>ws;
					cin>>c3;
					
					c2=c3+"passoword"+v5;
					fstream file17;
					file17.open(c2.c_str(),ios::in);
					char ch23;
					cout<<"your password is :- ";
					while(file17)
					{
						file17>>ch23;
						putchar(ch23);
					}
					file17.close();
					break;
					
				}
				case 4:
					{
					system("cls");
					goto C;
					break;
					default :
					cout<<"\n\n\n\n\tYou have entered a wrong choice"<<endl;
					getch();
					system("cls");
					goto F;
						
					break;
			}
		}
		break;
		case 5:
			system("cls");
		H :	cout<<"\n\n\n\t1 :- Know About history of gym\n";
		
			cout<<"\t2 :- Know about diffrent monthly packs of Gym";
			
			cout<<"\n\t3 :- Know about timings of gym \n";
			
			cout<<"\t4 :- Return to main menu\n";
			int n6;
			printf("\n\n\n\t Enter Your Choice  :-  ");
			cin>>n6;
			switch(n6)
			{
				case 1:
					system("cls");
					cout<<"\n\n\n\tThis gym was opened in 1997 by the Great businessman Nirav Modi\n" ;
					
					cout<<"\tFor the help of people to keep them fit and at present time it is running\n";
					
					cout<<"\tat a very good stage and this health club is having a good reputation in the \n";
					
					cout<<"\tsociety";
					
					cout<<"\n\n\tPress enter to go back";
					getch();
					system("cls");
					goto H;
					break;
					case 2:
						system("cls");
						cout<<"\n\n\tDifferent packs available are :-\n";
						
						cout<<"\t1 :- 500 Rs monthly for 3 hours daily\n";
						
						cout<<"\n\t2 :- 1000 Rs monthly for 6 hours daily\n";
						
						cout<<"\n\t3 :- 5000 Rs monthly for 3 hours daily with personal trainer\n";
						
						cout<<"\n\t4 :- 2000 Rs monthly for 6 hours daily with personal trainer\n";
						
						cout<<"\t 5 :- 20000 Rs for one year membership\n";
						
					    cout<<"\n\n\tPress enter to go back";
					    
					getch();
					system("cls");
					goto H;
					break;
					case 3:
						system("cls");
						cout<<"\n\n\t1 :- Morning shift timing :- 6:30-9:30\n";
						
						cout<<"\n\t2 :- Afternoon shift timing :- 11:30-3:30\n";
						
						
						cout<<"\n\t3 :- Evening shift timing :- 4:30-7:30\n";
						
						cout<<"\n\t4 :- Night shift timing :- 9:00-12:30\n";
						
						
					    cout<<"\n\n\tPress enter to go back";
					getch();
					system("cls");
					goto H;
					break;
				case 4:
					
					
					system("cls");
					goto C;
					//getch();
					break;
			}
			case 6:
				
				cout<<"\n\n\n\tYou are successfully logged out";
				getch();
				system("cls");
				goto A;
				break;
			case 7:
				system("cls");
				printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\t\t\t\t\t\t\t\t\t  ++++++++++++++\n");
			printf("\t\t\t\t\t\t\t\t\t  + THANK YOU  +\n");
			printf("\t\t\t\t\t\t\t\t\t  +    FROM    +\n");
			printf("\t\t\t\t\t\t\t\t\t  + SPARX TEAM +\n");
			printf("\t\t\t\t\t\t\t\t\t  ++++++++++++++\n");
			cout<<"\n\n\n\n\n\n\n";
			
						
				exit(1);
				default	:
					cout<<"\n\n\n\n\tYou have entered a wrong choice"<<endl;
					getch();
					system("cls");
					goto C;
				//	exit(1);
			
	}
	}
}else
	{   k++;
		cout<<"\n\n\n\t"<<"access denied";
		getch();
		if(k>=3)
		{
			cout<<"\n\n\n\t"<<"You have entered password three times wrong";
			cout<<"\n\tWait for ";//5 seconds";
			int s;
				for(s=5;s>=1;s--)
			{
				
				cout<<"\n\tWait for "<<s<<" seconds....";
					Sleep( 1000 );
					Beep(5000,50);
					system("cls");
			}
			getch();
			cout<<"\n\tpress enter";
			k=0;
			system("cls");
		goto B;
	
		}
		system("cls");
		goto B;
	}
}
else
{  k++;
	cout<<"\n\n\n\t"<<"not accepted"<<endl;
	getch();
	if(k>=3)
		{
			cout<<"\n\n\n\t"<<"You have entered password three times wrong";
			int r;
			for(r=5;r>=1;r--)
			{
				
				cout<<"\n\tWait for "<<r<<" seconds....";
					Sleep( 1000 );
					Beep(5000,50);
					system("cls");
			}
			getch();
			cout<<"\n\tpress enter";
			k=0;
			system("cls");
		goto B;
	}
		system("cls");
		goto B;
	
}
}
	else
	{
		cout<<"\n\n\n\t"<<"Wrong username";
		getch();
		system("cls");
		goto A;
	}
}
else
{
	cout<<"\n\n\n\t"<<"Wrong username"<<endl;
	getch();
	system("cls");
	goto A;
	
}
}
    
	

