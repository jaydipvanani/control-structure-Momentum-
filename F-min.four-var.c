#include<stdio.h>

main()
{
	int a,b,c,d;
	
	printf("Enter the value of A :- ");
	scanf("%d",&a);
	printf("Enter the value of B :- ");
	scanf("%d",&b);
	printf("Enter the value of C :- ");
	scanf("%d",&c);
	printf("Enter the value of D :- ");
	scanf("%d",&d);
	
	
		 if(a<b)
		 {
		 	if(a<c)
		 	{
		 		if(a<d)
				 {
				 	printf("a is minimum ");
				 }
				 else
				 {
				 	printf("d is minimum ");
				 }	
			 }
			 else
			 {
			     if(c>d)
			     {
			     	printf("c is minimum ");
				 }
				 else
				 {
				 	printf("d is minimum ");
				 }
			 }
		 }
		 else
		 {
		 	if(b<c)
			 {
		 		if(b<d)
		 		{
		 			printf("b is minimum ");
				 }
				 else
				 {
				 	printf("d is minimum ");
				 }
			 }
			 else
			 {
			 	if(c<d)
			 	{
			 		printf("c is minimum ");
				 }
				 else
				 {
				 	printf("d is minimum ");
				 }
			 }	
		 }
		 
}
