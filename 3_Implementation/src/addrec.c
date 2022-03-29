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

void add_a_record()
{
    int i;
    struct Stu s;
    int size;
    FILE *fp;
    size=sizeof(s);
    fp=fopen("MINI_PROJECT_IN_C.DAT","ab");
    printf("\nenter roll no for record\n");
    scanf("%d",&s.rollno);
    printf("enter nm\n");
    scanf("%s",s.nm);
    printf("enter age\n");
    scanf("%d",&s.age);
    printf("enter math marks\n");
    scanf("%d",&s.math);
    printf("enter phy marks\n");
    scanf("%d",&s.phy);
    printf("enter chm marks\n");
    scanf("%d",&s.chm);
    s.sum=s.math+s.phy+s.chm;
    s.avg=s.sum/3;
    fwrite(&s,size,1,fp);
    fclose(fp);
    printf("\nrecord successfully added");
}
