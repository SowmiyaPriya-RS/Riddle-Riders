#include <iostream>		//basic input and output operations in c++(cin,cout,cerr,clog)
#include <cstring> 		//string operations
#include <cctype> 		//set of functions to classify individual characters(isupper())
#include <stdio.h>		//standard input and output library
#include <Windows.h>	//
#include <conio.h>		//console input or output(used by MS DOS Compiler)
#include <cstdio>       
#include <ctime>        //date and time informations
#include <fstream>      //input and output with files
#include <iomanip>      //part of input/output library of the c++ standard library(setw,setpreciion,setfill)
#include <unistd.h>     //sleep
#include <stack>        //stack operations
#include <sstream>      //for string to integer conversion
#include <bits/stdc++.h>//for stack opertions
#include <string>       //for string operations
#include <stdlib.h>     //exit
#include "MMSystem.h"

void mainmenu();
void firstscreen();
void admin();
void player(); 
void rules();
void check();
void add();
void display(int ,int );
void writefile(double );
void readfile();
void result();
void result_record(int );
void count();
void array(int );

using namespace std;
string USERNAME,name,roll,myArray[100];
int option,opt,pin,crt,wrong,c;


void gotoXY(int x, int y)//function to decide location of the screem
{
	//A "handle" is a generic identifier (typically a pointer) used to represent something
	//Retrieves a handle to the specified standard device (standard input, standard output).
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE); 		 
	COORD CursorPosition; 
	CursorPosition.X = x; // Locates column
	CursorPosition.Y = y; // Locates Row
	//Sets the cursor position in the specified console screen buffer.
	//A COORD structure that specifies the new cursor position, in characters. The coordinates are 
	//the column and row of a screen buffer character cell. The coordinates must be within the 
	//boundaries of the console screen buffer.
	SetConsoleCursorPosition(console,CursorPosition); // Sets position for next thing to be printed 
}

void admin()
{
	ad:
	gotoXY(55,3);
	cout << "         ADMIN LOGIN            ";
	gotoXY(55,4);
	cout << "     _____________________";
	system("Color 91");
	usleep(1);
	gotoXY(64,6);
	cout << "1.Check";
	gotoXY(64,7);
	cout << "2.Add";
	gotoXY(64,8);
	cout << "3.Main Menu";
	system("Color B3");
	usleep(1);
	gotoXY(60,11);
	cout << "Enter your option:";
	system("Color D5");
	usleep(1);
	gotoXY(79,11);
	cin >> opt;
	if(opt==1)
	{
		check();
    }
    if(opt==2)
    {
    	add();
	}
    else if(opt==3)
	{
		firstscreen();
	}
}

void check()
{
	gotoXY(45,14);
	cout << "0001-C\t0002-C++\t0003-Java\t0004-Python";
	gotoXY(60,17);
	cout << "Enter the game pin :";
	system("Color C7");
	usleep(1);
	gotoXY(81,17);
	cin >> pin;
	system("cls");
	if(pin==0001)
	{
		system("Color F1");
        fstream QFile,AFile;
        QFile.open("Ques_0001.txt",ios::in);
        AFile.open("Ans_0001.txt",ios::in);
        string s,ch;
        while((QFile.eof()==0)&&(AFile.eof()==0)) 
        {
            getline(QFile,s);
            if(s.size()==0)
            {
            	getline(AFile,ch);
            	cout << "\nAnswer :"<< ch;
            }
 		    cout << '\n' << s;
        }
        QFile.close();
        AFile.close();
        cout << "\n\n\n\nPress any key to continue\n";
        _getch();
        system("cls");
        admin() ;
    }
    else if(pin==0002)
	{
		system("Color F1");
		fstream QFile,AFile;
    	QFile.open("Ques_0002.txt",ios::in);
   		AFile.open("Ans_0002.txt",ios::in);
   		string s,ch;
  		while((QFile.eof()==0)&&(AFile.eof()==0)) 
        {
        	getline(QFile,s);
        	if(s.size()==0)
        	{
           		getline(AFile,ch);
           		cout << "\nAnswer :"<< ch;
       		}
  			cout << '\n' << s;
        }
    	QFile.close();
    	AFile.close();
    	cout << "\n\n\n\nPress any key to continue\n";
    	_getch();
    	system("cls");
    	admin() ;
	}
	else if(pin==0003)
	{
		system("Color F1");
        fstream QFile,AFile;
        QFile.open("Ques_0003.txt",ios::in);
        AFile.open("Ans_0003.txt",ios::in);
        string s,ch;
        while((QFile.eof()==0)&&(AFile.eof()==0)) 
        {
            getline(QFile,s);
            if(s.size()==0)
            {
            	getline(AFile,ch);
            	cout << "\nAnswer :"<< ch;
  		    }
            cout << '\n' << s;
 
        }
        QFile.close();
        AFile.close();
        cout << "\n\n\n\nPress any key to continue\n";
        _getch();
        system("cls");
        admin() ;
	}
	else if(pin==0004)
	{
		system("Color F1");

        fstream QFile,AFile;
        QFile.open("Ques_0004.txt",ios::in);
        AFile.open("Ans_0004.txt",ios::in);
        string s,ch;
        while((QFile.eof()==0)&&(AFile.eof()==0)) 
        {
            getline(QFile,s);
            if(s.size()==0)
            {
            	getline(AFile,ch);
            	cout << "\nAnswer :"<< ch;
            }
  			cout << '\n' << s;
        }
        QFile.close();
        AFile.close();
        cout << "\n\n\n\nPress any key to continue\n";
        _getch();
        system("cls");
        admin() ;
    }
    else
	{
		system("Color F1");
		cout<<"Enter valid pin";
		_getch();
		system("CLS");
		admin();
	}
}


