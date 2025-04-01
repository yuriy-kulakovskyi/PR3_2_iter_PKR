#include <iostream>
#include "functions.h"

// Функція для додавання елемента в кінець списку
void append(Node*& head, int val) {
  if (!head) {
    head = new Node(val);
    return;
  }
  Node* temp = head;
  while (temp->next) {
    temp = temp->next;
  }
  temp->next = new Node(val);
}

// Функція для виводу списку
void printList(Node* head) {
  Node* temp = head;
  while (temp) {
    std::cout << temp->data << " ";
    temp = temp->next;
  }
  std::cout << std::endl;
}

// Функція для видалення всіх елементів зі значенням target
void removeElements(Node*& head, int target) {
  // Видаляємо всі входження target на початку списку
  while (head && head->data == target) {
    Node* temp = head;
    head = head->next;
    delete temp;
  }

  // Видаляємо інші входження target в середині списку
  Node* current = head;
  while (current && current->next) {
    if (current->next->data == target) {
      Node* temp = current->next;
      current->next = current->next->next;
      delete temp;
    } else {
      current = current->next;
    }
  }
}