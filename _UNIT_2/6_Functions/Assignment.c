#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE(x) sizeof(x)/sizeof(x[0])


/* @brief prime numbers between Two intervals */
void prime_interv(void){
        int num_1,num_2,i,j;
        printf("Enter two numbers(intervals) : ");
        scanf("%d %d",&num_1,&num_2);
        printf("Prime numbers between %d and %d : " ,num_1,num_2);
        for(i=num_1 ;(j=i) < num_2 ;i++){
		while(--j){
			if( i % j == 0){break;}
		}

		if(j==1)
		printf("%d ",i);
  	}

	printf("\n");
}

/* @brief Factorial using recursion */
int fact_rec(int num){
	if(num>0)
		return num * fact_rec(num-1);

	return 1;
}

/* @brief string reverse recursion */
char *str_revc(char src[], char *dst) {
    if (!dst) {
        return NULL;
    }

    int size = strlen(src);
    static int EndofStr = 0;

    if (EndofStr < size) {
        dst[EndofStr] = src[size - EndofStr - 1];
        EndofStr++;
        return str_revc(src, dst);
    }

    dst[EndofStr] = '\0';
    EndofStr = 0;
    return dst;
}

/* @brief power using recursion */
int pwr_rec(int num,int pwr){
        if(pwr)
                return num * pwr_rec(num,pwr-1);

        return 1;
}

int main(){
	prime_interv();

	int num_1;
	printf("Enter a positive integer :");
	scanf("%d",&num_1);
	printf("Factorial of %d is %d\n",num_1,fact_rec(num_1));


	char a[50],b[50],*ptr;
	ptr = malloc(10);
	printf("Enter a sentence : ");
	while ( getchar() != '\n');
	fgets(a, sizeof(a), stdin);
	ptr = str_revc(a,b);
	printf("%s\n", ptr);

	int base,pwr;
	printf("Enter base number : ");
	scanf("%d",&base);
	printf("Enter power number (positive): ");
        scanf("%d",&pwr);
	printf("%d^%d=%d\n",base,pwr,pwr_rec(base,pwr));

	return 0;
}

