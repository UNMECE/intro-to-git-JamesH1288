#include <string.h>
#include <stdio.h>
#include <math.h>


int sum(int arr[], int size){
	int sum  = 0;
	for (int i=0; i< size ;i++){
		sum += arr[i];
	}
	return sum;
};

double average (int arr[], int size){
	int sum = 0;
	for (int i = 0; i < size; i++){
		sum +=  arr[i];
	}
	double average = (double)sum / size;
	return average;
};

double standardDeviation (int arr[], int size){
	double avgArr = average(arr, size);
	double sumStDev = 0.00;
	for (int i = 0; i < size; i++){
		sumStDev += pow(arr[i] - avgArr, 2);

	}
	return sqrt(sumStDev/size);

};

int main(){


	//array declaration and values
	int array3[] = {3, 10, 15, 5};
	int array2[] = {5, 15, 20, 7, 15, 4};
	int array1[] = {1, 3, 6, 14, 3};



	int sizeArr1 = sizeof(array1)/sizeof(array1[0]);
	int sumArr1 = sum(array1, sizeArr1);
	//debugging printf("Size array 1: %d\n", sizeArr1);
	printf("The sum is: %d\n", sumArr1);

	int sizeArr2 = sizeof(array2)/sizeof(int);
	double avgArr2 = average(array2, sizeArr2);
	//debugging printf("Size array 2: %d\n", sizeArr2);
	printf("The average is: %lf\n", avgArr2);
	
	int sizeArr3 = sizeof(array3)/sizeof(int);
	double stDevArr3 = standardDeviation (array3, sizeArr3);
	//debugging printf("Size array 3: %d\n", sizeArr3); 
	printf("The std is %lf\n", stDevArr3);

	// for next assignment : int getMax;	
	
	return 0;

}
