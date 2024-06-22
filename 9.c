#include <stdio.h>

int main(){
	
	int a1;
	int a2;
	int a3;
	
	printf("Enter angles space separated list : ");
	scanf("%d %d %d",&a1,&a2,&a3);
	
	if((a1+a2+a3==180)){
		printf("Can Be Formed");
	}
	else{
		printf("Cannot be Formed");
	}
}
