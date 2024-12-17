#include <stdio.h>
#define ARRAY_SIZE(var) sizeof(var)/sizeof(var[0])


int main()
{
	/*@brief Calculate set of polnomyal*/
	int x[] = {5,6,7,8,9,10};
	int a,b,c;
	int y;
	int i=0;
	printf("Enter A B C for polnomyal\n");
	scanf("%d %d %d",&a,&b,&c);

	for(i=0; i < ARRAY_SIZE(x) ; i++){
		y = a * x[i] * x[i] + b * x[i] + c;
		printf("Y %d X %d\n",y,x[i]);
	}


	/*@brief Calculate and print transpose of 3x3 matrix*/
	int j = 0;
	int arr[3][3] = { {2,5,6} , {3,8,9} , {6,7,9} };
	int arr_transpose[3][3] = {0};
	/* 2 5 6
	   3 8 9
	   6 7 9*/
	for(i=0 ; i < ARRAY_SIZE(arr[2]) ; i++){
		for(j=0 ; j < ARRAY_SIZE(arr[2]) ; j++){
		arr_transpose[j][i] = arr[i][j];
		}
	}

	for(i=0 ; i < ARRAY_SIZE(arr[2]) ; i++){
                for(j=0 ; j < ARRAY_SIZE(arr[2]) ; j++){
                printf("%d\n",arr_transpose[i][j]);
                }
        }


	/*@brief ID array and search,count accepted values*/
	unsigned int id[1000];
	int count=0;
	j = 2;
	for(i=0; i < ARRAY_SIZE(id) ; i++){
		id[i] = rand();

		if(i <= j)
		continue;

		else{
			if(id[i-1] > id[i-2] && id[i-1] > id[1]){
				count++;
				printf("value %u count %d accepted\n",id[i-1],count);
				printf("previous %d next %d\n",id[i-2],id[i]);
				j += 2;
			}
		}
	}
	return 0;
}

