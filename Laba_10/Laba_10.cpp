#include <iostream>

struct Node {
    int data;       // Данные узла
    Node* next;     // Указатель на следующий узел

    Node(int value) : data(value), next(nullptr) {} // Конструктор узла
}
;

class LinkedList {
private:
    Node* head; // Указатель на голову списка

public:
    LinkedList() : head(nullptr) {} // Конструктор списка

    // Метод для добавления элемента в конец списка
    void append(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Метод для проверки, является ли число палиндромом
    bool isPalindrome(int number) {
        int reversed = 0, original = number;
        while (number > 0) {
            reversed = reversed * 10 + number % 10;
            number /= 10;
        }
        return original == reversed;
    }

    // Метод для удаления простых чисел
    void removePrimes() {
        Node* current = head;
        Node* prev = nullptr;

        while (current) {
            if (isPrime(current->data)) {
                if (prev) {
                    prev->next = current->next; // Удаляем узел
                } else {
                    head = current->next; // Удаляем голову
                }
                Node* temp = current;
                current = current->next;
                delete temp; // Освобождаем память
            } else {
                prev = current;
                current = current->next;
            }
        }
    }

    // Метод для проверки, является ли число простым
    bool isPrime(int number) {
        if (number < 2) return false;
        for (int i = 2; i * i <= number; i++) {
            if (number % i == 0) return false;
        }
        return true;
    }

    // Метод для дублирования чисел, заканчивающихся нулем
    void duplicateZeros() {
        Node* current = head;
        while (current) {
            if (current->data % 10 == 0) {
                Node* newNode = new Node(current->data);
                newNode->next = current->next;
                current->next = newNode;
                current = newNode->next; // Пропускаем новый узел
            } else {
                current = current->next;
            }
        }
    }

    // Метод для сортировки списка по невозрастанию
    void sortDescending() {
        // Простой алгоритм сортировки вставками
        if (!head) return;

        Node* sorted = nullptr;
        Node* current = head;

        while (current) {
            Node* next = current->next;
            if (!sorted || sorted->data <= current->data) {
                current->next = sorted;
                sorted = current;
            } else {
                Node* temp = sorted;
                while (temp->next && temp->next->data > current->data) {
                    temp = temp->next;
                }
                current->next = temp->next;
                temp->next = current;
            }
            current = next;
        }
        head = sorted; // Обновляем голову списка
    }

    // Метод для вывода списка
    void printList() {
        Node* current = head;
        while (current) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    // Метод для обработки списка в зависимости от наличия палиндромов
    void processList() {
        bool hasPalindrome = false;
        Node* current = head;

        while (current) {
            if (isPalindrome(current->data)) {
                hasPalindrome = true;
                break;
            }
            current = current->next;
        }

        if (!hasPalindrome) {
            sortDescending();
        } else {
            removePrimes();
            duplicateZeros();
        }
    }

}
;

int main() {
    LinkedList list;
    int number;

    std::cout << "Введите последовательность натуральных чисел (введите 0 для завершения ввода чисел):" << std::endl;
    while (true) {
        std::cin >> number;
        if (number == 0) break; // Завершение ввода
        list.append(number);
    }

    list.processList(); // Обработка списка
    std::cout << "Результат:" << std::endl;
    list.printList(); // Вывод результата

    return 0;
}


