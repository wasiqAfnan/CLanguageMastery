#include <stdio.h>
#include <string.h>

// Define the Address structure
struct Address {
    char street[50];
    char city[50];
    int zip;
};

// Define the Person structure
struct Person {
    char name[50];
    int age;
    struct Address address;  // Nested Address structure
};

int main() {
    // Create and initialize a Person
    struct Person person;

    // Set person's name and age
    strcpy(person.name, "Wasiq Afnan");
    person.age = 30;

    // Set person's address
    strcpy(person.address.street, "123 street");
    strcpy(person.address.city, "Kolkata");
    person.address.zip = 700060;

    // Print the person's information
    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);
    printf("Address: %s, %s, %d\n", person.address.street, person.address.city, person.address.zip);

    return 0;
}
