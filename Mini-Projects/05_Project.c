#include <stdio.h>
#include <string.h>

struct student
{
    char name[64];
    int duration;
    char course[64];
    int fee;
};

void entry()
{
    struct student s[120];
    int n, fee, duration;
    char name[64], course[64];
    printf("Enter the number of students:- ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter student %d's name:-\n ", i + 1);
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = 0;
        strcpy(s[i].name, name);
        printf("Enter the programme duration:-");
        scanf("%d", &duration);
        s[i].duration = duration;
        printf("Enter the student's course:-\n");
        fgets(course, sizeof(course), stdin);
        course[strcspn(course, "\n")] = 0;
        strcpy(s[i].course, course);
        printf("Enter the fees:-");
        scanf("%d", &fee);
        s[i].fee = fee;
    }
}
void display()
{
    struct student s[120];
    int n;
    printf("Enter the number of students:- ");
    scanf("%d", &n);
    printf("Name\tCourse\tFee\tDuration\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\t%s\t%d\t%d years\n", s[i].name, s[i].course, s[i].fee, s[i].duration);
    }
}
int main(int argc, char const *argv[])
{
    entry();
    display();
    return 0;
}
