#include<stdio.h>
#include<stdlib.h>

void input(int*p)     //For taking input from user

{

	int i;

	for(i=0; i<=5; i++)

		scanf("%d", (p+i));

}

void display(int*p)  //For displaying numbers

{

	int i;

	for(i=0; i<=5; i++)

		printf("%d", *(p+i));

}


void lineChange(int*p)

{

	printf("\n");

}



void sort(int*p)

{

	int round,t,i;    //Here t is for swapping

	for(round=0;round<=5;round++)

	{

		for(i=0; i<=5; i++)

			if(*(p+i)>*(p+i+1))

			{

				t = *(p+i);

				*(p+i) = *(p+i+1);

				*(p+i+1) = t;

			}

	}

}

#include<stdio.h>

int main()

{

	int a[6];

	printf("Enter six numbers :\n");

	input(a);

	display(a);

	lineChange(a);

	sort(a);

	display(a);

	return 0;

}
