#include <stdio.h>
int main(){	
	
	int matrix[3][3] = {
	{12, 45, 32},
	{2, 13, 45},
	{56, 72, 41}
	};
	int i, j, max = 0;
	
	for(i=0; i<=2; i++){
		for(j=0; j<=2; j++){
			if(max < matrix[i][j]){
				max = matrix[i][j];
			}
		}
	}
	printf("Maximum number in the array is: %d", max);
	
	
	
	
	
	return 0;
}
