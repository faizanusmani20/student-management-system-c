#include <stdio.h>

struct student s[100];
int n = 0;

void addStudent() {
    printf("Enter Student Roll no: ");
    scanf("%d", &s[n].rollno);

    printf("Enter Student Name: ");
    scanf("%s", s[n].name);

    printf("Enter Student Marks: ");
    scanf("%f", &s[n].marks);

    n++;  // global variable updated
    printf("Successfully Student Added\n");
}


int main(){
addStudent();  // no need to pass n
return 0;
