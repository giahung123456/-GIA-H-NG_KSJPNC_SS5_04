#include<stdio.h>
 main(){
 	int n,s,i=1;
 	
	 printf("nhap:");
 		scanf("%d",&n);
 	do{
 		
 	s=n*i;
	 printf ("%d*%d==%d\n",n,i,s);
 	i++;	
	 }
	 while( i!=11);
	
 }