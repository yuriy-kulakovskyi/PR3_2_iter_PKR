#include <iostream>
#include "functions/functions.h"

int main() {
    Node* head = nullptr;

    // Формуємо список
    append(head, 1);
    append(head, 2);
    append(head, 3);
    append(head, 2);
    append(head, 4);
    append(head, 2);
    append(head, 5);

    std::cout << "Список перед видаленням: ";
    printList(head);

    int target;
    std::cout << "Введіть значення для видалення: ";
    std::cin >> target;

    // Видаляємо елементи зі списку
    removeElements(head, target);

    std::cout << "Список після видалення: ";
    printList(head);

    return 0;
}