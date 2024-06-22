#include <stdio.h>

int main(){
	
	int marks[] = {10,20,30,40,50};
	int size = sizeof(marks)/sizeof(marks[0]);
	
	int reverse_marks[size];
	int i = 0;
	
	for(i=4;i>=0;i--){
		reverse_marks[4-i]=marks[i];
	}
	
	for(i=0;i<size;i++)
		printf(" %d ",reverse_marks[i]);
}
