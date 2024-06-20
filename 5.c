#include <stdio.h>

int main(){

	int i = 0;
	int marks[10]={23,1,5,68,4,67,76,34,67,9};
	int size = sizeof(marks)/sizeof(marks[0]);
	
	int max =  marks[0];
	int min = marks[0];
	
	int sum = 0;
	
	for(i=0;i<size;i++){
		if(max < marks[i]){
			max = marks[i];
		}
		if(min > marks[i]){
			min = marks[i];
		}
	}
	
	//avg and sum
	
	for(i=0;i<size;i++){
		sum += marks[i];
	}
	
	
	printf("Max Value is : %d\n",max);
	printf("Min Value is : %d\n\n",min);
	
	printf("Sum is : %d\n",sum);
	printf("Avg is : %.2f\n ",sum/(float)size);
	
}