void add()
{
	gotoXY(45,14);
    cout<<"0001-C\t0002-C++\t0003-Java\t0004-Python\n";	
    gotoXY(60,17);
	cout<<"Choose the game pin:";
	system("Color E4");
	usleep(1);
	gotoXY(81,17);
	cin>>pin;
	system("CLS");
	if(pin==0001)
	{
		system("Color F1");
		fstream Myfile,Infile;
		Myfile.open("Ques_0001.txt",ios::out | ios::app);
		char ques[100];
		string op1,op2,op3,op4;
		char ans;
		
		cout<<"Enter the question :\n";
		Myfile<<'\n';
		cin.get();
		cin.getline(ques,100,'\n');
		Myfile<<ques<<'\n';
		
		cout<<"\nEnter option 1:\n";
		getline(cin,op1,'\n');
		
		cout<<"\nEnter option 2:\n";
		getline(cin,op2,'\n');
		
		cout<<"\nEnter option 3:\n";
		getline(cin,op3,'\n');
		
		cout<<"\nEnter option 4:\n";
		getline(cin,op4,'\n');
		
		Myfile<<op1<<'\n';
		Myfile<<op2<<'\n';
		Myfile<<op3<<'\n';
		Myfile<<op4<<'\n';
		Myfile.close();
		
		Infile.open("Ans_0001.txt",ios::out | ios::app);
		cout<<"\nEnter the answer:\n";
		cin>>ans;
		Infile<<ans<<'\n';
		Infile.close();
		
		cout<<"\n\nPress any key to continue\n";
		_getch();
		system("CLS");
		admin();
	}
	else if(pin==0002)
	{
		system("Color F1");
		fstream Myfile,Infile;
		Myfile.open("Ques_0002.txt",ios::out | ios::app);
		char ques[100];
		string op1,op2,op3,op4;
		char ans;
		
		cout<<"Enter the question :\n";
		Myfile<<'\n';
		cin.get();
		cin.getline(ques,100,'\n');
		Myfile<<ques<<'\n';
		
		cout<<"\nEnter option 1:\n";
		getline(cin,op1,'\n');
		
		cout<<"\nEnter option 2:\n";
		getline(cin,op2,'\n');
		
		cout<<"\nEnter option 3:\n";
		getline(cin,op3,'\n');
		
		cout<<"\nEnter option 4:\n";
		getline(cin,op4,'\n');
		
		Myfile<<op1<<'\n';
		Myfile<<op2<<'\n';
		Myfile<<op3<<'\n';
		Myfile<<op4<<'\n';
		Myfile.close();
		
		Infile.open("Ans_0002.txt",ios::out | ios::app);
		cout<<"\nEnter the answer:\n";
		cin>>ans;
		Infile<<ans<<'\n';
		Infile.close();
		
		cout<<"\n\nPress any key to continue\n";
		_getch();
		system("CLS");
		admin();
	}
	else if(pin==0003)
	{
		system("Color F1");
		fstream Myfile,Infile;
		Myfile.open("Ques_0003.txt",ios::out | ios::app);
		char ques[100];
		string op1,op2,op3,op4;
		char ans;
		
		cout<<"Enter the question :\n";
		Myfile<<'\n';
		cin.get();
		cin.getline(ques,100,'\n');
		Myfile<<ques<<'\n';
		
		cout<<"\nEnter option 1:\n";
		getline(cin,op1,'\n');
		
		cout<<"\nEnter option 2:\n";
		getline(cin,op2,'\n');
		
		cout<<"\nEnter option 3:\n";
		getline(cin,op3,'\n');
		
		cout<<"\nEnter option 4:\n";
		getline(cin,op4,'\n');
		
		Myfile<<op1<<'\n';
		Myfile<<op2<<'\n';
		Myfile<<op3<<'\n';
		Myfile<<op4<<'\n';
		Myfile.close();
		
		Infile.open("Ans_0003.txt",ios::out | ios::app);
		cout<<"\nEnter the answer:\n";
		cin>>ans;
		Infile<<ans<<'\n';
		Infile.close();
		
		cout<<"\n\nPress any key to continue\n";
		_getch();
		system("CLS");
		admin();
	}
	else if(pin==0004)
	{
		system("Color F1");
		fstream Myfile,Infile;
		Myfile.open("Ques_0004.txt",ios::out | ios::app);
		char ques[100];
		string op1,op2,op3,op4;
		char ans;
		
		cout<<"Enter the question :\n";
		Myfile<<'\n';
		cin.get();
		cin.getline(ques,100,'\n');
		Myfile<<ques<<'\n';
		
		cout<<"\nEnter option 1:\n";
		getline(cin,op1,'\n');
		
		cout<<"\nEnter option 2:\n";
		getline(cin,op2,'\n');
		
		cout<<"\nEnter option 3:\n";
		getline(cin,op3,'\n');
		
		cout<<"\nEnter option 4:\n";
		getline(cin,op4,'\n');
		
		Myfile<<op1<<'\n';
		Myfile<<op2<<'\n';
		Myfile<<op3<<'\n';
		Myfile<<op4<<'\n';
		Myfile.close();
		
		Infile.open("Ans_0004.txt",ios::out | ios::app);
		cout<<"\nEnter the answer:\n";
		cin>>ans;
		Infile<<ans<<'\n';
		Infile.close();
		
		cout<<"\n\nPress any key to continue\n";
		_getch();
		system("CLS");
		admin();
	}
	else
	{
		system("Color F1");
		cout<<"Enter valid pin";
		_getch();
		system("CLS");
		admin();
	}
}

