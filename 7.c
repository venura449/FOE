#include <stdio.h>

int main(){
	
	int num[]={1, 2, 0, 3, 5, 7, 0, 9, 11, 5 };
	int i = 0;
	int size =  sizeof(num)/sizeof(num[0]);
	
	for(i=0;i<size;i++){
		if(num[i] == 5){
			num[i]=0;
		}
	}
	
		for(i=0;i<size;i++){
		printf(" %d ",num[i]);
	}
}
