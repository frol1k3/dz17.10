﻿#include <iostream>
#include <string>

using namespace std;

class Button {
private:
    int height;
    int width;
    string text;
public:
    Button(int height, int width, string text) {
        if (height < 0) {
            cout << "Ошибка, значение будет положительное!" << endl;
            this->height = -1 * height;
            this->width = width;

        }
        else if (width < 0) {
            cout << "Ошибка, значение будет положительное!" << endl;
            this->height = height;
            this->width = -1 * width;
        }
        else if (height > 0 && width > 0) {
            this->height = height;
            this->width = width;
        }
        else {
            cout << "Ошибка, значение будет положительное!" << endl;
            this->height = -1 * height;
            this->width = -1 * width;
        }
        this->text = text;
    }
    int getHeight() {
        return this->height;
    }
    void setHeight(int height) {
        if (height > 0) {
            this->height = height;
        }
        cout << "Ошибка, вы ввели недопустимое значение высоты кнопки!" << endl;
    }
    int getWidth() {
        return this->width;
    }
    void setWidth(int width) {
        if (width > 0) {
            this->width = width;
        }
        cout << "Ошибка, вы ввели недопустимое значение ширины кнопки!" << endl;
    }
    string getText() {
        return this->text;
    }
    void setText(string text) {
        this->text = text;
    }
    void print() {
        cout << "Высота: " << this->height << ", ширина: " << this->width << ", текст: " << this->text << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "ru");
    Button b1(13, -7, "XXX");
    b1.print();
    Button b2(10, 14, "XXZ");
    b2.print();
    b1.setHeight(-50);

}