void player()
{
	system("Color A7");
	gotoXY(55,3);
	cout<< "     PLAYER LOGIN            ";
	gotoXY(55,4);
	cout<< " _____________________";
	usleep(1);
	system("Color D6");
	gotoXY(45,7);
	cout<<"0001-C\t0002-C++\t0003-Java\t0004-Python";
	gotoXY(55,10);
	cout<<"Enter the game pin :";
	usleep(1);
	system("Color B4");
	gotoXY(76,10);
	cin>>pin;
	system("cls");
	int crt=0;
	int wrong=0;
	double score;
	if(pin==0001)
	{
		system("Color F1");
		string ans;
		string ch,opt;
		fstream Myfile;
		Myfile.open("Ques_0001.txt",ios::in);
		fstream Infile;
	    Infile.open("Ans_0001.txt",ios::in);
	    while(!Myfile.eof() && !Infile.eof())
	    {
	    	getline(Myfile,ch);
	    	if(ch.size()==0)
	    	{
	    		gotoXY(44,14);
	    		cout<<"Enter the correct option:";
	    		cin>>ans;
	    		getline(Infile,opt);
	            if(ans==opt)
	    		{
	    			gotoXY(44,16);
	    			cout<<"Congratulations !right answer";
	    			crt=crt+1;
				}
				else if(ans !="a" && ans !="b" && ans !="c" && ans !="d")
				{
					gotoXY(44,16);
					cout<<"Invalid option";
				}
				else
				{
					gotoXY(44,16);
					cout<<"Oops !wrong answer";
					wrong=wrong+1;
				}
				_getch();
	    		system("cls");
			}
			cout<<'\n'<<ch;
	    }
		Myfile.close();
		Infile.close();
		system("cls");
		display(crt,wrong);
	}
	else if(pin==0002)
	{
		system("Color F1");
		string ans;
		string ch,opt;
		fstream Myfile;
		Myfile.open("Ques_0002.txt",ios::in);
		fstream Infile;
	    Infile.open("Ans_0002.txt",ios::in);
	    while(!Myfile.eof() && !Infile.eof())
	    {
	    	getline(Myfile,ch);
	    	if(ch.size()==0)
	    	{
	    		gotoXY(44,14);
	    		cout<<"Enter the correct option:";
	    		gotoXY(85,13);
	    		cin>>ans;
	    		getline(Infile,opt);
	            if(ans==opt)
	    		{
	    			gotoXY(44,16);
	    			cout<<"Congratulations !right answer";
	    			crt=crt+1;
				}
				else if(ans !="a" && ans !="b" && ans !="c" && ans !="d")
				{
					gotoXY(44,16);
					cout<<"Invalid option";
				}
				else
				{
					gotoXY(44,16);
					cout<<"Oops !wrong answer";
					wrong=wrong+1;
				}
				_getch();
	    		system("cls");
			}
			cout<<'\n'<<ch;
	    }
		Myfile.close();
		Infile.close();
		system("cls");
		display(crt,wrong);
	}
	else if(pin==0003)
	{
		system("Color F1");
		string ans;
		string ch,opt;
		fstream Myfile;
		Myfile.open("Ques_0003.txt",ios::in);
		fstream Infile;
	    Infile.open("Ans_0003.txt",ios::in);
	    while(!Myfile.eof() && !Infile.eof())
	    {
	    	getline(Myfile,ch);
	    	if(ch.size()==0)
	    	{
	    		cout<<"\nEnter the correct option:\n";
	    		cin>>ans;
	    		getline(Infile,opt);
	            if(ans==opt)
	    		{
	    			cout<<"\nCongratulations !right answer";
	    			crt=crt+1;
				}
				else
				{
					cout<<"\nOops !wrong answer";
					wrong=wrong+1;
				}
				_getch();
	    		system("cls");
			}
			cout<<'\n'<<ch;
	    }
		Myfile.close();
		Infile.close();
		system("cls");
		display(crt,wrong);
	}
	else if(pin==0004)
	{
		system("Color F1");
    	string ans;
		string ch,opt;
		fstream Myfile;
		Myfile.open("Ques_0004.txt",ios::in);
		fstream Infile;
	    Infile.open("Ans_0004.txt",ios::in);
	    while(!Myfile.eof() && !Infile.eof())
	    {
	    	getline(Myfile,ch);
	    	if(ch.size()==0)
	    	{
	    		cout<<"\nEnter the correct option:\n";
	    		cin>>ans;
	    		getline(Infile,opt);
	            if(ans==opt)
	    		{
	    			cout<<"\nCongratulations !right answer";
	    			crt=crt+1;
				}
				else
				{
					cout<<"\nOops !wrong answer";
					wrong=wrong+1;
				}
				_getch();
	    		system("cls");
			}
			cout<<'\n'<<ch;
	    }
		Myfile.close();
		Infile.close();
		system("cls");
		display(crt,wrong);
	}
	else
	{
		cout<<"Enter valid pin";
		_getch();
		system("CLS");
		admin();
	}
}

