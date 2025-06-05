/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

void pascal(int n) {

    int l=0, c=0;
    int M[1024][1024];
    M[0][0] = 1;
    printf("%d\n", 1);

    for(l=1; l<n; l++) {
        M[l][0] = 1;
        printf("1 ");
        for(c=1; c<l; c++) {
            M[l][c] = M[l-1][c-1] + M[l-1][c];
            printf("%4d ",M[l][c]);
        }
        M[l][c] = 1;
        printf("   1\n");
    }


}

int main(int argc, char* argv[]) {
    
    pascal(10);
    return 0;
}
