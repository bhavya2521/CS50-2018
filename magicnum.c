/*
* C program to check a number is magic number or not 
*/
#include<stdio.h>
#include<conio.h>

int getReverse(int num);
int getSumOfDigit(int num);

int main () {
    int num, digitSum, reverse;

    printf("Enter a number\n");
    scanf("%d", &num);

    /* get sum of digits of input number */
    digitSum = getSumOfDigit(num);

    /* reverse the digits of digitSum*/
    reverse = getReverse(digitSum);

    if ((digitSum * reverse) == num) {
        printf("%d is a Magic Number\n", num);
    } else {
        printf("%d is not a Magic Number\n", num);
    }

    getch();
    return 0;
  }
  
/* Function to reverse an integer  */
int getReverse(int num) {
    int r = 0;
    while (num > 0) {
        r = (r * 10) + (num % 10);
        num = num / 10;
    }
    return r;
  }
  
/* Function to calculate sum of digits of a number*/
int getSumOfDigit(int num){
    int sum = 0;
    while(num != 0){
        /* num%10 gives least significant digit of num */
        sum = sum + num%10;
        num = num/10; 
    }
    return sum;
}