void rules()
{
	system("Color 91");
	gotoXY(56,4);	
		cout<<"Instruction"<<endl;
	gotoXY(50,5);	
		cout<<"Press Enter to Home Menu"<<endl;
		usleep(1);
		system("Color E2");
		gotoXY(38,6);	
		cout<<"   ________________________________________"<<endl;
		gotoXY(38,7);
		cout<<" / \\                             	         \\."<<endl;
		gotoXY(38,8);
		cout<<"|   |                                      |."<<endl;
		gotoXY(38,9);
		cout<<" \\_ | Select==>                            |."<<endl;
		gotoXY(38,10);
		cout<<"    | Press only Valid Opton--> (a,b,c,d)  |."<<endl;
		gotoXY(38,11);
		cout<<"    | if u Press Other key consider wrong  |."<<endl;
		gotoXY(38,12);
		cout<<"    | answer.                              |."<<endl;
		gotoXY(38,13);
		cout<<"    |                            	   	 |."<<endl;
		gotoXY(38,14);
		cout<<"    | Skip==>                              |."<<endl;
		gotoXY(38,15);
		cout<<"    | Press Enter to Skip the Question     |."<<endl;
		gotoXY(38,16);
		cout<<"    |                            	         |."<<endl;
		gotoXY(38,17);
		cout<<"    | Points==>                            |."<<endl;
		gotoXY(38,18);
		cout<<"    | 1 Point will be awarded for each     |."<<endl;
		gotoXY(38,19);
		cout<<"    | correct answer.                      |."<<endl;
		gotoXY(38,20);
		cout<<"    |                                      |."<<endl;
		gotoXY(38,21);
		cout<<"    | Time==>                              |."<<endl;
		gotoXY(38,22);
		cout<<"    | There is no time limit for this      |."<<endl;
		gotoXY(38,23);
		cout<<"    | quiz game    .                       |."<<endl;
		gotoXY(38,24);
		cout<<"    |                            	         |."<<endl;
		gotoXY(38,25);
		cout<<"    | Identification==>                    |."<<endl;
		gotoXY(38,26);
		cout<<"    | Enter Roll Number and Name for Record |."<<endl;
		gotoXY(38,27);
		cout<<"    | save                          	 |."<<endl;
		gotoXY(38,28);
		cout<<"    |   ___________________________________|___"<<endl;
		gotoXY(38,29);
		cout<<"    |  /                                      /."<<endl;
		gotoXY(38,30);
		cout<<"    \\_/______________________________________/."<<endl;
}

