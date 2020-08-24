#include <stdio.h>

int main(){
    
    int matrix[2][2] = {
        {1, 2},
        {3, 2}
    };

    /* Formula: 
     *... 1/(ad - bc) * {(d, -b),
                         (-c, a)} ...*/

    /* Calculates the 1st parameter */
    /* numerator of the 1st parameter = 1
     * denominator of the parameter = ad - */
    float num_pm = 1;

    float den_pm = (matrix[0][0] * matrix[1][1]
                    - matrix[1][0] * matrix[0][1]);

    float pm = num_pm / den_pm;

    /* Calculates the 2nd parameter */
    int pm_matrix[2][2] = {
        {matrix[1][1], -matrix[0][1]},
        {-matrix[1][0], matrix[0][0]}
    };

    printf("******************\n");

    /*Displays the inverse matrix*/
    for(int k = 0; k < 2; k++) {
        for(int j = 0; j < 2; j++){
            printf(" %.2f", pm * pm_matrix[k][j]);
        }
    printf("\n");
    }

    printf("******************");

    return 0;
}