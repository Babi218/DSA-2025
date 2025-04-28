//calculate sum of natural number with recursion
#include <stdio.h>
// function of sum of natural number
int addnumber(int n){
    //base case of recursion
    if(n==1) return 1;
    return n+addnumber(n-1);
}

int main() {
    // Your code goes here
    int num;
    printf("Enter the number to calculate natural number sum: ");
    scanf("%d",&num);
    printf("%d natural number sum is: %d",num,addnumber(num));
    return 0;
}