void print()
{
	cout << "\n\n\n\n\n\n\n\t\t      _______________________________________________________________________________________" << endl;
	cout << "\t\t     |                                                                                       |" << endl;
	cout << "\t\t     |                                                                                       |" << endl;
	cout << "\t\t     |                                                                                       |" << endl;
	cout << "\t\t     |                                                                                       |" << endl;
	cout << "\t\t     |                                                                                       |" << endl;
	cout << "\t\t     |                                                                                       |" << endl;
	cout << "\t\t     |                                                                                       |" << endl;
	cout << "\t\t     |                                                                                       |" << endl;
	cout << "\t\t     |                                                                                       |" << endl;
	cout << "\t\t     |                                                                                       |" << endl;
	cout << "\t\t     |_______________________________________________________________________________________|" ;
}

void mainmenu()
{
	print();
    //PlaySound(TEXT("music1.wav"), NULL, SND_SYNC);
	//system("pause");
	gotoXY(48,10);
	cout << "Enter your name: \t";
	gotoXY(66,10);
	cin >> name;
	gotoXY(48,12);
	cout << "Enter your roll: \t";
	gotoXY(66,12);
	cin >> roll;
    system("CLS");
    print();
    gotoXY(48,10);
	cout << "Enter your user-name:  \t";
	gotoXY(48,11);
	cout << "(CASE-SENSITIVE)";
	gotoXY(70,10);
	cin >> USERNAME;
	gotoXY(48,13);
	cout << "Enter your password :\t";

    char pass[32];
    int i = 0;
    char a;
    int j=70;
    for(i=0;;)
    {
        a=_getch();
        if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9'))
		{
            pass[i]=a;
            ++i;
            gotoXY(j,13);
            cout<<"*";
            j++;
        }
        if(a=='\b'&&i>=1)

        {
            cout<<"\b \b";
            --i;
        }
        if(a=='\r')
        {
            pass[i]='\0';
            break;
        }
    }

    if(name.compare(USERNAME) ==0 && roll.compare(pass) == 0)
	{
        firstscreen();
    }
	else
	{
		cout << "\n\n**********Check your login credentials**********";
	}
}

