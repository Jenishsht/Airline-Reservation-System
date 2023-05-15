#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
void login();
void adduser();
void newpass();
void welcome();
void des();
void book();
void seats();
void fin();
void det();
struct info
{
char name[20],gender[6];
int age;
long int num;
}usr[20];
struct seat
{
char bon;
int seat;
struct seat *nxt;
};
struct root
{
struct seat *r[9];
};
struct root *r;
struct seat *new1,*cur=NULL;
struct seat *gb,*bg,*bd,*db,*bl,*lb,*bn,*nb,*bj,*jb;
int j,n,t=0,x=0;
char fl;
void main()
{
	int k,i;
	clrscr();
	for(k=0;k<10;k++)
	{

		for(i=0;i<20;i++)
		{
			if(cur==NULL)
			{
				j=1;
				new1=(struct seat*)malloc(sizeof(struct seat));
				new1->nxt=NULL;
				new1->bon='n';
				new1->seat=j;
				j++;
				switch(k)
				{
				case 0:
					gb=new1;
					r->r[k]=gb;
					cur=gb;
					break;
				case 1:
					bg=new1;
					r->r[k]=bg;
					cur=bg;
					break;
				case 2:
					bd=new1;
					r->r[k]=bd;
					cur=bd;
					break;
				case 3:
					db=new1;
					r->r[k]=db;
					cur=db;
					break;
				case 4:
					bl=new1;
					r->r[k]=bl;
					cur=bl;
					break;
				case 5:
					lb=new1;
					r->r[k]=lb;
					cur=lb;
					break;
				case 6:
					bn=new1;
					r->r[k]=bn;
					cur=bn;
					break;
				case 7:
					nb=new1;
					r->r[k]=nb;
					cur=nb;
					break;
				case 8:
					bj=new1;
					r->r[k]=bj;
					cur=bj;
					break;
				case 9:
					jb=new1;
					r->r[k]=jb;
					cur=jb;
					break;
				}
			}
			else
			{
				new1=(struct seat*)malloc(sizeof(struct seat));
				while(cur->nxt!=NULL)
					cur=cur->nxt;
				cur->nxt=new1;
				new1->nxt=NULL;
				new1->bon='n';
				new1->seat=j;
				j++;
			}
		}
		cur=NULL;
	}
	login();
	getch();
}
void login()
{
	char usr[20],usr1[20],pwd[20],pwd1[20];
	int ch;
	FILE *ptr,*ptr1;
	clrscr();
	printf("\n\t\t\t\t*LOGIN*\n\n");
	printf("Press \n1 : Already have a account \n2 : Create new account\n");
	printf("=>");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: ptr=fopen("usr.txt","r");
			printf("Username:");
			scanf("%s",usr);
			fscanf(ptr,"%s",usr1);
			if(strcmp(usr,usr1)==0)
			{
				ptr1=fopen("pwd.txt","r");
				printf("Password:");
				scanf("%s",pwd);
				fscanf(ptr1,"%s",pwd1);
				if(strcmp(pwd,pwd1)==0)
					welcome();
				else
				{
				printf("%c",usr1);
					printf("\nInvalid password\n(Note: Case sensitive)\n");
					printf("Redirecting to the login page");
					sleep(2);
					login();
				}
			}
			else
			{
				printf("\nInvalid username\n(Note: Case sensitive");
				printf("Redirecting to the login page");
				sleep(2);
				login();
			}

			break;
		case 2:adduser();
			break;
	}
}
void adduser()
{
	char usr[20];
	FILE *ptr;
	ptr=fopen("usr.txt","w");
	printf("Username:");
	scanf("%s",usr);
	fputs(usr,ptr);
	fclose(ptr);
	newpass();
}
void newpass()
{
	char pwd[20];
	FILE *ptr;
	ptr=fopen("pwd.txt","w");
	printf("password:");
	scanf("%s",pwd);
	fputs(pwd,ptr);
	fclose(ptr);
	login();
}
void welcome()
{
	char a[20];
	int ch;
	clrscr();
	printf("\n\t\t\t\t*WELCOME TO HAWAIJAHAJ*\n\n");
	printf("(1) Destinations\n(2) Custumer care");
	printf("\nWhat would you like to do?\n");
	printf("=>");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:des();
			break;
		case 2:clrscr();
		       printf("\n\t\t\t\t*Customer care*\n\n");
		       printf("Email: customer_care@hawaijahaj.com");
		       printf("\nPhone: 443355\n");
		       printf("\n\nContinue to booking?");
		       printf("\n1:Yes\t2:No\n");
		       scanf("%d",&ch);
		       if(ch==1)
		       {
			       des();
		       }
		       else if(ch==2)
		       {
				clrscr();
				printf("Closing program in 5seconds...");
				sleep(5);
				exit(0);
		       }
		       break;
		       default:printf("Invalid choice");
		       sleep(2);
		       welcome();
	}
}
void des()
{
	int ch;
	clrscr();
	printf("\t\t\t\t*DESTINATIONS*\n");
	printf("(1) National\n(2) International\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: clrscr();
			printf("\n\t\t\t\t*HAWAIJAHAJ*\n\n");
			printf("\t\tWhere would you like to go?\n");
			printf("1.Gorakhpur -> Banglore\t 2.Banglore -> Gorakhpur\n");
			printf("3.Banglore -> Delhi\t 4.Delhi -> Banglore\n");
			printf("5.Banglore -> Lucknow\t 6.Lucknow -> Banglore\n");
			printf("What would you like do?\n");
			printf("=>");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:fl='a';
					break;
				case 2:fl='b';
					break;
				case 3:fl='c';
					break;
				case 4:fl='d';
					break;
				case 5:fl='e';
					break;
				case 6:fl='f';
					break;
				default:printf("Invalid Choice");
					sleep(2);
					clrscr();
					des();
			}break;
		case 2: clrscr();
			printf("\n\t\t\t\t*HAWAIJAHAJ*\n\n");
			printf("\t\tWhere would you like to go?\n");
			printf("(1)Banglore -> Nepal\t(2)Nepal -> Banglore\n");
			printf("(3)Banglore -> Japan\t(4)Japan -> Banglore\n");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:fl='g';
					break;
				case 2:fl='h';
					break;
				case 3:fl='i';
					break;
				case 4:fl='j';
					break;
				default:printf("Invalid Choice");
					sleep(1);
					clrscr();
					des();
			}break;
		default:printf("Invalid Choice");
			sleep(1);
			clrscr();
			des();
	}
	clrscr();
	printf("\t\t\t\t*HAWAIJAHAJ*\n");
	printf("1.Seats\n2.Book tickets\n");
	printf("What would you like to do?\n");
	printf("=>");
	scanf("%d",&ch);
	if(ch==1)
		seats();
	else if(ch==2)
		book();
	else
	{
		printf("Invalid choice");
		sleep(3);
		clrscr();
		des();
	}
}
void seats()
{
	int i,m=0,o;
	clrscr();
	printf("\n\t\t\t\tSEATS\n\n");
	switch(fl)
	{
		case 'a':
			cur=gb;
			break;
		case 'b':
			cur=bg;
			break;
		case 'c':
			cur=bd;
			break;
		case 'd':
			cur=db;
			break;
		case 'e':
			cur=bl;
			break;
		case 'f':
			cur=lb;
			break;
		case 'g':
			cur=bn;
			break;
		case 'h':
			cur=nb;
			break;
		case 'i':
			cur=bj;
			break;
		case 'j':
			cur=jb;
			break;
	}
	for(i=1;i<=20;i++)
	{
		while(cur!=NULL)
		{
			printf("%d|%c\t",cur->seat,cur->bon);
			if(cur->bon=='n')
				m++;
			cur=cur->nxt;
		}
	if(x==6)
	m=20;
	}
	printf("\nTotal seats     : 20 ");
	printf("\nSeats available : %d ",m);
	printf("\n(Seat no.|Seat status)\n");
	printf("\nStatus:\nn=Not booked\nb=Booked");
	printf("\nPress any key to Book tickets\n");
	getch();
	book();
}
void book()
{
	int i,ch=1,m;
	clrscr();
	switch(fl)
	{
		case 'a':
			cur=gb;
			break;
		case 'b':
			cur=bg;
			break;
		case 'c':
			cur=bd;
			break;
		case 'd':
			cur=db;
			break;
		case 'e':
			cur=bl;
			break;
		case 'f':
			cur=lb;
			break;
		case 'g':
			cur=bn;
			break;
		case 'h':
			cur=nb;
			break;
		case 'i':
			cur=bj;
			break;
		case 'j':
			cur=jb;
			break;
	}
	while(ch)
	{
		clrscr();
		printf("\n\t\t\t\t*HAWAIJAHAJ*\n\n");
		printf("No. of people\n");
		printf("=>");
		scanf("%d",&n);
		t=t+n;
		for(i=0;i<n;i++)
		{
			m=cur->seat;
			if(m>20)
			{
				if(i==0)
				{
					clrscr();
					printf("\n\t\t\t\t*HAWAIJAHAJ*\n\n");
					printf("Sorry for inconvinience\n");
					printf("No seats available\n");
					printf("Program shutting...");
					sleep(3);
					exit(0);
				}
				clrscr();
				printf("\n\t\t\t\t*HAWAIJAHAJ*\n\n");
				printf("\nNo sufficient seats.\n");
				x=6;
				printf("Seats available =%d\n",i);
				printf("Seats Required =%d\n",n);
				printf("Still want to book available seats?\n");
				printf("1:Seats\n2:Exit");
				scanf("%d",&ch);
				switch(ch)
				{
					case 1:seats();
						break;
					case 2:exit(0);
				}
			}
			else
			{
				while(cur->bon=='b')
					cur=cur->nxt;
				cur->bon='b';
				printf("%d ",cur->seat);
				cur=cur->nxt;
			}
	}
		printf("seats are selected\n");
		sleep(3);
		clrscr();
		if(x!=3)
		{
		printf("\n\t\t\t\t*HAWAIJAHAJ*\n\n");
		printf("Want to Book More Seats?\n");
		printf("1:Yes\n2:No\n");
		printf("=>");
		scanf("%d",&ch);
		if(ch==1)
		{
			seats();
			x=3;
		}
		else if(ch==2)
		{
			ch=0;
		}
		}
	}
	det();
}
void det()
{
	int l;
	clrscr();
	printf("\n\t\t\t\t*HAWAIJAHAJ*\n\n");
	printf("Enter details of Passengers\n");
	for(l=1;l<=t;l++)
	{
		printf("Name:");
		scanf("%s",usr[l].name);
		printf("\nGender:");
		scanf("%s",usr[l].gender);
		printf("\nAge:");
		scanf("%d",&usr[l].age);
		printf("\nNumber:");
		scanf("%ld",&usr[l].num);
	}
	fin();
}
void fin()
{
	int pri,to,co,toco,l;
	switch(fl)
	{
		case 'a':
		case 'b':
			pri=4500;
			break;
		case 'c':
		case 'd':
			pri=2500;
			break;
		case 'e':;
		case 'f':
			pri=3500;
			break;
		case 'g':
		case 'h':
			pri=8200;
			break;
		case 'i':
		case 'j':
			pri=3500;
			break;
	}
	to=t*pri;
	co=400*t;
	toco=to+co;
	clrscr();
	printf("\n\t\t\t\t*HAWAIJAHAJ*\n\n");
	printf("Total price =%d\n",to);
	printf("Convenience fee=%d\n",co);
	printf("Total with convenience fee=%d\n",toco);
	printf("Passengers\n");
	for(l=1;l<=t;l++)
	{
		printf("Name:%s\nGender:%s\nAge:%d\nNumber:%ld\n",usr[l].name,usr[l].gender,usr[l].age,usr[l].num);
	}
	printf("\t\t\t\tBooking Successful\n\t\t\t\tThank you for Booking\n\t\t\t\tPress any key to exit");
}