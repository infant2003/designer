#include<stdio.h>
#include<windows.h>

#include<conio.h>

#include <stdlib.h>
    
#include<string.h>                 

#include<ctype.h>                   

#include<dos.h>                    

#include<time.h>



#define RETURNTIME 15



char catagories[][15]={"Student","Teacher","Staffs"};

void returnfunc(void);

void viewlibrarydata(void);




void deleteteacherdata(void);

void deletestudentdata(void);

void mainmenu(void);
void vieweventsdata(void);

void addstaff(void);

void checkin(void);

void withdraw(void);

void deletestaff(void);

void academicdata();

int checkstudentid(int t); 

void getteacherdata(void);

void getstudentdata(void);

void getlibrarydata(void);

void getaccountsdata(void);

void geteventsdata(void);

void editstaff(void);

void searchstaff(void);

void viewstaff(void);
void viewteachersdata(void);
void viewstudentdata(void);
void viewacademicdata(void);


void closeapplication(void);




int  getdata();

int  checkid(int);

int t(void);



void Password();

void issuerecord();
void viewaccountsdata(void);

void loaderanim();

FILE *fp,*ft,*fs;
COORD coord = {0, 0};

int s;
int id2;

char findstaff;
                              char password[10]={"admin"};

                              void gotoxy (int x, int y)
                              {

coord.X = x; coord.Y = y; 

SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}
                              struct meroDate
                              {
                              int mm,dd,yy;
                                };
                              struct staff
                              {
                               int id;
                               char stname[20];




char name[20];

char Address[20];

char course[10];

int contact_no;


int count;

char *cat;

struct meroDate issued;

struct meroDate duedate;

};
struct library{
	int id;
	char books[100];
	
};
struct accounts{
	int id;
	int tuitionfee;
	int hostelfee;
	int examfee;
	
};
struct events{
	int id;
	char name[100];
	};
struct student{
	char books1;
	char books2;
	char books3;
	int id;
	char stname[20];
	



char name[20];
	char Address[200];
	char department[100];
	char events[100];
	int contact_no;
	int count;
	char *cat;
	struct meroDate issued;
	struct meroDate duedate;
	
};
struct student str;
struct staff a;
struct library lib;
struct accounts acc;
struct events eve;

int main()
{
Password();
getch();
int a;
return 0;
}
void mainmenu()

