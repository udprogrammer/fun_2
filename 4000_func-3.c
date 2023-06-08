#include<stdio.h>

calc(n){	
	int i,a,b;
	do{
		printf("Enter your choice  = ");
	    scanf("%d",&n);
		if(n==6){
			printf("Exit....");
		}
		else if(n>6){
			printf("Plz Enter proper number");
		}
		else if (n<6){
				printf("Enter a = ");
	            scanf("%d",&a);
	            printf("Enter b = ");
	            scanf("%d",&b);
			switch(n){
				case 1:
					printf("Addition = %d + %d = %d\n",a,b,a+b);
					break;
				case 2:
					printf("Substraction = %d - %d = %d\n",a,b,a-b);
					break;
	            case 3:
					printf("Multiplication = %d * %d = %d\n",a,b,a*b);
					break;
				case 4:
					printf("Divison = %d / %d = %d\n",a,b,a/b);
					break;
				case 5:
					printf("Moduls = %d %d = %d\n",a,b,a%b);
					break;	
					
				default:
					printf("Enter valid value...!");
			}
		}	
	}while(n<6);
}
main(){
	 
	int n;
	printf("Enter press 1 for Addition\n");
	printf("Enter press 2 for Substraction\n");
	printf("Enter press 3 for Multiplication\n");
	printf("Enter press 4 for Divison\n");
	printf("Enter press 5 for Moduls\n");
	printf("Enter press 6 for Exit\n");
	calc(n);
	
}
