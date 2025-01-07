#include <stdio.h>
#include <string.h>

#define ARRAY_SIZE(x) sizeof(x)/sizeof(x[0])

/*@brief factorial for a given int number*/
int fact(int a){
	int result=1,i=a;
	for(; i ; i--){
		result *= i;
	}
	return result;
}

/*@brief minimum value of given array*/
int min_arr(int arr[],int size){
	int min=arr[0],i=0,j=0,tmp=0;
	for(; i < size ; i++){
		if(arr[i] < min)
		min = arr[i];
	}
	return min;
}

/*@brief Find a name in set of names*/
int find_name(char arr[][10],char name[],int size){
	int i=0;
	for(;i<size;i++){
		if( !(strcmp(arr[i],name)) )
		return 0;
	}
	return 1;
}


/*@brief Print Sequnece of numbers*/
void print_sec(void){
int i=0,j=0;
	for(;i<10;i++){
		for(j=i;j<10;j++){
			printf("%d ",j);
		}
	printf("\n");
	}
}

int main(void){
	int a;
	printf("Enter a number to get factorial of it : ");
	scanf("%d",&a);
	printf("Factorial of %d is %d\n",a,fact(a));

	int arr[4] = {-1,2,1,0};
	printf("The min of given array a is %d\n",min_arr(arr,ARRAY_SIZE(arr)));

	char name[10];
	printf("Enter a name to search in array : \n");
	scanf("%s",name);
	char strings[][10] = {"hey","hello","wassup"};
	if (!find_name(strings, name, ARRAY_SIZE(strings)))
    		printf("Found name: %s !!\n", name);
        else
        	printf("Name not found in the array.\n");

	print_sec();

return 0;
}
