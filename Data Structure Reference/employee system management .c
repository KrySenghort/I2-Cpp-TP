#include <stdio.h> ///for input output functions like printf, scanf
#include <stdlib.h>
#include <conio.h>
#include <windows.h> ///for windows related functions (not important)
#include <string.h>  ///string operations
//List of Global Variable 
//void login()
//{
//  	int a=0,i=0;
//    char username[10],c;
//    char password[10],code[10];
//    char user[10]="user";
//    char pass[10]="pass";
//    do
//{
//    printf("\n ================================> Login Form <=====================================  ");
//    printf(" \n                       Enter username: ");
//  	scanf("%s",&username); 
//  	printf(" \n                       Enter password: ");
//  	scanf("%s",&password);
//  while(i<10)
//  {
//      password[i]=getch();
//      c=password[i];
//      if(c==13) 
//	  break;
//      else 
//	  printf("*");
//      i++;
//  }
//  password[i]='\0';  //char code=pword;
//  i=0; //scanf("%s",&password); 
//    if(strcmp(username,"user")==0 || strcmp(password,"pass")==0)
//  {
//  	printf("\n\n\n\t\tWelcome to employee record management system !!!! Login is sucessful");
//  	printf("\n loading please wait... \n");
//    for(i=0; i<3; i++)
//    {
//        printf(".");
//        Sleep(500);
//    }
//  	printf("\n\n\n\t\t\t\tPress any key to continue...");
//  	getch();//holds the screen
//  	break;
//  }
//  	else
//  {
//    printf("\n sorry !!!! login is unsucessful");
//    a++;
//    getch();//holds the screen
//  }
//}
//  	while(a<=2);
//  	if (a<2)
//  {
//    printf("\nSorry you have entered the wrong username and password for four times!!!");
//    getch();
//    }
//    system("cls");  
}//****************************************************************************************************
int main()
{
  	int i=0;
  	login();
    FILE *fp, *ft;         // file pointers
    char another, choice; // structure that represent a employee
    struct emp
    {
        char name[40]; ///name of employee
        int age; /// age of employee
        char address[20];//address of employee
        float bs; /// basic salary of employee
    };
    struct emp e; /// structure variable creation
    char empname[40]; /// string to store name of the employee
    long int recsize; /// size of each record of employ /*open the file in binary read and write mode. if the file EMP.DAT already exists then it open that file in read write mode. if the file doesn't exit it simply create a new copy*/
    fp = fopen("EMP.DAT","rb+");
    if(fp == NULL)
    {
        fp = fopen("EMP.DAT","wb+");
        if(fp == NULL)
        {
            printf("can not open file");
            exit(1);
        }
    	} // sizeo of each record i.e. size of structure variable e
        printf("Your choice: "); /// enter the choice 1, 2, 3, 4, 5
        fflush(stdin); /// flush the input buffer
        choice  = getche(); /// get the input from keyboard
        switch(choice)
        {
        case '1':  /// if user press 1
            system("cls");
            fseek(fp,0,SEEK_END); /// search the file and move cursor to end of the file
            /// here 0 indicates moving 0 distance from the end of the file
            another = 'y';
            while(another == 'y')  /// if user want to add another record
            {
                printf("\nEnter name: ");
                scanf("%s",&e.name);
                printf("\nEnter age: ");
                scanf("%d",&e.age);
                printf("\nEnter address:");
                scanf("%s",&e.address);
                printf("\nEnter basic salary: ");
                scanf("%f",&e.bs);   // write the record in the file
                printf("\nAdd another record(y/n)");
                fflush(stdin);
                another = getche();
            }
            break;
        case '2':
            system("cls");
            printf("Empoyee's store list (name, age, address, salary)");
            rewind(fp); ///this moves file cursor to start of the file
            while(fread(&e,recsize,1,fp)==1)  /// read the file and fetch the record one record per fetch
            {
                printf("\n\n%s \t\t%d \t%s \t%.2f",e.name,e.age,e.address,e.bs); /// print the name, age and basic salary
            }
            getch();
            break;
		case '3':  /// if user press 3 then do editing existing record
            system("cls");
            another = 'y';
            while(another == 'y')
            {
                printf("Enter the employee's name to modify: ");
                scanf("%s", &empname);
                rewind(fp);
                while(fread(&e,recsize,1,fp)==1)  /// fetch all record from file
                {
                    if(strcmp(e.name,empname) == 0)  ///if entered name matches with that in file
                    {
                        printf("\nEnter new name,age,address and bs: ");
                        scanf("%s%d%s%f",&e.name,&e.age,&e.address,&e.bs);
                        fseek(fp,-recsize,SEEK_CUR); /// move the cursor 1 step back from current position
                        fwrite(&e,recsize,1,fp); /// override the record
                        break;
                    }
                }
                printf("\nModify another record(y/n)");
                fflush(stdin);
                another = getche();
            }
            break;
        case '4':
            system("cls");
            another = 'y';
            while(another == 'y')
            {
                printf("\nEnter name of employee to delete: ");
                scanf("%s",&empname);
                ft = fopen("Temp.dat","wb");  /// create a intermediate file for temporary storage
                rewind(fp); /// move record to starting of file
                while(fread(&e,recsize,1,fp) == 1)  /// read all records from file
                {
                    if(strcmp(e.name,empname) != 0)  /// if the entered record match
                    {
                        fwrite(&e,recsize,1,ft); /// move all records except the one that is to be deleted to temp file
                    }
                }
                fclose(fp);
                fclose(ft);
                remove("EMP.DAT"); /// remove the orginal file
                rename("Temp.dat","EMP.DAT"); /// rename the temp file to original file name
                fp = fopen("EMP.DAT", "rb+");
                printf("Delete another record(y/n)");
                fflush(stdin);
                another = getche();
            }
            break;
        case '5':
            fclose(fp);  /// close the file
            exit(0); /// exit from the program
        }
    return 0;
}

/*functions which we used in project:
1. variable global and local
2. selection case(if/else and switch)
3. *******nested if**********************
4. loop(for,while,do/while loop)
5. *******nested loop********************
6. Function(use argument as normal, use argument as pointer), void function, return function.
7. *******recursion function*************
8. Array(1 and 2D)
9. ********Array of pointer**************
10.********File(w,a,r)*******************
11.Structure
12.*********Structure use as pointer*****
13.******typedef structure***************
14.*******constant***********************
15.*********enumeration******************
16.*********malloc***********************
*/

/* ==>food payment
==>travel payment
==>attendance list
==>ID, age, name,adresse,sex,salary,position
==>bonus
==>table of employee statistic(chart table) 
==>store information into file handling.*/










