#include <stdio.h>
#include <stdlib.h>

int main() {
	int a,b,c,d,i,x;
	scanf("%d",&a);
	if(a>=0){
		if(a<=100){
			if (a>=50) {
				
				if(a>=60){
					
					if(a>=70){
						
						if(a>=80){
							
							printf("A\n");
						}
					else{
						printf("B\n");
						printf("%d more to get B",80-a);
					}	
					}
				else{
					printf("C\n");
					printf("%d more to get B",70-a);
				}
				}
				else{
					printf("D\n");
					printf("%d more to get B",60-a);
				} 
			}
			else{
				printf("F\n");
				printf("%d more to get D",50-a);
			}
		}
		else{
			printf("error score");
		}
	}
	else{
		printf("error score");
	}
	return 0;
}