void firstscreen()
{
	doo:
	system("CLS");
	system("Color A4");
	
	cout<<"\n\n\n\n\t\t\t\t\t     __      __   ___  | |   ___    ___    _ __ ___     ___  "<<endl;
	cout<<"\t\t\t\t\t     \\ \\ /\\ / /  / _ \\ | |  / __|  / _ \\  | '_ ` _ \\   / _ \\ "<<endl;
    cout<<"\t\t\t\t\t      \\ V  V /  |  __/ | | | (__  | (_) | | | | | | | |  __/ "<<endl;
	cout<<"\t\t\t\t\t       \\_/\\_/    \\___| |_|  \\___|  \\___/  |_| |_| |_|  \\___| "<<endl;
	usleep(1);
	
	Beep(500, 100);
	gotoXY(51,13);
	
	cout<<"======Select Following Option ======";
	system("Color DE");
	usleep(1);
	gotoXY(58,16);
	cout<<"1-->  Admin Login";
	gotoXY(58,17);
	cout<<"2-->  Player Login";
	gotoXY(58,18);
	cout<<"3-->  Instructions";  
	gotoXY(58,19);
	cout<<"4-->  Result Record";
	gotoXY(58,20);
	cout<<"5-->  Exit";
	system("Color E1");
	gotoXY(52,23);
	cout<<"Select : ";    
	Beep(500, 100);
	//gotoXY(55,26);
	//cout<<" >>";
	//gotoXY(79,26);
//	cout<<" >>";
//	gotoXY(59,26);
//	cout<<"Press Enter Continue";
	gotoXY(61,23); 
    cin >> option;
	
    switch(option)
	{
		case 1 :
		   	system("CLS");
		    admin();
		    _getch();
		   	goto doo;
		    break;
		case 2:
			system("CLS");
		    player();
		    _getch();
		    goto doo;
		   	break;
		case 3:
		   	system("CLS");
     		rules();
			_getch();
			goto doo;
            break;
        case 4:
		    system("CLS");
		    result();
		    count();
		   	_getch();
		   	goto doo;
            break;
        case 5:
        	exit(0);
            break;
		default:
		   	cout << "\nEnter the correct option";
		    goto doo;
	}
}

void display(int c,int w)
{
	int f=30;
	//setcolor(RED);
	system("Color D5");
	gotoXY(0,3);
	cout<<"  _____                 _ _   "<<endl;
	gotoXY(0,4);
	cout<<" |  __ \\               | | |  "<<endl;
	gotoXY(0,5);
	cout<<" | |__) |___  ___ _   _| | |_ "<<endl;
	gotoXY(0,6);
	cout<<" |  _  // _ \\/ __| | | | | __|"<<endl;
	gotoXY(0,7);
	cout<<" | | \\ \\  __/\\__ \\ |_| | | |_ "<<endl;
	gotoXY(0,8);
	cout<<" |_|  \\_\\___||___/\\__,_|_|\\__|"<<endl;
	usleep(1);
	system("Color A5");

 	//setcolor(YELLOW);
	gotoXY(f,1);
	cout<<"                     ,---.           ,---.   "<<endl;
	gotoXY(f,2);
	cout<<"                    / /^`.\\.--''''-./,'^\\ \\	"<<endl;
	gotoXY(f,3);
	cout<<"                    \\ \\    _       _    / /	"<<endl;
	gotoXY(f,4);
	cout<<"                     `./  / __   __ \\  \\,'	"<<endl;
	gotoXY(f,5);
	cout<<"                      /    /_O)_(_O\\    \\	"<<endl;
	gotoXY(f,6);
	cout<<"                      |  .-'  ___  `-.  |	"<<endl;
	gotoXY(f,7);
	cout<<"                   .--|       \\_/       |--.	"<<endl;
	gotoXY(f,8);
	cout<<"                 ,'    \\   \\   |   /   /    `."<<endl;
	gotoXY(f,9);
	cout<<"                /       `.  `--^--'  ,'       \\"<<endl;
	gotoXY(f,10);
	cout<<"             .-^^^^^-.    `--.___.--'     .-^^^^^-."<<endl;
	gotoXY(f,11);
	cout<<".-----------/         \\------------------/         \\--------------."<<endl;
	gotoXY(f,12);
	cout<<"| .---------\\         /----------------- \\         /------------. |"<<endl;
	gotoXY(f,13);
	cout<<"| |          `-`--`--'                    `--'--'-'             | |"<<endl;
	gotoXY(f,14);
	cout<<"| |                                                             | |"<<endl;
	gotoXY(f,15);
	cout<<"| |                                                             | |"<<endl;
	gotoXY(f,16);
	cout<<"| |                                                             | |"<<endl;
	gotoXY(f,17);
	cout<<"| |                                                             | |"<<endl;
	gotoXY(f,18);
	cout<<"| |_____________________________________________________________| |"<<endl;
	gotoXY(f,19);
	cout<<"|_________________________________________________________________|"<<endl;
	gotoXY(f,20);
	cout<<"                   )__________|__|__________("<<endl;
	gotoXY(f,21);
	cout<<"                  |            ||            |"<<endl;
	gotoXY(f,22);
	cout<<"                  |____________||____________|"<<endl;
	gotoXY(f,23);
	cout<<"                    ),-----.(      ),-----.("<<endl;
	gotoXY(f,24);
	cout<<"                  ,'   ==.   \\    /  .==    `."<<endl;
	gotoXY(f,25);
	cout<<"                 /            )  (            \\"<<endl;
	gotoXY(f,26);
	cout<<"                 `==========='    `==========='  "<<endl;
	usleep(1);
	system("Color E1");
	
	double score;
	char grade;
	string comm;
	score=c*10;
	gotoXY(35,14);
	cout<<"Name ==> "<<name;
	gotoXY(70,14);
	cout<<"Roll number ==> "<<roll;
	gotoXY(35,15);
	cout<<"Total score ==> 100";
	gotoXY(70,15);
	cout<<"Your score ==> "<<score;
	gotoXY(35,16);
	cout<<"Correct Answers ==> "<<c;
	gotoXY(35,17);
	cout<<"Wrong Answers ==> "<<w;

	if(score>=80)
	{
		grade='A';
		comm="Excellent";
	}	
	else if(score>=60)
	{
		grade='B';
		comm="Good";
	}
		
	else if(score>=40)
	{
		grade='C';
		comm="Fair";
	}
	else
	{
		grade='F';
		comm="Fail Do hard work..";
	}
	gotoXY(70,16);
	cout<<"Grade : "<<grade;
	gotoXY(70,17);
	cout<<"Comments : "<<comm;
	writefile(score);
}

