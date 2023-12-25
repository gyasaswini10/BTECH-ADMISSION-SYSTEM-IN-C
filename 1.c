#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    long long int id;
    char name[100];
    char gender[10];
    bool document;
    int specialization;
    int academic_marks;
    int entrance_marks;
};

void search(struct Student a[], int n);
void sort(struct Student a[], int n);
void display(struct Student a[], int n);


struct Student yasaswini = {2300030244, "Yasaswini", "female", 1, 5, 99, 100};
struct Student sai_sree = {2300030570, "Sai Sree", "female", 0, 4, 10, 99};
struct Student ram = {2300030211, "Ram", "male", 1, 2, 44, 48};
struct Student seetha = {2300030292, "Seetha", "female", 0, 3, 57, 29};
struct Student ganesh = {2300030191, "Ganesh", "male", 1, 5, 80, 33};
struct Student parvathi = {2300010255, "Parvathi", "female", 1, 4, 40, 97};
struct Student karthikeya = {2300090115, "Karthikeya", "male", 1, 1, 100, 79};

int main() {
    int n, s,f;
    int p = 1,q;
    printf("(7 student details already  given in the code enter number of extra student details you want to add )\nEnter the number of students: ");
    scanf("%d", &f);
    n=7+f;
    struct Student a[n];
    a[0] = yasaswini;
    a[1] = sai_sree;
    a[2] = ram;
    a[3] = seetha;
    a[4] = ganesh;
    a[5] = parvathi;
    a[6] = karthikeya;

    int i;

    for (i = 7; i < n; i++) {
        printf("Enter name, id, gender, marks of student %d\n", i + 1);
        printf("name: ");
        scanf("%s", a[i].name);
        printf("id: ");
        scanf("%lld", &a[i].id);
        printf("gender(male/female): ");
        scanf(" %s", a[i].gender);
        printf("Document submission status (enter 1 if submitted, 0 if not submitted): ");
        scanf("%d", &a[i].document);
        printf("Enter specialization (1 for AI DS, 2 for CSE, 3 for EEE, 4 for BIOTECHNOLOGY, 5 for CS/IT): ");
        scanf("%d", &a[i].specialization);
        printf("Enter academic marks percentage out of 100%%: ");
        scanf("%d", &a[i].academic_marks);
        printf("Enter entrance exam percentage out of 100: ");
        scanf("%d", &a[i].entrance_marks);
    }

   

  
        printf("\n");
    while (1) {
    	
    int choice;
    printf("Enter choice:\n");
    printf("1.Check whether a student details exit or not \n");
    printf("2. Sort students by name\n");
    printf("3.Display details of all students\n");
    printf("Any other for exit\n");

        scanf("%d", &choice);
        switch (choice) {
            case 1:
                search(a, n);
                break;
            case 2:
                sort(a, n);
                break;
                case 3:
                	display(a,n);
            break;
            default:
                exit(1);
        }
    }

    return 0;
}

void search(struct Student a[], int n) {
    int i, x = 0;
    char c[100];
    printf("Enter name to search: ");
    scanf(" %[^\n]s", c);

    for (i = 0; i < n; i++) {
        if (strcmpi(c, a[i].name) == 0) {
            x++;
            break;
        }
    }

    if (x == 0) {
        printf("Student details do not exist\n\n\n");
    } else {
        printf("Student details exist in the list\n\n\n");
    }
}

void sort(struct Student a[], int n) {
    int i, j, q, p = 1;
    struct Student temp;
 for (q = 50; q > p; q--) {
            printf("---");
        }
        printf("\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmpi(a[j].name, a[j + 1].name) > 0) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("\t\t\t\Sorted students based on name:\n");

    for (i = 0; i < n; ++i) {
        printf("serial number %d\n", i + 1);
        printf("ID: %lld\n", a[i].id);
        printf("Name: %s\n", a[i].name);
        printf("Gender: %s\n", a[i].gender);
        printf("Academic Marks: %d\n", a[i].academic_marks);
        printf("Entrance Marks: %d\n", a[i].entrance_marks);
        printf("Document Submission Status: %s\n", a[i].document == 1 ? "Yes" : "No");

        printf("Specialization: ");
        switch (a[i].specialization) {
            case 1:
                printf("AI DS\n");
                break;
            case 2:
                printf("CSE\n");
                break;
            case 3:
                printf("EEE\n");
                break;
            case 4:
                printf("BIOTECHNOLOGY\n");
                break;
            case 5:
                printf("CS/IT\n");
                break;
            default:
                printf("Invalid specialization code\n");
        }

        int s = a[i].academic_marks + a[i].entrance_marks;

        if (s > 150) {
            printf("Is the Student Eligible for Notification for merit admission  : YES\n");
        } else {
            printf("Is the Student Eligible for Notification for merit admission : NO\n");
        }

        for (q = 5; q > p; q--) {
            printf("---");
        }

        printf("\n");
    }
     for (q = 50; q > p; q--) {
            printf("---");
            
        }
        printf("\n");
}

void display(struct Student a[], int n) {
 int  i,s,f;
    int p = 1,q;
	  for (i = 0; i < n; ++i) {
    	 for (q = 50; q > p; q--) {
            printf("---");
            
        }
        printf("\n");
        printf("serial number %d\n", i + 1);
        printf("ID: %lld\n", a[i].id);
        printf("Name: %s\n", a[i].name);
        printf("Gender: %s\n", a[i].gender);
        printf("Academic Marks: %d\n", a[i].academic_marks);
        printf("Entrance Marks: %d\n", a[i].entrance_marks);
        printf("Document Submission Status: %s\n", a[i].document == 1 ? "Yes" : "No");

        printf("Specialization: ");
        switch (a[i].specialization) {
            case 1:
                printf("AI DS\n");
                break;
            case 2:
                printf("CSE\n");
                break;
            case 3:
                printf("EEE\n");
                break;
            case 4:
                printf("BIOTECHNOLOGY\n");
                break;
            case 5:
                printf("CS/IT\n");
                break;
            default:
                printf("Invalid specialization code\n");
        }

        s = a[i].academic_marks + a[i].entrance_marks;

        if (s > 150) {
            printf("Is the Student Eligible for Notification for merit admission  : YES\n");
        } else {
            printf("Is the Student Eligible for Notification for merit admission : NO\n");
        }

        printf("\n");
    }
 for (q = 50; q > p; q--) {
            printf("---");
            
        }
}
