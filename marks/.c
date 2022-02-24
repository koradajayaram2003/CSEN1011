# include <stdio.h>
int main() {
    int marks_01, marks_02, marks_03, marks_04, marks_05;
    
    printf("Enter marks_01 : ");
    scanf("%d", &marks_01);

    printf("Enter marks_02 : ");
    scanf("%d", &marks_02);

    printf("Enter marks_03 : ");
    scanf("%d", &marks_03);

    printf("Enter marks_04 : ");
    scanf("%d", &marks_04);

    printf("Enter marks_05 : ");
    scanf("%d", &marks_05);

    int total_marks = marks_01 + marks_02 + marks_03 + marks_04 + marks_05;
    
    printf("Total Marks scored = %d\n", total_marks );
    printf("Average Marks scored = %d\n", total_marks/5 );

    return 0;
}
