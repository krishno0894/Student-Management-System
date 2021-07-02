#include <stdio.h>
#include <string.h>
#include<windows.h>
// Structure to store the student-
struct sinfo
{
    char name[50],roll[20];
    int mark1,mark2,mark3,mark4,mark5,mark6,totalmarks,sum;
    float avg,div,p,grade;
    float cgpa;
} st[100];

int t=0;// Variable to keep track of

// Function to add the student-
void add_student()
{
    system("COLOR 02");
    system("cls");
    printf("\n\n\t\t\t\t---------------------------------------------\n");
    printf("\t\t\t\t|            Add Student Details            |\n");
    printf("\t\t\t\t---------------------------------------------\n");
    printf("\n\n");
    printf("\t\tEnter Name: ");
    fflush(stdin);
    gets(st[t].name);
    printf("\t\tEnter Roll: ");
    scanf("%s", st[t].roll);
    t++;
    system("COLOR 02");
    printf("\n\n\t\t\t\t\tInformation Added Successfully\n\n");
    system("pause");
    system("cls");
}

// Function to find the student-
void search_st()
{
    system("cls");
    printf("\n\n\t\t\t\t---------------------------------------------\n");
    printf("\t\t\t\t|         Search Student Details            |\n");
    printf("\t\t\t\t---------------------------------------------\n");
    printf("\n\n");
    char x[20];
    int j,i;
    printf("\n\t\tRoll number of the student: ");
    scanf("%s", x);
    for (j=0; j <t; j++)
    {
        if (strcmp(x,st[j].roll)==0)

        {
            printf("\n\t\tThe Students Details\n");
            printf("\t\t----------------------------------------\t\t\n");
            printf("\n\t\tStudent Name: %s\n",st[j].name);
            printf("\t\tThe GPA is:%.2f\n",st[j].grade);
            printf("\t\tMarks of Bangla: %d\n",st[j].mark1);
            printf("\t\tMarks of English: %d\n",st[j].mark2);
            printf("\t\tMarks of Math: %d\n",st[j].mark3);
            printf("\t\tMarks of Ict: %d\n",st[j].mark4);
            printf("\t\tMarks of Religion: %d\n",st[j].mark5);
            printf("\t\tMarks of Social Studies: %d\n",st[j].mark6);
            break;
        }

    }
    printf("\n\n\t\t");
    system("pause");
    system("cls");
}
//adding marks-
void add_marks()
{
    system("cls");
    printf("\n\n\t\t\t\t---------------------------------------------\n");
    printf("\t\t\t\t|            Add Exam Marks                 |\n");
    printf("\t\t\t\t---------------------------------------------\n");
    printf("\n\n");
    char x[20];
    float avg,div,p,g1,g2,g3,g4,g5,g6;
    int totalmarks=600,sum=0;
    int j,i;
    printf("\n\t\tRoll number of the student: ");
    scanf("%s",x);
    for(j=0; j<t; j++)
    {
        if(strcmp(x,st[j].roll)==0)
        {
            printf("\n\t\t\tEnter marks of Bangla: ");
            scanf("%d",&st[j].mark1);
            if(st[j].mark1>=80 && st[j].mark1<=100)
            {
                g1=5.00;
            }
            else if(st[j].mark1>=70 && st[j].mark1<=79)
            {
                g1=4.00;
            }
            else if(st[j].mark1>=60 && st[j].mark1<=69)
            {
                g1=3.50;
            }
            else if(st[j].mark1>=50 && st[j].mark1<=59)
            {
                g1=3.00;
            }
            else if(st[j].mark1>=40 && st[j].mark1<=49)
            {
                g1=2.00;
            }
            else if(st[j].mark1>=33 && st[j].mark1<=39)
            {
                g1=1.00;
            }
            else if(st[j].mark1>=0 && st[j].mark1<32.0)
            {
                g1=0;
            }
            printf("\t\t\tEnter marks of English: ");
            scanf("%d",&st[j].mark2);
            if(st[j].mark2>=80 && st[j].mark2<=100)
            {
                g2=5.00;
            }
            else if(st[j].mark2>=70 && st[j].mark2<=79)
            {
                g2=4.00;
            }
            else if(st[j].mark2>=60 && st[j].mark2<=69)
            {
                g2=3.50;
            }
            else if(st[j].mark2>=50 && st[j].mark2<=59)
            {
                g2=3.00;
            }
            else if(st[j].mark2>=40 && st[j].mark2<=49)
            {
                g2=2.00;
            }
            else if(st[j].mark2>=33 && st[j].mark2<=39)
            {
                g2=1.00;
            }
            else if(st[j].mark2>=0 && st[j].mark2<32)
            {
                g2=0;
            }
            printf("\t\t\tEnter marks of Math: ");
            scanf("%d",&st[j].mark3);
            if(st[j].mark3>=80 && st[j].mark3<=100)
            {
                g3=5.00;
            }
            else if(st[j].mark3>=70 && st[j].mark3<=79)
            {
                g3=4.00;
            }
            else if(st[j].mark3>=60 && st[j].mark3<=69)
            {
                g3=3.50;
            }
            else if(st[j].mark3>=50 && st[j].mark3<=59)
            {
                g3=3.00;
            }
            else if(st[j].mark3>=40 && st[j].mark3<=49)
            {
                g3=2.00;
            }
            else if(st[j].mark3>=33 && st[j].mark3<=39)
            {
                g3=1.00;
            }
            else if(st[j].mark3>=0 && st[j].mark3<32.0)
            {
                g3=0;
            }
            printf("\t\t\tEnter marks of ICT: ");
            scanf("%d",&st[j].mark4);
            if(st[j].mark4>=80 && st[j].mark4<=100)
            {
                g4=5.00;
            }
            else if(st[j].mark4>=70 && st[j].mark4<=79)
            {
                g4=4.00;
            }
            else if(st[j].mark4>=60 && st[j].mark4<=69)
            {
                g4=3.50;
            }
            else if(st[j].mark4>=50 && st[j].mark4<=59)
            {
                g4=3.00;
            }
            else if(st[j].mark4>=40 && st[j].mark4<=49)
            {
                g4=2.00;
            }
            else if(st[j].mark4>=33 && st[j].mark4<=39)
            {
                g4=1.00;
            }
            else if(st[j].mark4>=0 && st[j].mark4<32)
            {
                g4=0;
            }
            printf("\t\t\tEnter marks of Religious Studies: ");
            scanf("%d",&st[j].mark5);
            if(st[j].mark5>=80 && st[j].mark5<=100)
            {
                g5=5.00;
            }
            else if(st[j].mark5>=70 && st[j].mark5<=79)
            {
                g5=4.00;
            }
            else if(st[j].mark5>=60 && st[j].mark5<=69)
            {
                g5=3.50;
            }
            else if(st[j].mark5>=50 && st[j].mark5<=59)
            {
                g5=3.00;
            }
            else if(st[j].mark5>=40 && st[j].mark5<=49.0)
            {
                g5=2.00;
            }
            else if(st[j].mark5>=33 && st[j].mark5<=39)
            {
                g5=1.00;
            }
            else if(st[j].mark5>=0 && st[j].mark5<32)
            {
                g5=0;
            }
            printf("\t\t\tEnter marks of Social Studies: ");
            scanf("%d",&st[j].mark6);
            if(st[j].mark6>=80 && st[j].mark6<=100)
            {
                g6=5.00;
            }
            else if(st[j].mark6>=70 && st[j].mark6<=79)
            {
                g6=4.00;
            }
            else if(st[j].mark6>=60 && st[j].mark6<=69)
            {
                g6=3.50;
            }
            else if(st[j].mark6>=50 && st[j].mark6<=59)
            {
                g6=3.00;
            }
            else if(st[j].mark6>=40 && st[j].mark6<=49)
            {
                g6=2.00;
            }
            else if(st[j].mark6>=33 && st[j].mark6<=39)
            {
                g6=1.00;
            }
            else if(st[j].mark6>=0 && st[j].mark6<32)
            {
                g6=0;
            }
            printf("\n\n\t\t\tTotal Marks: %d\n",totalmarks);
            sum=st[j].mark1+st[j].mark2+st[j].mark3+st[j].mark4+st[j].mark5+st[j].mark6;
            printf("\n\n\t\t\tObtained marks=%d",sum);
            st[j].avg=sum/6.0;
            printf("\n\t\t\tAverage=%0.2f",st[j].avg);
            p=(sum*100.0)/600.0;//percentage of total marks
            printf("\n\t\t\tPercentage=%0.2f",p);
            st[j].grade=(g1+g2+g3+g4+g5+g6)/6.0;
            printf("\n\t\t\tGPA: %.2f", st[j].grade);
            printf("\n\n\t\tEXAM MARKS ADDED.\n\n");
            break;
        }
    }
    system("pause");
    system("cls");
}

