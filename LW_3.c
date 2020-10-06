#include <stdio.h>

void find_avg_value (float *array, int len) {

	float sum = 0;
	
	int i = 0;
	for (i = 0; i < len; i++) {
		sum += array[i];
	}
	
	sum = sum / len;
	
	int j = 0;
	for (j = 0; j < len; j++) {
		if (array[j] < sum) {
			array[j] = 0;
		}
	}
}

int main() {
	
	int len = -1;
	while ((len < 0) || (len > 1000)){
		printf("Input length of array (from 0 to 1000): \n");
		scanf("%d", &len);
	}
	
	float array[len];
	
	int m = 0;
	for (m = 0; m < len; m++) {
		printf("Input %d element: \n", m);	
		scanf("%f", &array[m]);	
	}

	find_avg_value (array, len);
	int k = 0;
	printf("New array: \n");
	for (k = 0; k < len; k++){
		printf("%f\n", array[k]);
	}
	return 0;
}
