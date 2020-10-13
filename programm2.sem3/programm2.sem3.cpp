
#include <iostream>

typedef struct {
    float a;
    float b;
    float c;
    void Read();
    void Display();
    void Init(int a, int b, int c);
}Object;

void Object::Read() {
    printf("Введите стороны объекта:\nДлина = ");
    scanf("%f", &a);
    printf("Ширина = ");
    scanf("%f", &b);
    printf("Высота = ");
    scanf("%f", &c);
}
void Object::Display() {
    printf("\nПараметры объекта\nДлина = %f\nШирина = %f\nВысота = %f", a, b, c);
}

int main()

{
    Object* a;
    setlocale(LC_ALL, "Rus");
    return 0;
}
