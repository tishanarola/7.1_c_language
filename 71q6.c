#include<stdio.h>
#include<conio.h>
int main(){
	int i,j;
	for(i=1;i<=5;i++){
		for(j=5;j>=1;j--){
			if((j%2==0)){
				printf("0");
			}else{
				printf("1");
			}
			}
			printf(" \n");
		}
		return 0;
	}

