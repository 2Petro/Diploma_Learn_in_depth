#include <stdio.h>
#include <string.h>

#define ARRAY_SIZE(x) sizeof(x)/sizeof(x[0])

int main(){

printf("Enter 5 numbers to get average\n");
int n = 5;/*number of numbers to get average*/
int i = 0,count = 0;
float  num,avg=0;
for (i=0 ; i <= n ; i++)
{
	scanf("%f",&num);
	if(num > 0){
		avg += num;
		count++;
	}
}

printf("Average of %d postive numbers is %f\n",count,avg/count);

int product = 1;
for (i=0 ; i < 4 ; i++)
{
	scanf("%f",&num);
	if(num ==0)
	continue;

	product *= num;
}

printf("Product of 4 numbers is %d\n",product);

/*@brief Sum of two dimensional array*/
int arr_1[2][2];
int arr_2[2][2];
int sum[2][2];
int j = 0;
printf("Enter 4 values for first array\n");
for(i=0 ; i < ARRAY_SIZE(arr_1[0]) ; i++){
        for(j=0 ; j < ARRAY_SIZE(arr_1[0]) ; j++){
                scanf("%d",&arr_1[i][j]);
        }
}
printf("Enter 4 values for second array\n");
for(i=0 ; i < ARRAY_SIZE(arr_2[0]) ; i++){
        for(j=0 ; j < ARRAY_SIZE(arr_2[0]) ; j++){
                scanf("%d",&arr_2[i][j]);

                sum[i][j] = arr_1[i][j] + arr_2[i][j];
        }
}
for(i=0 ; i < ARRAY_SIZE(arr_2[0]) ; i++){
        for(j=0 ; j < ARRAY_SIZE(arr_2[0]) ; j++){
                printf("sum is %d\n",sum[i][j]);
        }
}

/*@brief N of data by user can calc the avg foe it*/
int array[50];
int average=0;
int value=0;
int number;

label:
printf("Enter a value less than 50\n");
scanf("%d",&number);

if(number>50){
	printf("Value should be less than 50\n");
	goto label;
}
printf("Enter a %d numbers to get average\n",number);

for(i=0 ; i < number ; i++){
	scanf("%d",&value);
	average += value;
}
printf("Average %d\n",average/number);

/*@brief transpose of array*/
int arr[10][10];
int arr_transpose[10][10] = {0};
int x,y;
printf("Enter rows and column of matrix : ");
scanf("%d %d",&x,&y);
printf("%d Rows %d Coloumns\n",x,y);
printf("Enter elements of matrix : \n");

for(i=0 ; i < x ; i++){
        for(j=0 ; j < y ; j++){
		printf("Enter elements of a%d%d : ",i+1,j+1);
                scanf("%d",&arr[i][j]);
        }
}

printf("Entered matrix :\n");
for(i=0 ; i < x ; i++){
        for(j=0 ; j < y ; j++){
                printf("%d ",arr[i][j]);
        }
	printf("\n");
}

for(i=0 ; i < x ; i++){
	for(j=0 ; j < y ; j++){
                arr_transpose[j][i] = arr[i][j];
        }
}

printf("Transpose matrix :\n");

for(i=0 ; i < y ; i++){
        for(j=0 ; j < x ; j++){
                printf("%d ",arr_transpose[i][j]);
        }
        printf("\n");
}

/*@brief insert element in array*/
int ar[50] = {0}; /*max val is 50*/
int elnum,elval,eladdr,elsearch;
printf("Enter number of elements\n");
while (getchar() != '\n');
scanf("%d",&elnum);
printf("Enter values\n");
for(i=0 ; i < elnum ; i++){
	scanf("%d",&ar[i]);
}

printf("Enter the element to be inserted\n");
scanf("%d",&elval);
printf("Enter the location\n");
scanf("%d",&eladdr);
int temp=elnum;

for(i=0 ; i < elnum+1 ; i++){
        if(i < eladdr-1)
	continue;

	ar[temp--] = ar[temp];

}

ar[eladdr-1] = elval;
printf("New array after modifications\n");
for(i=0 ; i < elnum+1 ; i++){
        printf("%d\n",ar[i]);
}

/*@brief search element in array*/
printf("Enter the elements to be searched\n");
scanf("%d",&elsearch);
for(i=0 ; i < elnum+1 ; i++){
        if(ar[i] == elsearch)
	printf("Number found at location %d\n",i+1);
}

/*@brief frequnecy of char in string*/

char str[100];
char a;
int ct=0;
while (getchar() != '\n');
printf("Enter a string: ");
fgets(str,sizeof(str),stdin);
printf("Enter a charachter to find frequency\n");
scanf("%c",&a);
for(i=0 ; str[i] != 0 ; i++){
	if(str[i] == a)
	ct++;
}
printf("Frequnecy of %c is %d\n",a,ct);


/*brief String length without using library and reverse*/
char st[100];
char rev[100];
int counter=0;
while (getchar() != '\n');
printf("Enter a string: ");
scanf("%s",st);
for(i=0 ; st[i] != 0 ; i++){
        counter++;
}
printf("lenth of string is : %d\n",counter);

for(i=0 ; i < counter ; i++){
        rev[i] = st[counter-i-1];
}
rev[counter] = 0;


printf("Reverse string is : %s\n",rev);
return 0;
}



