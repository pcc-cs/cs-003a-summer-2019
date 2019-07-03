#include <cstdio>
#include <iostream>
#include <string>

struct Student {
    std::string id;
    std::string firstName;
    std::string lastName;
    int credits = 0;
} s0;

void print(const Student &s) {
    printf("%-10s%-15s%-20s%-6d\n",
        s.id.c_str(),
        s.firstName.c_str(),
        s.lastName.c_str(),
        s.credits
    );
}
int main() {
    Student s1 = {"12321", "Jimmy", "Neutron", 20};
    Student s2;
    s2.firstName = "Emily";
    s2.lastName = "Dickinson";

    print(s0);
    print(s1);
    print(s2);
}
