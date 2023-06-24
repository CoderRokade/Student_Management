// C program for the implementation of
// menu driven program for 

// student management system

#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#include<float.h>


// This is where i track the record of number of student enterd this 
// information
// why I declare i as globle variable --> so that i can 
// excess it from anywhere and able to make updation on number of student 

int i=0;

struct studentinformation
{
    char firstname[30];
    char lastname[30];
    // if i want to store roll number of more than 1 student i can 
    // use array here but that require file to store the data of each 
    // and every student having differnt roll number

    int rollno;
    float cgpa;
    // even we take mobile number of 10 digits it must be starting with
    // either 1 or 2 long store 10 digit starts with 2
    int mobilenumb;
    /* data */
}st[50];

void addinfo(){
    i = i+1;
    printf("\n");
    printf("----------------------------------\n");
    printf("Add the new student detail \n");
    printf("----------------------------------\n");

    printf("Add firstname of student -->\n");
    scanf("%s",st[i].firstname);
    printf("Give last name of student -->\n");
    scanf("%s",st[i].lastname);
    printf("Add rollno of student -->\n");
    scanf("%d",&st[i].rollno);
    printf("Add CGPA of student -->\n");
    scanf("%f", &st[i].cgpa);
    printf("Add mobilenumber of student -->\n");
    scanf("%d",&st[i].mobilenumb);
}

// in this function we find the student info/detail by rollno
void finddetbyroll(){
    printf("Enter a roll number \n");
    int num;
    scanf("%d",&num);

    for(int j=1;j<=i;j++){
        if(num==st[j].rollno){
            printf("The Students Details are\n");
            printf("\n");
            printf("First name of student whoose roll num is %d%s \n", num,"\t", st[j].firstname);
            // printf("%s\n",st[j].firstname);
            printf("Last name of student is %s\n", st[j].lastname);
            printf("Cgpa of student is %f\n", st[j].cgpa);
            printf("Mobile number of student is %d\n", st[j].mobilenumb);
            printf("\n");
            printf("----------------------------------\n");
        }
    }

}

// Here we find the student details by his/her first name

void findname(){
    printf("Enter a first name of student \n");
    char inputname[50];

    scanf("%s", inputname);
    
    for(int j=0;j<=i;j++){
        if (!strcmp(inputname,st[j].firstname)) {
            printf("The Students Details are\n");

            printf("\n");
            printf(" Students roll num is %d\n", st[j].rollno);
            
            printf("Last name of student is %s\n", st[j].lastname);
            printf("Cgpa of student is %f\n", st[j].cgpa);
            printf("Mobile number of student is %d\n", st[j].mobilenumb);
            printf("\n");
            printf("----------------------------------\n");
        }
    }
}

// We find information of student by using last name

void findlastname()
{
    printf("\n");
    printf("----------------------------------\n");
    printf("Enter a last name of student \n");
    char inputlastname[50];

    scanf("%s", &inputlastname);

    for (int j = 1; j <= i; j++)
    {
        if (!strcmp(inputlastname ,st[j].lastname))
        {
            printf("The Students Details are as follow:-\n");
            printf("\n");
            printf("First name of student is --> %s\n", st[j].firstname);
            printf("Students roll num is --> %d\n", st[j].rollno);
            printf("Cgpa of student is -->%f\n", st[j].cgpa);
            printf("Mobile number of student is -->%d\n", st[j].mobilenumb);
            printf("\n");
            printf("----------------------------------\n");
        }
    }
}

// we find information of student by moblienumnber

void finddetbymobno()
{
    printf("\n");
    printf("----------------------------------\n");
    printf("Enter a mobile number \n");
     int num;
    scanf("%d", &num);

    for (int j = 1; j <= i; j++)
    {
        if (num == st[j].mobilenumb)
        {
            printf("The Students Details are :-\n");
            printf("\n");
            printf("First name of student is -->%s\n", st[j].firstname);
            printf("Last name of student is --> %s\n", st[j].lastname);
            printf("Roll number of student is --> %d\n", st[j].rollno);
            printf("Cgpa of student is -->%f\n", st[j].cgpa);
            printf("Mobile number of student is -->%d\n", st[j].mobilenumb);
            printf("\n");
            printf("----------------------------------\n");
        }
    }
}

// find out how many student fill their information

void numstd(){
    int infofill = i;
    int rem = 50 - infofill;
    printf("\n");
    printf("----------------------------------\n");
    printf("The number of Students who added their info are -->%d\n", i);
    // printf("\n");
    // // printf();   
    // printf("\n");
    printf("The number of Students who can still potentially fill info are %d\n", rem);

    printf("\n");
    printf("----------------------------------\n");
}
// roll number do jiss student ka information delete krna h uska
void deleteroll(){
    int roll;
    printf("Enter a roll number \n");

    scanf("%d",&roll);
    
    for(int j=1;j<=i;j++){
        if(roll == st[j].rollno){
            for(int k=j;k<49;k++){
                st[k] = st[k+1];
                break;
            }

        }
    }
    i--;
    printf("\n");
    printf("----------------------------------\n");
}

void up_s()
{
    printf("\n");
    printf("----------------------------------\n");
    printf("Enter the roll number to update the entry :- \n ");
    printf("\n");
    int x;
    scanf("%d", &x);
    for (int j = 1; j < i; j++)
    {
        if (st[j].rollno == x)
        {
            printf("\n");
            printf("1. first name\n"
                   "2. last name\n"
                   "3. roll no.\n"
                   "4. CGPA\n"
                   "5. mobileno\n");
            printf("\n");
            int z;
            scanf("%d", &z);
            switch (z)
            {
            case 1:
                printf("Enter the new "
                       "first name : \n");
                scanf("%s", st[j].firstname);
                break;
            case 2:
                printf("Enter the new "
                       "last name : \n");
                scanf("%s", st[j].lastname);
                break;
            case 3:
                printf("Enter the new "
                       "roll number : \n");
                scanf("%d", &st[j].rollno);
                break;
            case 4:
                printf("Enter the new CGPA : \n");
                scanf("%f", &st[j].cgpa);
                break;
            case 5:
                printf("Enter the new mobileno \n");
                scanf(
                    "%d", &st[j].mobilenumb );
                break;
            }
           
        }
    }
    printf("\n");
    printf("----------------------------------\n");
}

void main()

{
    bool yes = true;
    int choice, count;
    while (yes)
    {
        printf("\n");
        printf("The Task that you "
               "want to perform\n");
               printf("\n");
        printf("1. Add the Student Details\n");
        printf("2. Find the Student "
               "Details by Roll Number Id\n");
        printf("3. Find the Student "
               "Details by First Name Id\n");
        printf("4. Find the Student "
               "Details by last name Id\n");
        printf("5. Find the Student "
               "Details by mobile number Id\n");
        printf("6. Find the Total number"
               " of Students\n");
        printf("7. Delete the Students Details"
               " by Roll Number Id\n");
        printf("8. Update the Students Details"
               " by Roll Number Id\n");
        printf("9. To Exit\n");
        printf("\n");
        
        printf("Enter your choice to "
               "find the task\n");
        
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            addinfo();
            break;
        case 2:
            finddetbyroll();
            break;
        case 3:
            findname();
            break;
        case 4:
            findlastname();
            break;
        case 5:
            finddetbymobno();
            break;
        case 6:
            numstd();
            break;
        case 7:
            deleteroll();
            break;
        case 8:
            up_s();
            break;
        case 9:
            exit(0);
        }
        printf("\n");
        printf("----------------------------------\n");
    }
}
