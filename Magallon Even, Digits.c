#include <stdlib.h>
#include <stdio.h>

int main(){
	
	int num;
	int total = 0;
	
	printf("Enter a Number:");
	scanf("%i", &num);
	
	while (num > 0){
		
		if (num %2 == 0){
		total = total + num;
		num = num - 2;
		printf("%i\n", num); //Added for visualization of Repeated Subtraction 
		}
			else if (num%2 == 1){
				num = num - 1;
				total = total + num;
				printf("%i\n", num);
				num = num - 1;
			;
			}
	}
	
	printf("Total: %i", total);
	return 0;
}
