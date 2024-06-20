#include <stdio.h>

int main(){
	int amount = 0;
	int count[7]={0};
	
	printf("Enter the Amount of Cash :");
	scanf("%d",&amount);
	
	while(amount>0){
		if(amount>=100){
			amount-=100;
			count[0]++;
		}
		else if(amount>=50){
			amount-=50;
			count[1]++;
		}
		else if(amount>=20){
			amount-=20;
			count[2]++;
		}
		else if(amount>=10){
			amount-=10;
			count[3]++;
		}
		else if(amount>=5){
			amount-=5;
			count[4]++;
		}
		else if(amount>=2){
			amount-=2;
			count[5]++;
		}
		else if(amount>=1){
			amount-=1;
			count[6]++;
		}
	}
	
	printf("\n\n%d Note(s) of 100.00\n",count[0]);
	printf("%d Note(s) of 50.00\n",count[1]);
	printf("%d Note(s) of 20.00\n",count[2]);
	printf("%d Note(s) of 10.00\n",count[3]);
	printf("%d Note(s) of 5.00\n",count[4]);
	printf("%d Note(s) of 2.00\n",count[5]);
	printf("%d Note(s) of 1.00\n",count[6]);
	
	
	
}
