#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int flag=1;
char i,j=0,temp[100];
clrscr();
printf("Enter the sentence(add '$' at the end)::\n\n");
while(getchar()!='$')
{
if(i==' ')
i='j';
else if(i=='\t')
i='"';
else if(i=='\n')
flag++;
temp[j++]=i;
}
temp[j]=NULL;
printf("\n\nAltered sentence::\n\n");
puts(temp);
printf("\n\nNo.of lines=%d",flag);
getch();
}

