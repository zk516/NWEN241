
#include <stdio.h>
#define STUDENTS 3
#define EXAMS 4
/* function prototypes */
void minimum( int grades[][ EXAMS ], int pupils, int tests );
void maximum( int grades[][ EXAMS ], int pupils, int tests );
void average( int grades[][ EXAMS ], int pupils, int tests );
void printArray( int grades[][ EXAMS ], int pupils, int tests );
void printMenu( void );
int main(void){
    /* pointer to a function that takes as parameters a two-dimensional
array and two integer values */
    void ( *processGrades[ 4 ] )( int [][ EXAMS ], int, int )
    = { printArray, minimum, maximum, average};
    int choice = 0; /* menu choice */   /* array of student grades */
    int studentGrades[ STUDENTS ][ EXAMS ] = { { 77, 68, 86, 73 },
    { 96, 87, 89, 78 },
    { 70, 90, 86, 81 } };
    /* loop while user does not choose option 4 */
    while ( choice != 4 ) {
        /* display menu and read user's choice */
        do {
            printMenu();
            scanf( "%d", &choice );
        } while ( choice < 0 || choice > 4 );
        /* end do...while */
        /* pass choice into the array */
        if(choice==0){
            printArray(studentGrades,STUDENTS,EXAMS);
        }else if(choice == 1){
            minimum(studentGrades,STUDENTS,EXAMS);
        }else if(choice == 2){
            maximum(studentGrades,STUDENTS,EXAMS);
        }else if(choice == 3){
            average(studentGrades,STUDENTS,EXAMS);
        }
        /* for you to complete */
    } /* end while */

    return 0; /* indicate successful termination */
} /* end main */


/* search for the minimum value */
void minimum( int grades[][ EXAMS ], int pupils, int tests ) {
    int (*p1)[4] = grades;
    int lowGrade = 100;
    int *p2 = NULL;
    for (; p1 != grades+3; ++p1) {
        for (p2 = *p1; p2 != *p1+4; ++p2 ) {
            if(*p2<lowGrade){
                lowGrade = *p2;
            }
        }
    }

    /* for you to complete */
    printf( "\n\tThe lowest grade is %d\n", lowGrade );
} /* end function minimum */


/* search for maximum value */
void maximum( int grades[][ EXAMS ], int pupils, int tests ) {
    int highGrade = 0;
    int (*p1)[4] = grades;
    int *p2 = NULL;
    for (; p1 != grades+3; ++p1) {
        for (p2 = *p1; p2 != *p1+4; ++p2 ) {
            if(*p2>highGrade){
                highGrade = *p2;
            }
        }
    }
    printf( "\n\tThe highest grade is %d\n", highGrade );
} /* end function maximum */


/* calculate average */
void average( int grades[][ EXAMS ], int pupils, int tests ) {
    float total = 0;
    int (*p1)[4] = grades;
    int *p2 = NULL;
    for (; p1 != grades+3; ++p1) {
        for (p2 = *p1; p2 != *p1+4; ++p2 ) {
                total += *p2;
        }
    }
    float average = (total*1.0)/(pupils*tests);
    printf("\n\tThe average on all tests for");
    printf( " each student is %.2f\n", average);
} /* end function average */


/* print the contents of the array */
void printArray( int grades[][ EXAMS ], int pupils, int tests ) {
    printf("\n\tThe grades are : ");
    /* for you to complete */
    int (*p1)[4] = grades;
    int *p2 = NULL;
    for (; p1 != grades+3; ++p1) {
        for (p2 = *p1; p2 != *p1+4; ++p2 ) {
                printf( "%d ",*p2 );
        }
    }
    printf("\n");


}
/* end function printArray */


/* display the menu */
void printMenu( void )
{

    printf("\n\tEnter a choice:\n");
    printf("\t 0 Print the array of grades\n");
    printf("\t 1 Find the minimum grade\n");
    printf("\t 2 Find the maximum grade\n");
    printf("\t 3 Print the average on all");
    printf(" tests for each student\n");
    printf("\t 4 End program\n");
    printf("\t? ");


} /* end function printMenu */
