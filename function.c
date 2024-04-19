#include <stdio.h>

// void calculateMax(){
  
//     printf("Hey You");
// }

// int main(){
//     calculateMax();

//     return 0;
// }


//int addNumbers(int a, int b);
//
//
//int main(){
//    int num1, num2, sum;
//
//    printf("Enter two numbers: ");
//    scanf("%d\t %d", &num1, &num2);
//
//    sum = addNumbers(num1, num2);
//    printf("sum =%d\n", sum);
//
//    return 0;
//}
//
//int addNumbers(int a, int b){
//    int result;
//    result = a + b;
//    return result;
//}



//stack overflow
void checkPrimeNumbers(){

	int n, i, flag = 0;
	
	printf("Enter a Positive Integer: ");
	scanf("%d", &n);
	
	if(n == 0 || n == 1)
		flag = 1;
	
	for(i=2; i<=n/2; i++){
		if(n%i == 0){
			flag = 1;
			break;
		}
	}
	
	if (flag == 1)
	printf("%d is not a Prime Number.", n);
	else
	printf("%d is a Prime Number.", n);
}


// ASSIGNMENT
// header file math.h
// list all the inbuilt functions in math.h and write a program to show how they are used.

// richcode43
