#include <stdio.h>

void main(){

	/*Testing*/
	printf("hello world\n");

	float a = 5.2;
	int   b = 6;
	char  c = 'a';

	float tot = a+b;
	int hey   = a+b;

	float asc = a + c;
	int test  = a + c;

	float num = 6.7;

	printf("ascii of a is %d\n", (int) 'a');

	printf("val %d %f %d %f %f %d\n",tot,tot,hey,hey,asc,test);
	printf("int of 6.45 is %d\n",num);	 /* not possible without typecasting*/



	/*lab _1*/
	/* @brief compute circle area */

	float pi = 3.14;
	int r;
	scanf("%d",&r);
	printf("Area is %f\n",pi * r * r);
	printf("Circrference is %f\n",2 * pi * r);


	/*lab _2*/
        /* @brief Comparing three numbers */
	int num_1,num_2,num_3,max,min;
	scanf("%d %d %d",&num_1,&num_2,&num_3);

	if(num_1 > num_2)
	{
		if(num_1 > num_3){
			max = num_1;
			min = num_2;
		}else{
			max = num_3;
                        min = num_2;
		}
	}else
	{
		if(num_2 > num_3){
			max = num_2;
                        min = num_1;
		}else{
                        max = num_3;
                        min = num_1;
		}
	}
	printf("num %d is the largest %d minimum\n",max,min);

	/*lab _3*/
        /* @brief Calculate minimum of 2 numbers */
	printf("min is %d\n",num_1<num_2 ? num_1 : num_2);


	/*lab _4*/
        /* @brief  calculate the sum of loop numbers */

	int sum = 0;
	int i = 0;
	for(i=0;i<=100;i++){
		sum += i;
	}
	printf("sum is %d\n",sum);


	/*lab _5*/
        /* @brief  calculate the average degree of students*/
	int students = 5;
	int degree;
	sum = 0;

	for(i=1;i<=students;i++){
		scanf("%d",&degree);
		sum += degree;
	}
	printf("avg is %d\n",sum/students);
}
