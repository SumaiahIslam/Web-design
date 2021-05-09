#include<stdio.h>

   struct StudentData{

        char stdID[20];
        char Name[20];
        char CurrentSem[20];
        char Semester[20];
        float CGPA;


    }student[100];

    int main()

    {
        int i,j,n=3;

        for(i=0;i<n;i++)
        {
        printf("Enter student id:\n");
        scanf("%s",&student[i].stdID);

        printf("Enter student Name:\n");
        scanf("%s",&student[i].Name);

        printf("Enter CurrentSemester:\n");
        scanf("%s",&student[i].CurrentSem);

        printf("Enter Semester:\n");
        scanf("%s",&student[i].Semester);

        printf("Enter CGPA:\n");
        scanf("%f",&student[i].CGPA);
        }

        for(i=0; i<n; i++){

        printf("output:\n");
        printf("student id: %s\n",student[i].stdID);
        printf("student name: %s\n",student[i].Name);
        printf("current semester: %s\n",student[i].CurrentSem);
        printf("semester-%s cgpa-%.2f\n",student[i].Semester,student[i].CGPA);

        }
        return 0;

    }

