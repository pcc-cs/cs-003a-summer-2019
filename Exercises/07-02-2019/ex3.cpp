#include <cstdio>
#include <iostream>
#include <string>

struct Student {
    std::string id;
    std::string firstName;
    std::string lastName;
    int credits = 0;
};

void setCredits(Student *sp, int c) {
    sp->credits = c;
}
void print(const Student &s) {
    printf("%-10s%-15s%-20s%-6d\n",
        s.id.c_str(),
        s.firstName.c_str(),
        s.lastName.c_str(),
        s.credits
    );
}
int main() {
    Student s1;
    setCredits(&s1, 10);
    print(s1);
}
