#include <stdio.h>
#include <stdlib.h>

int main() {
	int a,b,c,d,i,x;
	scanf("%d",&a);
	if (a>=50) {
		
		if(a>=60){
			
			if(a>=70){
				
				if(a>=80){
					
					printf("A");
				}
			else{
				printf("B");
			}	
			}
		else{
			printf("C");
		}
		}
		else{
			printf("D");
		} 
	}
	else{
		printf("F");
	}
	return 0;
}