// Function to update a students data-
void up_s()
{
    system("cls");
    printf("\n\n\t\t\t\t---------------------------------------------\n");
    printf("\t\t\t\t|         Update Student Details            |\n");
    printf("\t\t\t\t---------------------------------------------\n");
    printf("\n\n");
    printf("\n");
    printf("\n\t\tRoll number of the student: ");
    char x[20];
    scanf("%s", x);
    int j;
    for (j =0; j<t; j++)
    {
        if (strcmp(x,st[j].roll)==0)
        {
            printf("\n\t\t1. Update Name\n"
                   "\t\t2. Update Roll no\n");
            int z,n;
            printf("\n\t\t");
            scanf("%d", &z);
            switch (z)
            {
            case 1:
                printf("\n\t\tEnter Name: ");

                scanf("%s",st[j].name);
                printf("\n\t\t\tContinue Editing:"
                       "\n\t\t\t\t1. Yes"
                       "\n\t\t\t\t2. No\n\n");
                printf("\t\t");
                scanf("%d",&n);
                if(n==2)break;
            case 2:
                printf("\n\t\tEnter roll: ");
                scanf("%s",st[j].roll);
                printf("\n\t\tContinue Editing:"
                       "\n\t\t\t1. Yes"
                       "\n\t\t\t2. No\n\n");
                printf("\t\t");
                scanf("%d",&n);
                if(n==2)break;
            }
            printf("\n\t\tUPDATED SUCCESSFULLY.\n");
            break;
        }
    }
       system("pause");
       system("cls");
}

