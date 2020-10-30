#include <stdio.h>
/*Написать функцию, которая в массиве вещественных чисел обнуляет все элементы, которые меньше среднего гармонического значения элементов исходного массива.
*/
float find_garm_value (float *array, int len) {

	float garm = 0, back_sum = 0;
	float arr2[len];
	
	int i = 0;
	for (i = 0; i < len; i++) {
		arr2[i] = 1/array[i];
		//printf("%f\n", arr2[i]);
		back_sum += arr2[i];
	}
	
	garm = len / back_sum;
	
	int j = 0;
	for (j = 0; j < len; j++) {
		if (array[j] < garm) {
			array[j] = 0;
		}
	}
	return garm;
}

int main() {
	
	int len = 0;
	printf("Input length of array (from 0 to 1000): \n");
	scanf("%d", &len);
	
	float array[len];
		
	int m = 0;
	for (m = 0; m < len; m++) {
		printf("Input %d element: \n", m);	
		scanf("%f", &array[m]);	
	}

	find_garm_value (array, len);
	//printf("garm = %f", find_garm_value (array, len));
	int k = 0;
	printf("New array: \n");
	for (k = 0; k < len; k++){
		printf("%f\n", array[k]);
	}
	return 0;
}
