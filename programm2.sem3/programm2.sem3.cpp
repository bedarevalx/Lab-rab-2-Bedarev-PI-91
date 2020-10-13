
#include <iostream>

typedef struct construction {
    float a;
    float b;
    float c;
    float square;
    float perimeter;
    void Read();
    void Display();
    void Init(int a, int b, int c);
    void comaprs(construction1 cons1,construction1 cons2);
    void calcsquare();
}construction1;

void construction::Read() {
    printf("Введите стороны объекта:\nДлина = ");
    scanf_s("%f", &a);
    printf("Ширина = ");
    scanf_s("%f", &b);
    printf("Высота = ");
    scanf_s("%f", &c);
}
void construction::Display() {
    printf("\nПараметры объекта\nДлина = %f\nШирина = %f\nВысота = %f", a, b, c);
}
void construction::Init(int lenght, int width, int height) {
    a = lenght;
    b = width;
    c = height;
}
void construction::calcsquare() {
    square = a * b * c;
}

void construction::comaprs(construction1 cons1, construction1 cons2) {
    if (cons1.square == cons2.square) {
        printf("\nФигуры одинаковой площади");
        return;
    }
    if (cons1.square > cons2.square) {
        printf("\nПлощадь первой фигуры больше");
    }
    if (cons1.square < cons2.square) {
        printf("\nПлощадь второй фигуры больше");
    }
}

int main()
{
    setlocale(LC_ALL, "Rus");
    construction1 *x1;
    construction1 *x2;
    x1->Read();
    x1->Display();
    x2->Init(14, 18, 12);
    return 0;
}