//GPA and grade
void gpa_student()
{
    system("cls");
    printf("\n\n\t\t\t\t---------------------------------------------\n");
    printf("\t\t\t\t|   Add Exam Marks For Count For GPA        |\n");
    printf("\t\t\t\t---------------------------------------------\n");
    printf("\n\n");
    char x[20];
    int j;
    printf("\n\t\tRoll number of the student: ");
    scanf("%s",x);
    for(j=0; j<t; j++)
    {
        if (strcmp(x,st[j].roll)==0)
            printf("\n\t\t\tGPA: %.2f\n",st[j].grade);
        if(st[j].grade==5)
        {
            printf("\n\t\t\tGrade: A+\n");
        }
        else if(st[j].grade>4 && st[j].grade<=4.9)
        {
            printf("\n\t\t\tGrade: A\n");
        }
        else if(st[j].grade>3 && st[j].grade<=3.5)
        {
            printf("\n\t\t\tGrade: A-\n");
        }
        else if(st[j].grade>2.5 && st[j].grade<=3)
        {
            printf("\n\t\t\tGrade: B\n");
        }
        else if(st[j].grade>2 && st[j].grade<=2.5)
        {
            printf("\n\t\t\tGrade: C\n");
        }
        else if(st[j].grade>1 && st[j].grade<=2)
        {
            printf("\n\t\t\tGrade: D\n");
        }
        else if(st[j].grade>0 && st[j].grade<=1)
        {
            printf("\n\t\t\tGrade: F\n");
        }

        else printf("\n\t\t\tGPA Unvailable");

    }
    system("pause");
}
//function to delete student-
void delete_student()
{
    system("cls");
    printf("\n\n\t\t\t\t---------------------------------------------\n");
    printf("\t\t\t\t|          Delete Student Details           |\n");
    printf("\t\t\t\t---------------------------------------------\n");
    printf("\n\n");
    char q[20];
    printf("\n\t\tRoll Number of the student: ");
    scanf("%s",q);
    int i;
    for(i=0; i<t; i++)
    {
        if(strcmp(q,st[i].roll)==0)
        {
            int j;
            for(j=i; j<t-1; j++)
            {
                st[j]=st[j+1];
            }
            printf("\n\n\t\t\t\tDELETE SUCCESSFULLY\n\n");
            t--;
            break;
        }
        else
        {
            printf("\n\t\t\t\tNOT FOUND!!!\n\n");
        }
    }
    system("pause");
    system("cls");
}
//function for all student information
void all_students()
{
    system("cls");
    printf("\n\n\t\t\t\t---------------------------------------------\n");
    printf("\t\t\t\t|         All Students Details              |\n");
    printf("\t\t\t\t---------------------------------------------\n");
    printf("\n\n");
    int i,count=0;
    for(i=0; i<t; i++)
    {
        printf("\n\t\t\t%d. Name: %s\n\t\t\t   Roll: %s\n\t\t\t   GPA: %.2f\n",i+1,st[i].name,st[i].roll,st[i].grade);
        count++;
    }
    printf("\n\t\tTotal Students= %d\n",count);
    printf("\n\n");
    system("pause");
}
// Driver code-
int main()

