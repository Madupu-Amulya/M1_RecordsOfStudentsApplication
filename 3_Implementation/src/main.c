#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#include "addrec.h"
#include "pass.h"
#include "display.h"
#include "rec.h"
#include "delrec.h"
#include "marks.h"
#include "modify.h"
#include "chgpwd.h"
int main()
{
    void add_a_record();
    void password_check();
    void display_all_records();
    void record();
    void delete_a_record();
    void display_marksheet();
    void modify_a_record();
    void changepassword_check();
    int a;
    printf("\n--------------------------------------------");
    printf("\n Student details\n");
    printf("\n--------------------------------------------");
    while(1)
    {
        printf("\n----------------------");
        printf("\nchoose an option below");
        printf("\n----------------------");
        printf("\n1)add a record");
        printf("\n2)delete a record");
        printf("\n3)modify a record");
        printf("\n4)generate marksheet");
        printf("\n5)search a record");
        printf("\n6)display all records");
        printf("\n7)change password");
        printf("\n8)sexit");
        printf("\n----------------------\n");
        scanf("%d",&a);
        switch (a)
        {
            case 1:
            {
                password_check();
                add_a_record();
                break;
            }
            case 2:
            {
                delete_a_record();
                break;
            }
            case 3:
            {
                modify_a_record();
                break;
            }
            case 4:
            {
                display_marksheet();
                break;
            }
            case 5:
            {
                record();
                break;
            }
            case 6:
            {
                display_all_records();
                break;
            }
            case 7:
            {
                changepassword_check();
                break;
            }
            case 8:
            {
                exit(0);
            }
        }
    }
}