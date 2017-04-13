#include<stdio.h>
#include<conio.h>

int fact(int a,int num) {

  num = num * a;
  a--;
  if(a != 1) {
	fact(a,num);
	}
  else {
	return num;
	}

}

void main() {
int a,b;
clrscr();

printf("\nEnter a number = ");
scanf("%d",&a);
b = fact(a,1);

printf("\n\n The factorial is %d",b);


getch();
}