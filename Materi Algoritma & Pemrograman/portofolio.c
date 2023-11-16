#include <stdio.h>
#include <string.h>

// Structure to store project information
struct Project {
    char name[100];
    char description[500];
    int year;
};

int main() {
    int choice;
    int numProjects = 0;
    struct Project projects[50];

    do {
        printf("\n=== Portfolio Program ===\n");
        printf("1. Add Project\n");
        printf("2. Display Portfolio\n");
        printf("3. Exit\n");
        printf("Select an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (numProjects < 50) {
                    struct Project project;
                    printf("Project Name: ");
                    scanf(" %[^\n]s", project.name); // Read the whole line, including spaces
                    printf("Project Description: ");
                    scanf(" %[^\n]s", project.description);
                    printf("Year: ");
                    scanf("%d", &project.year);

                    projects[numProjects++] = project;
                    printf("Project added successfully!\n");
                } else {
                    printf("Portfolio is full, unable to add more projects.\n");
                }
                break;
            case 2:
                printf("\n=== Portfolio List ===\n");
                for (int i = 0; i < numProjects; i++) {
                    printf("Project #%d\n", i + 1);
                    printf("Name: %s\n", projects[i].name);
                    printf("Description: %s\n", projects[i].description);
                    printf("Year: %d\n", projects[i].year);
                    printf("\n");
                }
                break;
            case 3:
                printf("Thank you for using the Portfolio Program.\n");
                break;
            default:
                printf("Invalid choice. Please select again.\n");
        }
    } while (choice != 3);

    return 0;
}