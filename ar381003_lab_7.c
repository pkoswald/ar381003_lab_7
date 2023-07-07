#include <stdio.h>

int main() {
    
    int array[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int n = sizeof(array)/sizeof(array[0]);
    int i, j, tmp, swap;

    for (i = 0; i < n-1; i++) {
        
        swap = 0;
        for (j = 0; j < n-i-1; j++) {
            
            if (array[j] > array[j+1]) {
                tmp = array[j];
                array[j] = array[j+1];
                array[j+1] = tmp;
                
                swap++; 
            }
        }

        printf("pass %d: %d swaps\n", i+1, swap);
        if (swap == 0) 
            break;
    }

    return 0;
}
