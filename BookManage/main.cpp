#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

// 图书结构体
struct Book {
    std::string isbn;
    std::string title;
    double price;
    Book* next;
};

// 插入图书到链表
void insertBook(Book** head, const std::string& isbn, const std::string& title, double price) {
    Book* newBook = new Book;
    newBook->isbn = isbn;
    newBook->title = title;
    newBook->price = price;
    newBook->next = *head;
    *head = newBook;
}

// 删除图书从链表
void deleteBook(Book** head, const std::string& isbn) {
    if (*head == nullptr) {
        std::cout << "链表为空，无法删除图书。" << std::endl;
        return;
    }

    if ((*head)->isbn == isbn) {
        Book* temp = *head;
        *head = (*head)->next;
        delete temp;
        std::cout << "图书已删除。" << std::endl;
        return;
    }

    Book* current = *head;
    while (current->next!= nullptr && current->next->isbn!= isbn) {
        current = current->next;
    }

    if (current->next == nullptr) {
        std::cout << "未找到该ISBN的图书，无法删除。" << std::endl;
    } else {
        Book* temp = current->next;
        current->next = current->next->next;
        delete temp;
        std::cout << "图书已删除。" << std::endl;
    }
}

// 从文本文件读入图书数据到链表
void readDataFromFile(Book** head, const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "无法打开文件。" << std::endl;
        return;
    }

    std::string line;
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string isbn, title;
        double price;

        if (!(iss >> isbn >> title >> price)) {
            std::cerr << "文件格式错误，忽略该行数据。" << std::endl;
            continue;
        }

        insertBook(head, isbn, title, price);
    }

    file.close();
}

// 显示图书链表
void displayBooks(Book* head) {
    Book* current = head;
    while (current!= nullptr) {
        std::cout << "ISBN: " << current->isbn << ", 书名: " << current->title << ", 定价: " << current->price << std::endl;
        current = current->next;
    }
}

int main() {
    Book* head = nullptr;

    // 从文本文件读入数据
    readDataFromFile(&head, "book.txt");

    // 插入一本新书
    insertBook(&head, "9787302333333", "新书名", 50.0);

    // 删除一本图书
    deleteBook(&head, "9787302257646");

    // 显示图书链表
    displayBooks(head);

    // 释放链表内存
    Book* current = head;
    while (current!= nullptr) {
        Book* next = current->next;
        delete current;
        current = next;
    }

    return 0;
}