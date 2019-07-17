#include <cstdio>
#include <iostream>
#include <cstring>

struct Node {
  int id;
  const char *name;
  Node *next;

  Node(int id, const char *name) : id(id), name(name), next(NULL) {
  }
};

class List {
 private:
  Node *head = NULL;
  Node *tail = NULL;
 public:
  void add(int, const char *);
  const char *search(int);
};

void List::add(int id, const char *name) {
  Node *np = new Node(id, name);
  if (head == NULL) {
    head = tail = np;
  } else {
    tail = tail->next = np;
  }
}

const char *List::search(int id) {
  for (Node *np = head; np != NULL; np = np->next) {
    if (np->id == id) {
      return np->name;
    }
  }

  return NULL;
}

int main() {
  List list;
  int id;
  std::string name;

  std::cout << "Enter data" << std::endl;
  for (;;) {
    std::cin >> id;
    if (id == 0) {
      break;
    }
    std::cin >> name;
    char *copy = new char[name.size()+1];
    strncpy(copy, name.c_str(), name.size());
    list.add(id, copy);
  }

  std::cout << "Enter ID" << std::endl;
  for (;;) {
    std::cin >> id;
    if (id == 0) {
      break;
    }
    const char *name = list.search(id);
    std::cout << std::string(name == NULL ? "NULL" : name) << std::endl;
  }
}
