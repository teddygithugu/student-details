#include <stdio.h>

#define MAX_COURSES 5
#define MAX_LENGTH 50

int main() {
    char name[MAX_LENGTH];
    char regNumber[MAX_LENGTH];
    char courses[MAX_COURSES][MAX_LENGTH];
    int numCourses;

    // Input name
    printf("Enter your name: ");
    fgets(name, MAX_LENGTH, stdin);

    // Input registration number
    printf("Enter your registration number: ");
    fgets(regNumber, MAX_LENGTH, stdin);

    // Input number of courses
    printf("Enter the number of courses you are taking (max %d): ", MAX_COURSES);
    scanf("%d", &numCourses);

    // Clear the input buffer
    while (getchar() != '\n');

    // Input courses
    printf("Enter the names of your courses:\n");
    for (int i = 0; i < numCourses; i++) {
        printf("Course %d: ", i + 1);
        fgets(courses[i], MAX_LENGTH, stdin);
    }

    // Display user details
    printf("\n");
    printf("User Details:\n");
    printf("Name: %s", name);
    printf("Registration Number: %s", regNumber);
    printf("Courses:\n");
    for (int i = 0; i < numCourses; i++) {
        printf("- %s", courses[i]);
    }

    return 0;
}