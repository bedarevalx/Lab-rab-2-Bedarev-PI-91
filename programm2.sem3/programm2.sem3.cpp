
#include <iostream>

typedef struct construction {
    float a=0;
    float b=0;
    float c=0;
    float volume =0;
    float perimeter=0;
    void Read();
    void Display();
    void Init(float a, float b, float c);
    void calcvolume();
    void calcperim();
    void DisplayFinal();
}construction1;

void construction::Read() {
    printf("Введите стороны объекта:\nДлина = ");
    scanf_s("%f", &a);
    printf("Ширина = ");
    scanf_s("%f", &b);
    printf("Высота = ");
    scanf_s("%f", &c);
    printf("\n**************************");
}
void construction::Display() {
    printf("\nПараметры объекта\nДлина = %f\nШирина = %f\nВысота = %f", a, b, c);
    printf("\n**************************");
}
void construction::Init(float lenght, float width, float height) {
    a = lenght;
    b = width;
    c = height;
}
void construction::calcvolume() {
    volume = a * b * c;
}
void construction::calcperim() {
    perimeter = 2 * (a * b + a * c + b * c);
}
void construction::DisplayFinal() {
    printf("\nПараметры объекта\nДлина = %f\nШирина = %f\nВысота = %f\nОбъем = %f\nПериметр = %f", a, b, c, volume, perimeter);
    printf("\n**************************");
}

void compare(construction cons1, construction cons2) {
    if (cons1.volume == cons2.volume) {
        printf("\nФигуры одинакового объема");
        return;
    }
    if (cons1.volume > cons2.volume) {
        printf("\nОбъем первой фигуры больше");
    }
    if (cons1.volume < cons2.volume) {
        printf("\nОбъем второй фигуры больше");
    }
    printf("\n**************************");
}
int main()
{
    setlocale(LC_ALL, "Rus");
    construction1* x1 = new construction1;
    construction1* x2 = new construction1;
    x1->Read();
    x2->Init(14, 18, 12);
    x1->Display();
    x2->Display();
    x1->calcvolume();
    x2->calcvolume();
    x1->calcperim();
    x2->calcperim();
    compare(*x1, *x2);
    x1->DisplayFinal();
    x2->DisplayFinal();
    delete x1;
    delete x2;
    return 0;
}


