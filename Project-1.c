#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct library
{
char bk_name[30];
char author[30];
int pages;
float price;
};

int main()
{
struct library l[100];
char ar_nm[30],bk_nm[30];
int p,q, keepcount;
p=q=keepcount = 0;

while(q!=6)
{
printf("\n\n1. Add book information\n2. Display book information\n");
printf("3. List all books of given author\n");
printf("4. List the title of specified book\n");
printf("5. List the count of books in the library\n");
printf("6. Exit");

printf ("\n\nEnter one of the above : ");
scanf("%d",&q);

switch (q)
{
/* Add book */
case 1:

printf ("Enter book name = ");
scanf ("%s",l[p].bk_name);

printf ("Enter author name = ");
scanf ("%s",l[p].author);

printf ("Enter pages = ");
scanf ("%d",&l[p].pages);

printf ("Enter price = ");
scanf ("%f",&l[p].price);
keepcount++;

break;
case 2:
printf("you have entered the following information\n");
for(p=0; p<keepcount; p++)
{
printf ("book name = %s",l[p].bk_name);

printf ("\t author name = %s",l[p].author);

printf ("\t  pages = %d",l[p].pages);

printf ("\t  price = %f",l[p].price);
}
break;

case 3:
printf ("Enter author name : ");
scanf ("%s",ar_nm);
for (p=0; p<keepcount; p++)
{
if (strcmp(ar_nm, l[p].author) == 0)
printf ("%s %s %d %f",l[p].bk_name,l[p].author,l[p].pages,l[p].price);
}
break;

case 4:
printf ("Enter book name : ");
scanf ("%s",bk_nm);
for (p=0; p<keepcount; p++)
{
if (strcmp(bk_nm, l[p].bk_name) == 0)
printf ("%s \t %s \t %d \t %f",l[p].bk_name,l[p].author,l[p].pages,l[p].price);
}
break;

case 5:
printf("\n No of books in library : %d", keepcount);
break;
case 6:
exit (0);

}
}
return 0;

}