{

    system("COLOR 0A");
    system("cls");
    printf("\n\n\t\t\t\t*********************************************\n");
    printf("\t\t\t\t*                                           *\n");
    printf("\t\t\t\t*                 Student                   *\n");
    printf("\t\t\t\t*                                           *\n");
    printf("\t\t\t\t*                Management                 *\n");
    printf("\t\t\t\t*                                           *\n");
    printf("\t\t\t\t*                  System                   *\n");
    printf("\t\t\t\t*                                           *\n");
    printf("\t\t\t\t*********************************************\n");
    printf("\n\n");
    system("pause");
    int  choice,x=14486,y=14472,z=14466,r=14480,n;
    printf("\n\t\t\t\t---------------------------------------------\n");
    printf("\t\t\t\t");
    printf("\t\tEnter Password: ");
    scanf("%d",&n);
    system("COLOR 06");
    system("cls");
    if(n==x||n==y||n==z||n==r)
        for(;;)
        {
            printf("\n\t\t\t\t-------------------------------------------------\n");
            printf("\t\t\t\t        The Task that you want to perform         \n");
            printf("\n\t\t\t\t-------------------------------------------------\n");
            printf("\n\n\t\t1. Add the Student Information\n");
            printf("\n\t\t2. Add Exam marks\n");
            printf("\n\t\t3. Find GPA\n");
            printf("\n\t\t4. Search Student Info\n");
            printf("\n\t\t5. Update Student Info\n");
            printf("\n\t\t6. Delete the Students Info\n");
            printf("\n\t\t7. All Students Info\n");
            printf("\n\t\t8. To Exit\n");
            printf("\n\n\t\tEnter Category: ");
            scanf("%d", &choice);

            switch (choice)
            {
            case 1:
                add_student();
                break;
            case 2:
                add_marks();
                break;
            case 3:
                gpa_student();
                break;
            case 4:
                search_st();
                break;
            case 5:
                up_s();
                break;
            case 6:
                delete_student();
                break;
            case 7:
                all_students();
                break;
            case 8:
                exit(0);
                break;
            }
        }

    else
    {
        system("cls");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_RED);
        printf("\n\n\n\n\n\t\t\t\t\t                             \n");
        printf("\t\t\t\t\t Your password is incorrect!!\n");
        printf("\t\t\t\t\t                             \n");
        printf("\n\n");
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_GREEN&BACKGROUND_BLUE&BACKGROUND_RED&BACKGROUND_INTENSITY);
    return 0;
}