void writefile(double score)
{
	fstream file;
	file.open("display.txt",ios::out | ios::app);
	file<<score<<"      "<<roll<<"      "<<name;
	file<<"\n";
	file.close();
}

stack<int> sortStack(stack<int> &input) 
{ 
    stack<int> tmpStack; 
  
    while (!input.empty()) 
    { 
        // pop out the first element 
        int tmp = input.top(); 
        input.pop(); 
  		// while temporary stack is not empty and top 
        // of stack is greater than temp 
        while (!tmpStack.empty() && tmpStack.top() > tmp) 
        { 
            // pop from temporary stack and push 
            // it to the input stack 
            input.push(tmpStack.top()); 
            tmpStack.pop(); 
        } 
  		// push temp in tempory of stack 
        tmpStack.push(tmp); 
    } 
  	return tmpStack; 
} 
  

void result()
{
	stack<int> input;
	string s;
	fstream file("display.txt",ios::in);
	while(!file.eof())
	{
	   getline(file,s,' ');	
	   stringstream degree(s);
       int x = 0;
       degree >> x;
	   if(x!=0)
	    	input.push(x);
	   file.ignore(80,'\n');
	}
	stack<int> tmpStack = sortStack(input); 
    file.close();
    fstream sort("sorted.txt",ios::out);
    while (!tmpStack.empty()) 
    { 
        sort<< tmpStack.top()<<endl; 
        tmpStack.pop(); 
    } 
    sort.close();
}

void count()
{
	int count = 0;
    string line;
 
    /* Creating input filestream */ 
    ifstream file("display.txt");
    while (getline(file, line))
    {
        count++;
	}
	result_record(count);
}

void result_record(int c)
{
	string myArray[100];
	fstream file;
	file.open("display.txt");
	if(file.is_open())
    {
		for(int i = 0; i < c; ++i)
        {
            getline(file,myArray[i],'\n');
        }
    }
    file.close();
	system("Color B4");
	cout<<"\n\n\t\t\t\t\t\t        ALL STUDENTS RESULT \n";
	cout<<"\n\t\t\t\t\t\t  Press Enter to Go Back Home Screen\n";
	cout<<"\t\t\t\t\t\t  =============================\n";
	cout<<"\t\t\t\t\t\t  Score      Name      Roll"<<endl;
	cout<<"\t\t\t\t\t\t  =============================\n";

	string str2;
	fstream sort;
    sort.open("sorted.txt");
    int j=9;
	while(!sort.eof())
	{
		getline(sort,str2);
		for(int i=0;i<c;i++)
		{
			if(myArray[i] == "")
				break;
			if(myArray[i].find(str2) == 0)
			{
				gotoXY(51,j);
      			cout << myArray[i] << endl;
      			j++;
      			for(int j=i; j<c; j++)
                {
                    myArray[j] = myArray[j+1];
                }
				break;
        	}
		}
	}
	sort.close();
}
 
int main()
{
	
	mainmenu();
	return 0;
	
}



