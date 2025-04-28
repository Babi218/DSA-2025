#include <stdio.h>

void towerOfHanoi(int n, char source, char destination, char helper) {
    //base case
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }
    towerOfHanoi(n - 1, source, helper, destination);
    printf("Move disk %d from %c to %c\n", n, source, destination);
    towerOfHanoi(n - 1, helper, destination, source);
}

int main() {
    int numDisks = 3; 
    towerOfHanoi(numDisks, 'A', 'C', 'B'); 
    return 0;
}