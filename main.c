#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for(i = 0; i < n; i++) {
        printf("\nStudent %d - Name, Roll, Marks: ", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }

    printf("\n--- Student Results ---\n");
    printf("ID\tName\tMarks\tStatus\n");
    for(i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\t%s\n", s[i].roll, s[i].name, s[i].marks, 
               (s[i].marks >= 40) ? "Pass" : "Fail");
    }

    return 0;
}