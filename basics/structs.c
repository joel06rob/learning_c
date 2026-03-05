#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct Student{
    char name[50];
    int age;
    float gpa;
    bool isMember;
};

typedef struct{
    char model[25];
    int year;
    int price;
}Car;

void printStudent(struct Student student);

int main(){

    //struct - Custom container that holds multiple pieces of related information. Similar to objects
    struct Student student1 = {"Jim", 12, 2.5, true};
    struct Student undefinedStudent = {0};

    printf("%s\n", student1.name);
    printf("%d\n", student1.age);

    //assigning later
    strcpy(student1.name, "Jon");
    
    printStudent(student1);

    //array of structs - Array where each element contains a struct. Helps organize and group related data.

    Car cars[] = {{"A3", 2013, 10000}, {"RS6", 2019, 70000}, {"570s", 2019, 170000}};

    int number = sizeof(cars) / sizeof(cars[0]);

    for(int i = 0; i < number; i++){
        printf("%s %d %d\n", cars[i].model, cars[i].year, cars[i].price);
    }


    return 0;
}

void printStudent(struct Student student){
    printf("%s\n", student.name);
}