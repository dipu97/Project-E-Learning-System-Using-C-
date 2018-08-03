#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
#include<math.h>
#include<windows.h>

void add(FILE * fp);
void delete(FILE *fp);
void delete(FILE * fp);
void modify(FILE * fp);
void displayList(FILE * fp);
void searchRecord(FILE *fp);
void printChar(char ch,int n);
void printHead();
struct admin
{
    char name[20];
    char mail[20];
    char mob[20];
    char pas[20];
    char age[20];
};
void gotoxy(int x, int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

void intro()
{
//up
    gotoxy(72,7);
    printf("%c",220);
    gotoxy(73,7);
    printf("%c",220);
    gotoxy(74,7);
    printf("%c",220);
    gotoxy(75,7);
    printf("%c",220);
    gotoxy(76,7);
    printf("%c",220);
    gotoxy(77,7);
    printf("%c",220);
    gotoxy(78,7);
    printf("%c",220);
    gotoxy(79,7);
    printf("%c",220);
    gotoxy(80,7);
    printf("%c",220);
    gotoxy(81,7);
    printf("%c",220);
    gotoxy(82,7);
    printf("%c",220);
    gotoxy(83,7);
    printf("%c",220);
    gotoxy(84,7);
    printf("%c",220);
    gotoxy(85,7);
    printf("%c",220);
    gotoxy(86,7);
    printf("%c",220);
    gotoxy(87,7);
    printf("%c",220);
    gotoxy(88,7);
    printf("%c",220);
    gotoxy(89,7);
    printf("%c",220);
    gotoxy(90,7);
    printf("%c",220);
    gotoxy(91,7);
    printf("%c",220);

//left
    gotoxy(72,8);
    printf("%c",219);
    gotoxy(72,9);
    printf("%c",219);
    gotoxy(72,10);
    printf("%c",219);
    gotoxy(72,11);
    printf("%c",219);
    gotoxy(72,12);
    printf("%c",219);
    gotoxy(72,13);
    printf("%c",219);
    gotoxy(72,14);
    printf("%c",219);

    //down
    gotoxy(73,14);
    printf("%c",220);
    gotoxy(74,14);
    printf("%c",220);
    gotoxy(75,14);
    printf("%c",220);
    gotoxy(76,14);
    printf("%c",220);
    gotoxy(77,14);
    printf("%c",220);
    gotoxy(78,14);
    printf("%c",220);
    gotoxy(79,14);
    printf("%c",220);
    gotoxy(80,14);
    printf("%c",220);
    gotoxy(81,14);
    printf("%c",220);
    gotoxy(82,14);
    printf("%c",220);
    gotoxy(83,14);
    printf("%c",220);
    gotoxy(84,14);
    printf("%c",220);
    gotoxy(85,14);
    printf("%c",220);
    gotoxy(86,14);
    printf("%c",220);
    gotoxy(87,14);
    printf("%c",220);
    gotoxy(88,14);
    printf("%c",220);
    gotoxy(89,14);
    printf("%c",220);
    gotoxy(90,14);
    printf("%c",220);


//right
    gotoxy(91,8);
    printf("%c",219);
    gotoxy(91,9);
    printf("%c",219);
    gotoxy(91,10);
    printf("%c",219);
    gotoxy(91,11);
    printf("%c",219);
    gotoxy(91,12);
    printf("%c",219);
    gotoxy(91,13);
    printf("%c",219);
    gotoxy(91,14);
    printf("%c",219);

    //middle
    gotoxy(82,8);
    printf("%c",221);
    gotoxy(82,9);
    printf("%c",221);
    gotoxy(82,10);
    printf("%c",221);
    gotoxy(82,11);
    printf("%c",221);
    gotoxy(82,12);
    printf("%c",221);
    gotoxy(82,13);
    printf("%c",221);
    gotoxy(82,14);
    printf("%c",221);

    gotoxy(75,9);
    printf("%c",196);
    gotoxy(75,10);
    printf("%c",196);
    gotoxy(75,11);
    printf("%c",196);
    gotoxy(75,12);
    printf("%c",196);
    gotoxy(75,13);
    printf("%c",196);

    gotoxy(77,9);
    printf("%c",196);
    gotoxy(77,10);
    printf("%c",196);
    gotoxy(77,11);
    printf("%c",196);
    gotoxy(77,12);
    printf("%c",196);
    gotoxy(77,13);
    printf("%c",196);

    gotoxy(79,9);
    printf("%c",196);
    gotoxy(79,10);
    printf("%c",196);
    gotoxy(79,11);
    printf("%c",196);
    gotoxy(79,12);
    printf("%c",196);
    gotoxy(79,13);
    printf("%c",196);

    gotoxy(84,9);
    printf("%c",196);
    gotoxy(84,10);
    printf("%c",196);
    gotoxy(84,11);
    printf("%c",196);
    gotoxy(84,12);
    printf("%c",196);
    gotoxy(84,13);
    printf("%c",196);

    gotoxy(86,9);
    printf("%c",196);
    gotoxy(86,10);
    printf("%c",196);
    gotoxy(86,11);
    printf("%c",196);
    gotoxy(86,12);
    printf("%c",196);
    gotoxy(86,13);
    printf("%c",196);

    gotoxy(88,9);
    printf("%c",196);
    gotoxy(88,10);
    printf("%c",196);
    gotoxy(88,11);
    printf("%c",196);
    gotoxy(88,12);
    printf("%c",196);
    gotoxy(88,13);
    printf("%c",196);

    gotoxy(68,18);
    printf("WELCOME TO E-LEARNIG SYSTEM");

    gotoxy(30,24);
    printf("Implemented By :");

    //left
    gotoxy(62,25);
    printf("%c",175);
    gotoxy(62,26);
    printf("%c",175);
    gotoxy(62,27);
    printf("%c",175);
    gotoxy(62,28);
    printf("%c",175);
    gotoxy(62,29);
    printf("%c",175);
    gotoxy(62,30);
    printf("%c",175);
    gotoxy(62,31);
    printf("%c",175);
    gotoxy(62,32);
    printf("%c",175);

    //right
    gotoxy(100,25);
    printf("%c",175);
    gotoxy(100,26);
    printf("%c",175);
    gotoxy(100,27);
    printf("%c",175);
    gotoxy(100,28);
    printf("%c",175);
    gotoxy(100,29);
    printf("%c",175);
    gotoxy(100,30);
    printf("%c",175);
    gotoxy(100,31);
    printf("%c",175);
    gotoxy(100,32);
    printf("%c",175);

    gotoxy(74,26);
    printf("LITON KUMAR BISWAS");
    gotoxy(74,28);
    printf("ID : 173-35-2231");
    gotoxy(67,30);
    printf("Dept. Of Software Engineering");
    gotoxy(65,32);
    printf("Daffodil International University");
    gotoxy(30,38);
    printf("Press Any Key To Continue ........");
    getch();
    system("cls");
    //one();
    choice();
}

struct subject
{
    char name[100];
    char code[50];
    int credit;
    char duration[8];
    char doc[10000];
};
void choice()
{
    int log,i;
    printHead();


    gotoxy(67,14);
    printf("1. Student.");

    gotoxy(67,15);
    printf("2. Admin");
    gotoxy(67,16);
    printf("0.TO EXIT");

    gotoxy(65,18);
    printf("Enter Your choice :");
    scanf("%d",&log);
    system("CLS");
    switch(log)

    {
    case 0:
        printHead();
        for (i = 0; i <10000; i++)
        {
            gotoxy(65,10);                                                                       // loading bar animation
            printf("Exiting.......... %d%%", i/100+1);
        }
        system("cls");
         printHead();
        gotoxy(65,12);
        printf("Successfully Exited");
        exit(0);
        break;
    case 1:
        student();
        break;

    case 2:
        admin();
        break;
    default:
        choice();
    }
}

void menu()
{
    FILE * fp;
    struct subject s;
    int option;
    char another;

    if((fp=fopen("subjectInfo.txt","rb+"))==NULL)
    {
        if((fp=fopen("subjectInfo.txt","wb+"))==NULL)
        {
            printf("can't open file");
            return 0;
        }
    }

    printHead();
    while(1)
    {

        printHead();
        printf(" ");
        gotoxy(45,4);
        printChar('-',64);

        gotoxy(67,10);
        printf("1. ADD subject");
        gotoxy(67,11);
        printf("2. DELETE subject");
        gotoxy(67,12);
        printf("3. MODIFY subject");
        gotoxy(67,13);
        printf("4. DISPLAY subject LIST");
        gotoxy(67,14);
        printf("5. Search Record");
        gotoxy(67,15);
        printf("0. LOG OUT");

        gotoxy(67,20);
        printf("Enter Your Option :==> ");
        scanf("%d",&option);

        switch(option)
        {
        case 0:
        {
            system("cls");
            printHead();
            int i;
            for (i = 0; i < 10000; i++)
            {
                gotoxy(65,17);                                                                       // loading bar animation
                printf("Logging out.......... %d%%", i/100+1);
            }
            printf("\n");
            Sleep(1000);
            system("cls");

            admin();
            break;
        }
        case 1:
            add(fp);
            break;
        case 2:
            delete(fp);
            break;
        case 3:
            modify(fp);
            break;
        case 4:
            displayList(fp);
            break;
        case 5:
            searchRecord(fp);
            break;
        default:
            printf("\n\t\tYou Pressed wrong key");
            printf("\n\t\tProgram terminated");
            getch();
            exit(0);

        }
    }
    return 1;
}


void printChar(char ch,int n)
{
    while(n--)
    {
        putchar(ch);
    }
}

void printHead()
{
    system("cls");
    gotoxy(38,3);
    printChar('=',24);
    printf("WELCOME TO E LEARNING SYSTEM");
    printChar('=',24);
    printf("\n");
}

void add(FILE * fp)
{
    printHead();

    char another='y';
    struct subject s;
    int i;
    fseek(fp,0,SEEK_END);
    while(another=='y'||another=='Y')
    {

        printf("\n\n\t\tEnter Full Name of subject:");
        fflush(stdin);
        fgets(s.name,100,stdin); //fgets takes an extra \n character as input
        s.name[strlen(s.name)-1]='\0';

        printf("\n\n\t\tEnter code\t:");
        fflush(stdin);
        fgets(s.code,50,stdin);
        s.code[strlen(s.code)-1]='\0';

        printf("\n\n\t\tEnter Credit\t:");
        scanf("%d",&s.credit);

        printf("\n\n\t\tEnter duration\t:");
        fflush(stdin);
        fgets(s.duration,50,stdin);
        s.duration[strlen(s.duration)-1]='\0';
printf("\n\n\t\tEnter Document\t");
        fflush(stdin);
        fgets(s.doc,10000,stdin);
        fwrite(&s,sizeof(s),1,fp);
        printf("\n\n\t\tWant to enter another subject info (Y/N)\t");
        fflush(stdin);
        another=getchar();
    }
}

void delete(FILE *fp)
{
    printHead();

    struct subject s;
    int flag=0;
    char tempName[50];
    FILE *ft;

    if((ft=fopen("temp.txt","wb+"))==NULL)
    {
        printf("\n\n\t\t\t\\t!!! ERROR !!!\n\t\t");
        system("pause");
        return fp;
    }

    printf("\n\n\tEnter Name subject to Delete the Record");
    printf("\n\n\t\t\tName: ");
    fflush(stdin);
    gets(tempName);
    rewind(fp);


    while((fread(&s,sizeof(s),1,fp))==1)
    {
        if(strcmpi(s.name,tempName)==0)
        {
            flag=1;
            printf("\n\tRecord Deleted for");
            printf("\n\n\t\tName:%s\n\n\t\tCode:%s\n\n\t\tCredit:%d\n\n\t\tDuration:%s\n\n\t\tDocument:%s",s.name,s.code,s.credit,s.duration,s.doc);

            continue;
        }

        fwrite(&s,sizeof(s),1,ft);
    }


    fclose(fp);
    fclose(ft);

    remove("subjectInfo.txt");
    rename("temp.txt","subjectInfo.txt");

    if((fp=fopen("subjectInfo.txt","rb+"))==NULL)
    {
        printf("ERROR");
        return  NULL;
    }

    if(flag==0)
        printf("\n\n\t\t!!!! ERROR RECORD NOT FOUND \n\t");
    printf(" ");
    gotoxy(45,4);
    printChar('-',65);
    printf("\n\t");
    system("pause");
    return fp;
}

void modify(FILE * fp)
{
    printHead();

    struct subject s;
    int flag=0;
    char tempName[50];
    float cgpa;

    printf("\n\n\tEnter Name of subject to MODIFY the Record : ");
    fflush(stdin);
    gets(tempName);
    rewind(fp);

    while((fread(&s,sizeof(s),1,fp))==1)
    {
        if(strcmpi(s.name,tempName)==0)
        {
            flag=1;
            break;
        }
    }

    if(flag==1)
    {
        fseek(fp,-sizeof(s),SEEK_CUR);
        printf("\n\n\t\tRECORD FOUND");
        printf("\n\n\t\tEnter New Data for the Record");

        printf("\n\n\t\tEnter Full Name of subject\t");
        fflush(stdin);
        fgets(s.name,100,stdin);
        s.name[strlen(s.name)-1]='\0';

        printf("\n\n\t\tEnter code\t");
        fflush(stdin);
        fgets(s.code,50,stdin);
        s.code[strlen(s.code)-1]='\0';

        printf("\n\n\t\tEnter Credit \t");
        scanf("%d",&s.credit);


        printf("\n\n\t\tEnter duration \n\t");
        fflush(stdin);
        fgets(s.duration,50,stdin);
        s.duration[strlen(s.duration)-1]='\0';
         printf("\n\n\t\tEnter Document\n\t");
        fflush(stdin);
        fgets(s.doc,10000,stdin);
        s.doc[strlen(s.doc)-1]='\0';
        fwrite(&s,sizeof(s),1,fp);
    }

    else
        printf("\n\n\t!!!! ERROR !!!! RECORD NOT FOUND");

    printf("\n\n\t");
    system("pause");

}


void displayList(FILE * fp)
{
    printHead();
    struct subject s;
    int i;

    rewind(fp);

    while((fread(&s,sizeof(s),1,fp))==1)
    {
        printf("\n\t\tName :\t%s",s.name);
        printf("\n\n\t\tCode :\t%s",s.code);
        printf("\n\n\t\tCredit :\t%d",s.credit);
        printf("\n\n\t\tDuration :\t%s\n",s.duration);
        printf("\n\t\tDocument:\t%s\n\n",s.doc);
        printChar('-',65);
    }
    printf("\n\n\n\t");
    printChar('*',65);
    printf("\n\n\t");
    system("pause");
}

void searchRecord(FILE *fp)
{
    printHead();
    char tempCredit[50];
    int flag;
    struct subject s;
    char another='y';
    while(another=='y'||another=='Y')
    {
        printf("\n\n\tEnter name of subject to search the record : ");
        fflush(stdin);
        gets(tempCredit);

        rewind(fp);
        int i;
        for (i = 0; i <10000; i++)
        {
            gotoxy(65,17);                                                                       // loading bar animation
            printf("Searching.......... %d%%", i/100+1);

        }
        system("cls");
        printHead();

        while((fread(&s,sizeof(s),1,fp))==1)
        {
            if(strcmpi(s.name,tempCredit)==0)
            {
                flag=1;
                break;
            }
        }

        if(flag==1)
        {
            printf("\n\t\tNAME : %s",s.name);
            printf("\n\n\t\tCode : %s",s.code);
            printf("\n\n\t\tCredit : %d",s.credit);
            printf("\n\n\t\tDuration: %s\n\n",s.duration);
            printf("\n\n\t\tDocument :%s\n",s.doc);
            printChar('-',65);

        }
        else
            printf("\n\n\t\t!!!! ERROR RECORD NOT FOUND !!!!");


        printf("\n\n\t\tWant to enter another search (Y/N)");
        fflush(stdin);
        another=getchar();
    }
}
int main()
{
    intro();
}
void admin()
{
    int su,i;

    printHead();

    gotoxy(65,10);
    printf("       ADMIN");
    gotoxy(65,11);
    printf("----------------------");

    gotoxy(67,14);
    printf("1. Admin Log In.");

    gotoxy(67,15);
    printf("2. Admin Sign Up.");
    gotoxy(67,16);
    printf("0.For Main Menu");
    gotoxy(65,18);
    printf("Enter your choice : ");
    scanf("%d",&su);
    system("CLS");
    switch (su)
    {
    case 0:
    {
        system("cls");
        printHead();
choice();
    }
    break;
    case 1 :
        adminlogin();
        break;

    case 2:
        adminsignup();
        break;
    default:
        menu();
    }
}
void adminlogin()
{
    int i=0;
    char enter=' ';
    char anam[20];
    char apass[10];
    char retry;
    char vnum;

    struct admin s;
    FILE *adminsignup;

    adminsignup=fopen("adminlog.txt","r");

    system("CLS");

    printHead();

    gotoxy(66,10);
    printf("     Admin Log In");
    gotoxy(66,11);
    printf("----------------------");


    gotoxy(64,13);
    printf("Admin User Name\t: ");
    scanf("%s",&anam);

    gotoxy(64,14);
    printf("Password\t: ");
    while (i<=10)
    {
        apass[i]=getch();
        enter=apass[i];
        if(enter==13)
            break;
        else
            printf("*");
        i++;
    }

    apass[i]='\0';
    i=0;


    {
        int i;
        for (i = 0; i < 10000; i++)
        {
            gotoxy(65,17);                                                                       // loading bar animation
            printf("loading.......... %d%%", i/100+1);
        }
        printf("\n");

    }

    while(fread(&s, sizeof(s),1,adminsignup))
    {

        if(strcmp(anam,s.name)==0)

        {
            if(strcmp(apass,s.pas)==0)
            {
                gotoxy(64,19);
                printf("Successfully Login....");
                Sleep(1000);
                system("CLS");
                menu();
            }
            else
            {

                gotoxy(68,19);
                printf("Login FAILED.");

                gotoxy(53,21);
                printf(" Invalid Name Or Incorrect password.  RETRY(y/n) : ");
                scanf("%s",&retry);
                system("CLS");
                switch(retry)

                {
                case 'y':
                    adminlogin();
                    break;
                case 'n':
                    exit(0);
                    break;
                default :
                    exit(0);
                }
            }
        }
        else
        {

            gotoxy(68,19);
            printf("Login FAILED.");

            gotoxy(53,21);
            printf(" Invalid Name Or Incorrect password.  Want to retry Press Y : ");
            scanf("%s",&retry);
            system("CLS");
            switch(retry)

            {
            case 'y':
                adminlogin();
                break;
            case 'Y':
                adminlogin();
                break;
            default :
                exit(0);
            }
        }
    }

    fclose(adminsignup);

}

adminsignup()
{
    struct admin s;
    FILE *adminsignup;
    adminsignup=fopen("adminlog.txt","a");

    printHead();

    gotoxy(66,10);
    printf("      Admin Forum");
    gotoxy(66,11);
    printf("----------------------");

    gotoxy(67,14);
    printf("Name\t\t: ");
    scanf("%s",&s.name);

    gotoxy(67,15);
    printf("Age\t\t: ");
    scanf("%s",&s.age);

    gotoxy(67,16);
    printf("Password\t: ");
    scanf("%s",&s.pas);

    gotoxy(59,19);
    printf("Your successfully done your REGISTRATION");

    fwrite(&s, sizeof(s),1,adminsignup);
    fclose(adminsignup);

    Sleep(1000);
    adminlogin();

}
struct student
{
    char name[100];
    char fname[100];
    char mname[100];
    char dob[100];
    char mail[50];
    char sname[100];
    char hsr[20];
    char hsy[20];
    char cname[100];
    char cr[20];
    char cy[20];
    char uname[30];
    char pass[30];
} sd;
void studentsignup()
{
    struct student s;
    FILE *sdetails;
    sdetails=fopen("sdetails.txt","a");
    fseek(sdetails,0,SEEK_END);

    printHead();

    gotoxy(67,10);
    printf("Student Admission Menu");
    gotoxy(66,11);
    printf("----------------------");

    gotoxy(64,13);
    printf("Student Name\t: ");
    fflush(stdin);
    fgets(s.name,100,stdin);
    s.name[strlen(s.name)-1]='\0';
    gotoxy(64,14);
    printf("Father Name\t: ");
    fflush(stdin);
    fgets(s.fname,100,stdin);
    s.fname[strlen(s.fname)-1]='\0';
    gotoxy(64,15);
    printf("Mother Name\t: ");
    fflush(stdin);
    fgets(s.mname,50,stdin);
    s.mname[strlen(s.mname)-1]='\0';
    gotoxy(64,16);
    printf("Date of Birth\t: ");
    fflush(stdin);
    fgets(s.dob,50,stdin);
    s.dob[strlen(s.dob)-1]='\0';
    gotoxy(64,17);
    printf("Enter Your Mail\t: ");
    fflush(stdin);
    fgets(s.mail,50,stdin);
    s.mail[strlen(s.mail)-1]='\0';
    gotoxy(46,19);
    printf("High School Name\t: ");
    fflush(stdin);
    fgets(s.sname,50,stdin);
    s.sname[strlen(s.sname)-1]='\0';


    gotoxy(46,20);
    printf("High School Result\t: ");
    fflush(stdin);
    fgets(s.hsr,50,stdin);
    s.hsr[strlen(s.hsr)-1]='\0';
    gotoxy(46,21);
    printf("High School Year\t: ");
    fflush(stdin);
    fgets(s.hsy,50,stdin);
    s.hsy[strlen(s.hsy)-1]='\0';
    gotoxy(85,19);
    printf("College Name \t: ");
    fflush(stdin);
    fgets(s.cname,50,stdin);
    s.cname[strlen(s.cname)-1]='\0';
    gotoxy(85,20);
    printf("College Result\t: ");
    fflush(stdin);
    fgets(s.cr,50,stdin);
    s.cr[strlen(s.cr)-1]='\0';
    gotoxy(85,21);
    printf("College Year\t: ");
    fflush(stdin);
    fgets(s.cy,50,stdin);
    s.cy[strlen(s.cy)-1]='\0';

    gotoxy(64,23);
    printf("User Name\t:");
    fflush(stdin);
    fgets(s.uname,50,stdin);
    s.uname[strlen(s.uname)-1]='\0';
    gotoxy(64,24);
    printf("Password\t:");
    scanf("%s",&s.pass);
    gotoxy(67,26);
    printf("Your successfully done your REGISTRATION");

    fwrite(&s, sizeof(s),1,sdetails);
    fclose(sdetails);

    Sleep(1000);
    studentlogin();
}

void studentlogin()
{
    int i=0;
    char enter=' ';
    char snam[20];
    char spass[10];
    char retry;

    struct student s;
    FILE *ssignup;
    ssignup=fopen("sdetails.txt","r");
    fseek(ssignup,0,SEEK_END);
    system("CLS");

    printHead();

    gotoxy(66,10);
    printf("    Student Log In");
    gotoxy(66,11);
    printf("----------------------");


    gotoxy(64,13);
    printf("User Name\t: ");
    fflush(stdin);
    gets(snam);
    rewind(ssignup);
    gotoxy(64,14);
    printf("Password\t: ");
    while (i<=10)
    {
        spass[i]=getch();
        enter=spass[i];
        if(enter==13)
            break;
        else
            printf("*");
        i++;
    }

    spass[i]='\0';
    i=0;


    {
        int i;
        for (i = 0; i < 10000; i++)
        {
            gotoxy(65,17);
            printf("loading.......... %d%%", i/100+1);
        }
        printf("\n");
    }

    while(fread(&s, sizeof(s),1,ssignup))
    {

        if(strcmp(snam,s.uname)==0 && strcmp(spass,s.pass)==0)

        {

            gotoxy(64,19);
            printf("Successfully Login....");
            Sleep(1000);
            system("CLS");
            smenu();

        }

        else
        {

            gotoxy(68,19);
            printf("Login FAILED.");

            gotoxy(53,21);
            printf(" Invalid Name Or Incorrect password.  RETRY(y/n) : ");
            scanf("%s",&retry);
            system("CLS");
            switch(retry)

            {
            case 'y':
                studentlogin();
                break;
            case 'n':
                studentlogin();
                break;
            default :
                exit(0);
            }
        }
    }

    fclose(ssignup);

}
student()
{
    int log;

    printHead();

    gotoxy(69,10);
    printf("  STUDENT");
    gotoxy(64,11);
    printf("----------------------");


    gotoxy(67,14);
    printf("1. Student Log In.");

    gotoxy(67,15);
    printf("2. Student Sign Up.");
     gotoxy(67,16);
    printf("0. For Main Menu");

    gotoxy(65,18);
    printf("Enter Your choice :");
    scanf("%d",&log);
    system("CLS");
    switch(log)

    {
        case 0:
            {
        system("cls");
        printHead();
        choice();
    }
    break;

    case 1:
        studentlogin();
        break;

    case 2:
        studentsignup();
        break;
    default:
        choice();
    }
}
void smenu()
{
    FILE * fp;
    struct subject s;
    int option,i;
    char another;

    if((fp=fopen("subjectInfo.txt","rb+"))==NULL)
    {
        if((fp=fopen("subjectInfo.txt","wb+"))==NULL)
        {
            printf("can't open file");
            return 0;
        }
    }
    while(1)
    {
        printHead();
        printf("\n\t");
        gotoxy(40,4);
        printChar('-',64);
        gotoxy(65,10);

        printf("1.view subject and details of subject");
        gotoxy(65,11);
        printf("2.Start Quiz");
        gotoxy(65,12);
        printf("3.Quiz Help");
        gotoxy(65,13);
        printf("4.Quiz result");
        gotoxy(65,14);
        printf("5.Search Record");
        gotoxy(65,15);
        printf("0.LOG OUT");
        gotoxy(65,18);

        printf("Enter Your Option :==> ");
        scanf("%d",&option);

        switch(option)
        {
        case 0:
system("cls");
printHead();
        for (i = 0; i <10000; i++)
        {
            gotoxy(65,17);                                                                       // loading bar animation
            printf("Logging Out.......... %d%%", i/100+1);
        }
            student();
            break;
        case 1:
            displayList(fp);
            break;
        case 2:
            starquize();
            break;
        case 3:
            quizhelp();
            break;
        case 4:
          seeresults();
            break;
        case 5:
            searchRecord(fp);
            break;

        default:
            printf("\n\t\tYou Pressed wrong key");
            printf("\n\t\tProgram terminated");
            getch();
            exit(0);

        }
    }
    return 1;

}
quizhelp()
{
    system("cls");
    printHead();
    gotoxy(55,4);
    printf("Best Luck For Your Quiz");
    gotoxy(55,5);
    printf("There will have 10 questions");
    gotoxy(55,6);
    printf("10 marks for every question");
    gotoxy(55,7);
    printf("You will get 10 marks for every correct answer.");
    gotoxy(55,8);
    printf("There is no negative marking");
    gotoxy(55,9);
    printf("Bst of luck");
    gotoxy(55,10);
    printf("Start quiz press(1) or go to menu press (2)");
    int u;
    scanf("%d",&u);
    if(u==1)
     starquize();
    else
        smenu();
}
int i,n,r,score;

struct stuinfo
{
    char name[30];
    int anscount;
} stu;


void starquize()
{
    int score;
    system("cls");
    printHead();
    struct stuinfo stu;
    FILE *fp;
    fp = fopen("result.txt", "a");
    int count = 0;
    gotoxy(65,6);
    printf("Enter your name : ");
    fflush(stdin);
    fgets(stu.name,50,stdin);

    printf("Your quiz is going to start !!\n\n");
    system("pause");
    system("CLS");

    for(i=1; i<=10; i++)
    {
        switch(i)
        {
        case 1:
            system("CLS");
            printHead();
            gotoxy(65,10);
            printf("1. What is the storage size for integer Data?");
            gotoxy(65,12);
            printf("A.2 Byte");
            gotoxy(65,13);
            printf("B.4 Byte");
            gotoxy(65,14);
            printf("C.1 Byte");
            gotoxy(65,15);
            printf("D.0 Byte");
            if (toupper(getch())=='B')
            {
               gotoxy(65,17);
                printf("CORRECT ANSWER");
                count++;
                getch();
            }
            else
            {
                gotoxy(65,17);
                printf("Wrong!!! The correct answer is B.4 Byte");
                getch();
            }
            break;
        case 2:
            system("CLS");
            printHead();
            gotoxy(65,10);
            printf("2. What is the storage size for character Data?");
            gotoxy(65,12);
            printf("A.2 Byte");
            gotoxy(65,13);
            printf("B.4 Byte");
            gotoxy(65,14);
            printf("C.1 Byte");
            gotoxy(65,15);
            printf("D.0 Byte");
            if (toupper(getch())=='C')
            {
               gotoxy(65,17);
                printf("CORRECT ANSWER");
                count++;
                getch();
            }
            else
            {
                gotoxy(65,17);
                printf("Wrong!!! The correct answer is C.1 Byte");
                getch();
            }
            break;

        case 3:
            system("CLS");
            printHead();
            gotoxy(65,10);
            printf("3. Which one is Even number?");
            gotoxy(65,12);
            printf("A.13");
            gotoxy(65,13);
            printf("B.4");
            gotoxy(65,14);
            printf("C.1");
            gotoxy(65,15);
            printf("D.301");
            if (toupper(getch())=='B')
            {
               gotoxy(65,17);
                printf("CORRECT ANSWER");
                count++;
                getch();
            }
            else
            {
                gotoxy(65,17);
                printf("Wrong!!! The correct answer is B.4");
                getch();
            }
            break;

        case 4:
            system("CLS");
            printHead();
            gotoxy(65,10);
            printf("4. Which one is prime number?");
            gotoxy(65,12);
            printf("A.2o");
            gotoxy(65,13);
            printf("B.4 ");
            gotoxy(65,14);
            printf("C.1");
            gotoxy(65,15);
            printf("D.7");
            if (toupper(getch())=='D')
            {
               gotoxy(65,17);
                printf("CORRECT ANSWER");
                count++;
                getch();
            }
            else
            {
                gotoxy(65,17);
                printf("Wrong!!! The correct answer is D.7");
                getch();
            }
            break;

        case 5:
            system("CLS");
            printHead();
            gotoxy(65,10);
            printf("5. Which country is the winner of 2014 FIFA world cup?");
            gotoxy(65,12);
            printf("A.Honduras");
            gotoxy(65,13);
            printf("B.Germany");
            gotoxy(65,14);
            printf("C.Brazil");
            gotoxy(65,15);
            printf("D.Argentina");
            if (toupper(getch())=='B')
            {
               gotoxy(65,17);
                printf("CORRECT ANSWER");
                count++;
                getch();
            }
            else
            {
                gotoxy(65,17);
                printf("Wrong!!! The correct answer is B.4 Germany");
                getch();
            }
            break;

        case 6:
            system("CLS");
            printHead();
            gotoxy(65,10);
            printf("6.What Which of the following function sets first n characters of a string to a given character??");
            gotoxy(65,12);
            printf("A.strinit()");
            gotoxy(65,13);
            printf("B.strnset()");
            gotoxy(65,14);
            printf("C.strset()");
            gotoxy(65,15);
            printf("D.strcset()");
            if (toupper(getch())=='B')
            {
               gotoxy(65,17);
                printf("CORRECT ANSWER");
                count++;
                getch();
            }
            else
            {
                gotoxy(65,17);
                printf("Wrong!!! The correct answer is B.strnset()");
                getch();
            }
            break;

        case 7:
            system("CLS");
            printHead();
            gotoxy(65,10);
            printf("7.The library function used to find the last occurrence of a character in a string is");
            gotoxy(65,12);
            printf(" A.strnstr()");
            gotoxy(65,13);
            printf("B.laststr()");
            gotoxy(65,14);
            printf("C.strrchr()");
            gotoxy(65,15);
            printf("D.strstr()");
            if (toupper(getch())=='C')
            {
               gotoxy(65,17);
                printf("CORRECT ANSWER");
                count++;
                getch();
            }
            else
            {
                gotoxy(65,17);
                printf("Wrong!!! The correct answer is D.strrchr()");

                getch();
            }
            break;

        case 8:
            system("CLS");
            printHead();
            gotoxy(65,10);
            printf("8. Which of the following function is more appropriate for reading in a multi-word string?");
            gotoxy(65,12);
            printf("A.printf();");
            gotoxy(65,13);
            printf("B.scanf();");
            gotoxy(65,14);
            printf("C.gets();");
            gotoxy(65,15);
            printf("D.puts();");
            if (toupper(getch())=='C')
            {
               gotoxy(65,17);
                printf("CORRECT ANSWER");
                count++;
                getch();
            }
            else
            {
                gotoxy(65,17);
                printf("Wrong!!! The correct answer is C.gets();");
                getch();
            }
            break;

        case 9:
            system("CLS");
            printHead();
            gotoxy(65,10);
            printf("9.What will the function rewind() do?");
            gotoxy(65,12);
            printf("A.Reposition the file pointer to a character reverse.");
            gotoxy(65,13);
            printf("B.Reposition the file pointer stream to end of file.");
            gotoxy(65,14);
            printf("C.Reposition the file pointer to beginning of that line.");
            gotoxy(65,15);
            printf("D.Reposition the file pointer to beginning of file.");
            if (toupper(getch())=='D')
            {
               gotoxy(65,17);
                printf("CORRECT ANSWER");
                count++;
                getch();
            }
            else
            {
                gotoxy(65,17);
                printf("Wrong!!! The correct answer is D.Reposition the file pointer to beginning of file.");
                getch();
            }
            break;

        case 10:
            system("CLS");
            printHead();
            gotoxy(65,10);
            printf("10. Input/output function prototypes and macros are defined in which header file?");
            gotoxy(65,12);
            printf("A.conio.h");
            gotoxy(65,13);
            printf("B.stdlib.h");
            gotoxy(65,14);
            printf("C.stdio.h");
            gotoxy(65,15);
            printf("D.dos.h");
            if (toupper(getch())=='C')
            {
               gotoxy(65,17);
                printf("CORRECT ANSWER");
                count++;
                getch();
            }
            else
            {
                gotoxy(65,17);
                printf("Wrong!!! The correct answer is Bstdio.h");
                getch();
            }
            break;
        }
    }
    score=count*10;
    system("CLS");
    printHead();
    gotoxy(65,12);
    printf("Thanks for your participation");
    gotoxy(67,15);
    printf("You Got %d marks",score);
    gotoxy(65,17);
    system("pause");
    stu.anscount = score;
    fwrite(&stu, sizeof(stu), 1, fp);

    fclose(fp);
}

void seeresults()
{
    struct stuinfo stu;

    FILE *fp;
    fp = fopen("result.txt", "r");

    printf("Name   Score\n");
    while(fread(&stu, sizeof(stu), 1, fp))
    {
        printf("%s   %d\n", stu.name, stu.anscount);
    }

    fclose(fp);
}

