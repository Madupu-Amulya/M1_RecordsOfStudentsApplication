#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

struct Stu
{
    int age,rollno,math,phy,chm,sum;
    char nm[10];
    float avg;
};
void display_marksheet()
{
    FILE *fp;
    struct Stu s;
    int id,found=0;
    fp=fopen("MINI_PROJECT_IN_C.DAT","rb");
    printf("\nEnter the student roll no:");
    scanf("%d",&id);
    while(1)
    {
        fread(&s,sizeof(s),1,fp);
        if(feof(fp))
        {
            break;
        }
        if(s.rollno==id)
        {
            found=1;
            printf("\n========================================================\n\n");
            printf("\t\t Student Marksheet of %d\n\n",s.rollno);
            printf("========================================================\n\n");
            printf("rollno:%d\t",s.rollno);
            printf("nm:%s\t",s.nm);
            printf("math:%d\t",s.math);
            printf("phy:%d\t",s.phy);
            printf("chm:%d\t",s.chm);
            printf("sum:%d\t",s.sum);
            printf("average:%2f\n",s.avg);
            printf("========================================================\n\n");
        }
    }
    if(found==0)
    {
        printf("\nSorry No Record Found");
    }
    fclose(fp);
}