{

system("cls");
int i;
gotoxy(20,3);
printf("Vellore Institute Of Technology,Vellore\n");
printf("\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
gotoxy(20,5);
printf("<1> Fill Up Records   ");
gotoxy(20,7);
printf("<2> View Record's list");
gotoxy(20,9);




printf("<3> Modify Record");
gotoxy(20,11);
printf("<4> Delete Record");
gotoxy(20,13);
printf("<5> Close Application");
gotoxy(20,19);
t();
gotoxy(20,14);
printf("Enter your choice:");
switch(getch())
{

case '1':

addstaff();

break;

case '2':

viewstaff();

break;

case '3':

editstaff();

break;

case '4':

deletestaff();

break;

case '5':

{

system("cls");



gotoxy(16,3);

printf("\tYou have been successfully  logged out :)");


exit(0);

}

default:

{

gotoxy(10,25);

printf("\aWrong Entry!!Please re-entered correct option");

if(getch())

mainmenu();
}
}

}

void addstaff(void)    

{

system("cls");

int i;
gotoxy(20,5);
printf("SELECT CATEGORIES");

gotoxy(20,7);

printf("<1> Student");

gotoxy(20,9);




printf("<2> Teacher");

gotoxy(20,13);

printf("<3> Back to main menu");

gotoxy(20,21);



printf("Enter your choice:");

scanf("%d",&s);

if(s==3)
mainmenu();
else if(s==1)
getstudentdata();
else if(s==2)
{
getteacherdata();
}
}
void getteacherdata()
{
    system("cls");
	fp=fopen("teacherdata.dat","ab+");
	int id=9;
	gotoxy(20,3);
	printf("Enter the Information Below");
	gotoxy(20,4);
	printf("Category:");
	gotoxy(31,5);
	printf("%s",catagories[s-1]);
	gotoxy(21,6);
	printf("ID:\t");
	scanf("%d",&id);
	printf(" this is %d",id);
	if(checkid(id) == 0)
	{




	gotoxy(21,13);
	printf("%d",checkid(id));
	printf("\aThe id already exists\a");
	getch();
	getteacherdata();
	}
	a.id=id;
	gotoxy(21,7);
	printf("Name:");
	gotoxy(33,7);
	scanf("%s",&a.name);
	gotoxy(21,8);
	printf("Address:");
	gotoxy(30,8);
	scanf("%s",&a.Address);
	gotoxy(21,9);
	printf("Contact:");
	gotoxy(31,9);
	scanf("%i",&a.contact_no);
	gotoxy(21,10);
	printf("Course:");
	scanf("%s",&a.course);
	gotoxy(31,10);
	a.cat=catagories[s-1];
	fseek(fp,0,SEEK_END);
	fwrite(&a,sizeof(a),1,fp);
	fclose(fp);
	gotoxy(21,14);
	printf("The record is sucessfully saved");
	gotoxy(21,15);
	printf("Save any more?(Y / N):");
	if(getch()=='n')
	mainmenu();
	else
	system("cls");
	getteacherdata();

}
void getstudentdata()
{




system("cls");
char c;
int i;
gotoxy(20,5);
printf("SELECT CATEGORIES");
gotoxy(20,7);
printf("<1> Academic Details");
gotoxy(20,9);
printf("<2> Library");
gotoxy(20,11);
printf("<3> Accounts");
gotoxy(20,13);
printf("<4> Events");
gotoxy(20,15);
printf("<5> Back to main menu");
gotoxy(20,21);
printf("Enter your choice:");
scanf("%d",&s);
if(s==1)
academicdata();
else if(s==2)
getlibrarydata();
else if(s==3)
getaccountsdata();
else if(s==4)
geteventsdata();
else if(s==5)
mainmenu();
else
printf("Please Enter Valid Option");
}
void academicdata()
{

	system("cls");
	fp=fopen("studentdata.dat","ab+");
	int id=9;
	gotoxy(20,3);
	printf("Enter the Information Below");
	gotoxy(20,4);




	printf("Category:");
	gotoxy(31,5);
	printf("%s",catagories[s-1]);
	gotoxy(21,6);
	printf("ID:\t");
	scanf("%d",&id);
	printf(" this is %d",id);
	if(checkstudentid(id) == 0)
	{
	gotoxy(21,13);
	printf("\aThe id already exists\a");
	getch();
	getstudentdata();
	}
	str.id=id;
	gotoxy(21,7);
	printf("Name:");
	gotoxy(33,7);
	scanf("%s",&str.name);
	gotoxy(21,8);
	printf("Address:");
	gotoxy(30,8);
	scanf("%s",&str.Address);
	gotoxy(21,9);
	printf("Contact:");
	gotoxy(31,9);
	scanf("%i",&str.contact_no);
	gotoxy(21,10);
	printf("Course:");
	scanf("%s",&str.department);
	gotoxy(31,10);
	str.cat=catagories[s-1];
	fseek(fp,0,SEEK_END);
	fwrite(&str,sizeof(str),1,fp);
	fclose(fp);
	gotoxy(21,14);
	printf("The record is sucessfully saved");
	gotoxy(21,15);
	printf("Save any more?(Y / N):");
	if(getch()=='n')




	mainmenu();
	else
	system("cls");
	getstudentdata();
}
void getlibrarydata()
{
	system("cls");
	int i;
	 gotoxy(20,3);
	 printf("Welcome to Central Library Management portal");
	 gotoxy(20,4);
	 printf("---------------------------------------------");
	 gotoxy(20,7);
	 printf("<1> Check In");
	 gotoxy(20,9);
	 printf("<2> Withdraw");
	 gotoxy(20,11);
	 printf("<3> Back");
	 gotoxy(20,15);
	 printf("Enter your choice:");
	 scanf("%d",&i);
	 if(i==1)
	 checkin();
	 else if(i==2)
	 withdraw();
	 else if(i==3)
	 getstudentdata();
	 else
	 {
	 gotoxy(20,20);
	 printf("Please Enter Valid Option");
	 }
	}
void checkin()
{
	system("cls");
	fp=fopen("library.dat","ab+");
	int no;
	int t;
	



gotoxy(20,3);
	printf("Welcome to Central Library Management portal");
	gotoxy(20,4);
	printf("---------------------------------------------");
	gotoxy(20,5);
	printf("Books Check In");
	gotoxy(20,7);
	printf("ID:\t");
	gotoxy(20,9);
	scanf("%d",&t);
	gotoxy(20,13);
	lib.id=t;
	gotoxy(21,13);
	printf("Enter Name of the book");
	scanf("%s",&lib.books);
	fseek(fp,0,SEEK_END);
	fwrite(&lib,sizeof(lib),1,fp);
	fclose(fp);
	gotoxy(21,15);
	printf("The record is sucessfully saved");
	getch();
	getlibrarydata();
	}
	int checkstudentid(int t)  
{
rewind(fp);
while(fread(&str,sizeof(str),1,fp)==1)
if(str.id==t)
return 0;  
return 1; 
}
void withdraw()
{   
system("cls");
int d;

system("cls");

gotoxy(10,5);
printf("Enter the ID to  remove:");




scanf("%d",&d);

fp=fopen("library.dat","rb+");

rewind(fp);

while(fread(&lib,sizeof(lib),1,fp)==1)

{

if(lib.id==d)

{



gotoxy(10,7);

printf("The record is available");

gotoxy(10,8);

printf("Book Name is %s",lib.books);

gotoxy(10,9);

findstaff='t';

}

}

if(findstaff!='t')

{

gotoxy(10,10);

printf("No record is found modify the search");

if(getch())



mainmenu();

}

if(findstaff=='t' )

{

gotoxy(10,9);

printf("Do you want to delete it?(Y/N):");

if(getch()=='y')

{

ft=fopen("test.dat","wb+");  

rewind(fp);

while(fread(&a,sizeof(a),1,fp)==1)

{

if(a.id!=d)

{

fseek(ft,0,SEEK_CUR);

fwrite(&a,sizeof(a),1,ft); 

}                              

}

fclose(ft);

fclose(fp);

remove("library.dat");



rename("test.dat","library.dat"); 

fp=fopen("library.dat","rb+");    

if(findstaff=='t')

{

gotoxy(10,10);

printf("The Book is sucessfully Withdrwan");
}

else

mainmenu();

fflush(stdin);


}

}

gotoxy(10,15);

mainmenu();

}
void getaccountsdata()
{
	system("cls");
	fp=fopen("accounts.dat","ab+");
	int no;
	int t;
	gotoxy(20,3);
	printf("Welcome Payment portal");
	gotoxy(20,4);
	printf("---------------------------------------------");
	gotoxy(20,5);
	printf("Pay Ur Fees here");



	gotoxy(20,7);
	printf("ID:\t");
	gotoxy(20,9);
	scanf("%d",&t);
	gotoxy(20,13);
	acc.id=t;
	gotoxy(21,13);
	printf("Pay your Tuition Fees");
	scanf("%d",&acc.tuitionfee);
	gotoxy(21,15);
	printf("Pay your Hostel Fees");
	scanf("%d",&acc.hostelfee);
	gotoxy(21,17);
	printf("Pay your Exam Fees");
	scanf("%d",&acc.examfee);
	fseek(fp,0,SEEK_END);
	fwrite(&acc,sizeof(acc),1,fp);
	fclose(fp);
	gotoxy(21,20);
	printf("The record is sucessfully saved");
	getch();
	getstudentdata();
	}

void geteventsdata()
{
	system("cls");
	fp=fopen("events.dat","ab+");
	int i;
	int t;
	gotoxy(20,3);
	printf("Welcome to Event management portal");
	gotoxy(20,4);
	printf("---------------------------------------------");
	gotoxy(20,5);
	printf("ID:\t");
	scanf("%d",&t);
	eve.id=t;
	gotoxy(20,6);
	printf("Availlable Events");
	gotoxy(20,7);



	printf("<1> Synergy");
	 gotoxy(20,9);
	 printf("<2> Pillow Fight");
	 gotoxy(20,11);
	 printf("<3> Dance");
	 gotoxy(20,15);
	 printf("Enter your choice:");
	 scanf("%d",&i);
	 if(i==1)
	 strcpy(eve.name,"Synergy");
	 else if(i==2)
	 strcpy(eve.name,"Pillow Fight");
	 else if(i==3)
	  strcpy(eve.name,"Dance");
	 fseek(fp,0,SEEK_END);
	fwrite(&eve,sizeof(eve),1,fp);
	fclose(fp);
	gotoxy(21,20);
	printf("Registered successfully");
	getch();
	getstudentdata();
	}
	 

void deletestaff()    

{

system("cls");
     int d;
     int i;
     gotoxy(20,7);
     printf("<1> Student");
	 gotoxy(20,9);
	 printf("<2> Teacher");
	 gotoxy(20,11);
	 printf("<3> Back");
	 gotoxy(20,15);
	 printf("Enter your choice:");
	 scanf("%d",&i);
	 if(i==1)



	 deletestudentdata();
	 else if(i==2)
	 deleteteacherdata();
	 else if(i==3)
	 mainmenu();
	 else
	 {
	 gotoxy(20,20);
	 printf("Please Enter Valid Option");
	 }
}
	
void deleteteacherdata()
{
	int d;
system("cls");

gotoxy(10,5);

printf("Enter the ID to  remove:");

scanf("%d",&d);

fp=fopen("teacherdata.dat","rb+");

rewind(fp); 

while(fread(&a,sizeof(a),1,fp)==1)

{

if(a.id==d)
                              {
gotoxy(10,7);

printf("The record is available");

gotoxy(10,8);

printf("Name is %s",a.name);




gotoxy(10,9);

findstaff='t';

}

}

if(findstaff!='t')

{

gotoxy(10,10);

printf("No record is found modify the search");

if(getch())

mainmenu();

}

if(findstaff=='t' )

{

gotoxy(10,9);

printf("Do you want to delete it?(Y/N):");

if(getch()=='y')

{

ft=fopen("test.dat","wb+");  

rewind(fp);

while(fread(&a,sizeof(a),1,fp)==1)

{



if(a.id!=d)

{

fseek(ft,0,SEEK_CUR);

fwrite(&a,sizeof(a),1,ft); 

}                              

}

fclose(ft);

fclose(fp);

remove("teacherdata.dat");

rename("test.dat","teacherdata.dat"); 

fp=fopen("teacherdata.dat","rb+");    

if(findstaff=='t')

{

gotoxy(10,10);

printf("The record is sucessfully deleted");
 getch();
 deleteteacherdata();
}

}

else

mainmenu();

fflush(stdin);




}

}

void deletestudentdata()
{
	int d;
system("cls");

gotoxy(10,5);

printf("Enter the ID to  remove:");

scanf("%d",&d);

fp=fopen("teacherdata.dat","rb+");

rewind(fp);

while(fread(&a,sizeof(a),1,fp)==1)

{

if(a.id==d)

{



gotoxy(10,7);

printf("The record is available");

gotoxy(10,8);

printf("Name is %s",a.name);

gotoxy(10,9);

findstaff='t';




}

}

if(findstaff!='t')

{

gotoxy(10,10);

printf("No record is found modify the search");

if(getch())

mainmenu();

}

if(findstaff=='t' )

{

gotoxy(10,9);

printf("Do you want to delete it?(Y/N):");

if(getch()=='y')

{

ft=fopen("test.dat","wb+");  

rewind(fp);

while(fread(&a,sizeof(a),1,fp)==1)

{

if(a.id!=d)

{



fseek(ft,0,SEEK_CUR);

fwrite(&a,sizeof(a),1,ft); 

}                              

}

fclose(ft);

fclose(fp);

remove("teacherdata.dat");

rename("test.dat","teacherdata.dat"); 

fp=fopen("teacherdata.dat","rb+");    

if(findstaff=='t')

{

gotoxy(10,10);

printf("The record is sucessfully deleted");
 getch();
 deleteteacherdata();
}

}

else

mainmenu();

fflush(stdin);


}





}

void searchstaff()

{

system("cls");

int d;

printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdbSearch Record\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");


gotoxy(20,10);

printf("1. Search By ID");

gotoxy(20,14);

printf("2. Search By Name");
gotoxy(20,18);
printf("3. Back");

gotoxy( 15,20);

printf("Enter Your Choice");

fp=fopen("stf.dat","rb+"); 

rewind(fp);   

switch(getch())

{

case '1':

{



system("cls");

gotoxy(25,4);

printf("\xdb\xdb\xdb\xdb\xdb\xdbSearch By Id\xdb\xdb\xdb\xdb\xdb\xdb");

gotoxy(20,5);

printf("Enter the id:");

scanf("%d",&d);

gotoxy(20,7);

while(fread(&a,sizeof(a),1,fp)==1)

{

if(a.id==d)

{

Sleep(2);

gotoxy(20,6);

printf("The Record is available\n");

gotoxy(20,8);

printf("ID:%d",a.id);

gotoxy(20,9);

printf("Category:%s",a.cat);

gotoxy(20,10);

printf("Name:%s",a.name);

gotoxy(20,11);



printf("Address:%s ",a.Address);

gotoxy(20,12);

printf("Contact_no:%i ",a.contact_no);

gotoxy(20,13);

printf("Course:%s",a.course);

findstaff='t';

}



}

if(findstaff!='t')  

{

printf("\aNo Record Found");

}

gotoxy(20,17);

printf("Try another search?(Y/N)");

if(getch()=='y')

searchstaff();

else

mainmenu();

break;

}



case '2':

{

char s[15];

system("cls");

gotoxy(25,4);

printf("\xdb\xdb\xdb\xdb\xdb\xdbSearch Record By Name\xdb\xdb\xdb\xdb\xdb\xdb");

gotoxy(20,5);

printf("Enter the Name:");

scanf("%s",s);

int d=0;

while(fread(&a,sizeof(a),1,fp)==1)

{

if(strcmp(a.name,(s))==0) 

{

	gotoxy(20,d+7);

	//printf("The Staff is available");

	gotoxy(20,d+8);

	printf("ID:%d",a.id);

	gotoxy(20,d+10);

	printf("Name:%s",a.name);

	gotoxy(20,d+11);



	printf("Address:%s",a.Address);

	gotoxy(20,d+12);

	printf("Contact_no:%i",a.contact_no);

	gotoxy(20,d+13);
	
	printf("Course:%s",a.course);
	
	gotoxy(20,d+14);

	getch();

	d+=6;

}



}

if(d==0)



printf("\aNo Record Found");



gotoxy(20,d+11);

printf("Try another search?(Y/N)");

if(getch()=='y')

	searchstaff();

else

	mainmenu();



break;

}
case '3':
	{
		mainmenu();
		break;
	}


default :

getch();

searchstaff();

}

fclose(fp);

}



void viewstaff(void)  

{
	system("cls");
	char c;
	int s;
	gotoxy(20,5);
	printf("SELECT CATEGORIES");
	gotoxy(20,7);
	printf("<1> Student");
	gotoxy(20,9);
	printf("<2> Staff");
	gotoxy(20,11);
	printf("<3> Back");
	gotoxy(20,15);
	printf("Enter your choice:");
	scanf("%d",&s);



	if(s==1)
	viewstudentdata();
	else if(s==2)
	viewteachersdata();
	else if(s==3)
	mainmenu();
	else
	{
		gotoxy(20,17);
		printf("Please Enter Valid Option");
		getch();
		viewstaff();
	}
	
}
void viewstudentdata(void)
{
	system("cls");
	char c;
	int s;
	gotoxy(20,5);
	printf("SELECT CATEGORIES");
	gotoxy(20,7);
	printf("<1> Academics");
	gotoxy(20,9);
	printf("<2> Library");
	gotoxy(20,11);
	printf("<3> Accounts");
	gotoxy(20,13);
	printf("<4> Events");
	gotoxy(20,15);
	printf("<5> Back");
	gotoxy(20,17);
	printf("Enter your choice:");
	scanf("%d",&s);
	if(s==1)
	viewacademicdata();
	else if(s==2)
	viewlibrarydata();
	else if(s==3)
	viewaccountsdata();



	else if(s==4)
	vieweventsdata();
	else if(s==5)
	mainmenu();
	else
	{
		gotoxy(20,17);
		printf("Please Enter Valid Option");
		getch();
		viewstaff();
	}
}
void viewacademicdata(void)
{
	int i=0,j;
	system("cls");
	gotoxy(1,1);
	printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdbRecord List\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
	gotoxy(2,2);
	printf("\n ID ==== NAME ======== ADDRESS ===== CONTACT ===== COURSE=====     ");
	j=4;
	fp=fopen("studentdata.dat","rb");
	while(fread(&str,sizeof(str),1,fp)==1)
	{
	gotoxy(1,j);
	printf("%d",str.id);
	gotoxy(14,j);
	printf("%s",str.name);
	gotoxy(22,j);
	printf("%s",str.Address);
	gotoxy(36,j);
	printf("%d",str.contact_no);
	gotoxy(50,j);
	printf("%s",str.department);
	gotoxy(68,j);
	printf("\n\n");
	j++;
	}
	


fclose(fp);
	returnfunc();
}
void viewlibrarydata(void)
{
	int i=0,j;
	system("cls");
	gotoxy(1,1);
	printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdbRecord List\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
	gotoxy(2,2);
	printf("\n ID ==== Books ========  ");
	j=4;
	fp=fopen("library.dat","rb");
	while(fread(&lib,sizeof(lib),1,fp)==1)
	{
	gotoxy(1,j);
	printf("%d",lib.id);
	gotoxy(14,j);
	printf("%s,",lib.books);
	printf("\n\n");
	j++;
	}
	fclose(fp);
	returnfunc();
}

void viewaccountsdata(void)
{
	int i=0,j;
	system("cls");
	gotoxy(1,1);
	printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdbRecord List\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
	gotoxy(2,2);
	printf("\n ID ==== TuitionFees ======== HostelFees ===== ExamFees =====   ");
	j=4;



	fp=fopen("accounts.dat","rb");
	while(fread(&acc,sizeof(acc),1,fp)==1)
	{
	gotoxy(1,j);
	printf("%d",acc.id);
	gotoxy(14,j);
	printf("%d",acc.tuitionfee);
	gotoxy(22,j);
	printf("%d",acc.hostelfee);
	gotoxy(36,j);
	printf("%d",acc.examfee);
	printf("\n\n");
	j++;
	}
	fclose(fp);
	returnfunc();
}

void vieweventsdata(void)
{
	int i=0,j;
	system("cls");
	gotoxy(1,1);
	printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdbRecord List\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
	gotoxy(2,2);
	printf("\n ID ==== Registered Event ========   ");
	j=4;
	fp=fopen("events.dat","rb");
	while(fread(&eve,sizeof(eve),1,fp)==1)
	{
	gotoxy(1,j);
	printf("%d",eve.id);
	gotoxy(14,j);
	printf("%s",eve.name);
	printf("\n\n");
	j++;
	}




	fclose(fp);
	returnfunc();
}

void viewteachersdata(){
int i=0,j;
	system("cls");
	gotoxy(1,1);
	printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdbRecord List\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
	gotoxy(2,2);
	printf("\n === ID ==== NAME ======== ADDRESS ===== CONTACT ===== COURSE      ");
	j=4;
	fp=fopen("teacherdata.dat","rb");
	while(fread(&a,sizeof(a),1,fp)==1)
	{
	gotoxy(1,j);
	printf("%s",a.cat);
	gotoxy(14,j);
	printf("%d",a.id);
	gotoxy(22,j);
	printf("%s",a.name);
	gotoxy(36,j);
	printf("%s",a.Address);
	gotoxy(50,j);
	printf("%i",a.contact_no);
	gotoxy(65,j);
	printf("%s",a.course);
	gotoxy(68,j);
	printf("\n\n");
	j++;
	}
	fclose(fp);
	returnfunc();

}

void editstaff(void)  




{

system("cls");

int c=0;

int d,e;

gotoxy(20,4);

//printf("\xdb\xdb\xdb\xdb\xdb\xdbEdit Record \xdb\xdb\xdb\xdb\xdb\xdb");

char another='y';

while(another=='y')

{

system("cls");

gotoxy(15,6);

printf("Enter Id to be edited:");

scanf("%d",&d);

fp=fopen("stf.dat","rb+");

while(fread(&a,sizeof(a),1,fp)==1)

{

if(checkid(d)==0)

{

gotoxy(15,7);

printf("This Member is available");

gotoxy(15,8);



printf("The ID:%d",a.id);

gotoxy(15,9);

printf("Enter new name:");

scanf("%s",a.name);

gotoxy(15,10);

printf("Enter new Address:");

scanf("%s",a.Address);

gotoxy(15,11);

printf("Enter new Contact_no:");

scanf("%i",&a.contact_no);

gotoxy(15,12);

printf("Enter New Course Name:");

scanf("%s",&a.course);

gotoxy(15,13);

printf("The record is modified");

fseek(fp,ftell(fp)-sizeof(a),0);

fwrite(&a,sizeof(a),1,fp);

fclose(fp);

c=1;

}

if(c==0)



{

gotoxy(15,9);

printf("No record found");

}

}

gotoxy(15,16);

printf("Modify another Record?(Y/N)");

fflush(stdin);

another=getch() ;

}

returnfunc();

}

void returnfunc(void)

{

{

gotoxy(15,20);

printf("Press ENTER to return to main menu");

}

a:

if(getch()==13) 

mainmenu();



else

goto a;

}

int getdata()

{
	system("cls");
	fp=fopen("stf.dat","ab+");int t;
	gotoxy(20,3);
	printf("Enter the Information Below");
	gotoxy(20,4);

printf("Category:");

gotoxy(31,5);

printf("%s",catagories[s-1]);

gotoxy(21,6);

printf("ID:\t");

gotoxy(30,6);

scanf("%d",&t);

if(checkid(t) == 0)

{

gotoxy(21,13);

printf("\aThe id already exists\a");

getch();

mainmenu();
return 0;
}
a.id=t;
gotoxy(21,7);
printf("Name:");
gotoxy(33,7);
scanf("%s",&a.name);

gotoxy(21,8);

printf("Address:");

gotoxy(30,8);

scanf("%s",&a.Address);

gotoxy(21,9);

printf("Contact:");

gotoxy(31,9);

scanf("%i",&a.contact_no);

gotoxy(21,10);

printf("Course:");

scanf("%s",&a.course);

gotoxy(31,10);

return 1;

}



int checkid(int t)  

{

rewind(fp);

while(fread(&a,sizeof(a),1,fp)==1)
if(a.id==t)
return 0;
return 1; 
}

int t(void) 

{

time_t t;

time(&t);

printf("Logged on:%s\n",ctime(&t));



return 0 ;

}



void Password(void) 

{
system("cls");
char ch,pass[10];
printf("\t\t\t\tWELCOME\n\t\t\t\t  To \n\t\t   \xdb\xdb\xdb\xdb\xdb\xdb Records Section of VIT \xdb\xdb\xdb\xdb\xdb\xdb\n");
printf("\t \n\n\n Enter Password:");
scanf("%s",&pass);

if(strcmp(pass,password)==0)



{

mainmenu();

}

else

{

printf("\n\n\n\t\t\aWarning!! \n\t   Incorrect Password");

getch();

Password();

}

}
