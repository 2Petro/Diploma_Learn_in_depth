#include <stdio.h>

void main(void){

	/* @brief problem(1) */
	printf("C Programing\n");

	/* @brief problem(2) */
	int num;
	printf("Enter an integer :");
        scanf("%d",&num);
	printf("You entered: %d\n",num);


	/* @brief problem(3) */
	int num_1,num_2,sum;
        printf("Enter two integers :");
	scanf("%d %d",&num_1,&num_2);
	sum = num_1 + num_2;
	printf("Sum %d\n",sum);

	/* @brief problem(4) */
	float fnum_1,fnum_2,multipl;
        printf("Enter two integers :");
        scanf("%f %f",&fnum_1,&fnum_2);
        multipl = fnum_1 * fnum_2;
        printf("Product %f\n",multipl);

	/* @brief problem(5) */
	char asc;
	printf("Enter a character :");
	scanf(" %c",&asc);
	printf("ASCII value of %c = %d\n",asc,(int) asc);

	/* @brief problem(6) */
	float a,b,temp;
        printf("Enter value of a :");
	scanf("%f",&a);
	printf("Enter value of b :");
        scanf("%f",&b);

	temp = a;
	a = b;
	b = temp;
	printf("After swapping, value of a = %.2f\n",a);
	printf("After swapping, value of b = %.2f\n",b);

	/* @brief problem(7) TRICK VIP*/
	a += b;
	b = a - b;
	a -= b;
	printf("After swapping, value of a = %.2f\n",a);
        printf("After swapping, value of b = %.2f\n",b);

}
