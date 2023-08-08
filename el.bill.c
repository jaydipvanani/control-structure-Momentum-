#include<stdio.h>

void main()
{
	int unit,bill,subcharge,total;
	
	/*
		Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
		For first 50 units Rs. 0.50/unit
		For next 100 units Rs. 0.75/unit
		For next 100 units Rs. 1.20/unit
		For unit above 250 Rs. 1.50/unit
		An additional surcharge of 20% is added to the bill.
	*/
	printf("WELCOME ELECTRICITY BILL\n");
	printf("ENTER USING UNIT: ");
	scanf("%d" ,&unit);
	
	if(unit<=50)
	{
		bill=unit*1/2;
	}
	else if (unit<=150)
	{
		bill=((unit-50)*0.75)+25;
	}
	else if (unit<=250)
	{
		bill=((unit-150)*1.20)+100;
	}
	else
	{
		bill=((unit-250)*1.50)+220;
	}
	
	subcharge=bill*0.20;
	total=bill+subcharge;
	
	printf("%d",total);
	
	
	
}
