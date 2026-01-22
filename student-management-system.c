#include <stdio.h>
#include <string.h>

struct student {
    int rollno;
    char name[20];
    float marks;
};

void addStudent(struct student s[], int *n) {
    printf("Enter Student Roll no: ");
    scanf("%d", &s[*n].rollno);

    printf("Enter Student Name: ");
    scanf("%s", s[*n].name);

    printf("Enter Student Marks: ");
    scanf("%f", &s[*n].marks);

    (*n)++;
    printf("Successfully Student Added\n");
}

void searchstudent(struct student s[], int n) {
    int rollno;
    int found=0;
    printf("Enter Student Roll No : ");
    scanf("%d", &rollno);

    for (int i = 0; i < n; i++) {
        if (rollno == s[i].rollno) {
            printf("\nName    : %s", s[i].name);
            printf("\nRoll No : %d", s[i].rollno);
            printf("\nMarks  : %.3f\n", s[i].marks);
            found=1;
            break;
        }
    }
    if(!found)
    printf("\nStudent Not Found\n");
}

void showstudent(struct student s[], int n) {
    printf("\nRoll No        Name                Marks\n");
    printf("-------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("%-14d %-18s %.3f\n",
               s[i].rollno,
               s[i].name,
               s[i].marks);
    }
}

int main() {
    struct student s[100];
    int choice, n = 0;

    do {
        printf("\n------ STUDENT MANAGER -------");
        printf("\n1. Add Student");
        printf("\n2. Show all student details");
        printf("\n3. Search student by roll number");
        printf("\n4. Exit");
        printf("\nEnter Choice : ");

        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(s, &n);
                break;

            case 2:
                showstudent(s, n);
                break;

            case 3:
                searchstudent(s, n);
                break;

            case 4:
                printf("\nExiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 4);

    return 0;
}
