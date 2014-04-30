#ifndef RECTRUBBER_H
#define RECTRUBBER_H

class RectRubber
{
    float its_ar; // высота резинки
    float its_br; // ширина резинки
    float its_R; // радиус скругления канавки
    float its_k; // ск-ко объёма внутри металла
    // для разрезанной резинки
    float its_ak; // внутренняя сторона канавки
    float its_bk; // внутренняя сторона канавки
    // для целой резинки
    float its_Dro; // внешний диаметр резинки
    float its_ako; // внутренняя сторона канавки
public:
    RectRubber();

    void set_ar(float ar); // установить высоту резинки
    void set_br(float br); // установить ширину резинки
    void set_R(float R); // установить радиус скругления канавки
    void set_k(float k); // установить коэф. объёма

    float Hk() const; // возвращает глубину канавки
    float k() const; // возвращает объём внутри металла
    float kDefault() const; // возвращает объём внутри металла по умолчанию
    float R() const; // возвращает радиус скругления канавки
    // для разрезанной резинки
    void set_ak(float ak); // установить внутреннюю сторону канавки
    void set_bk(float bk); // установить внутреннюю сторону канавки

    float Ak() const; // внешнняя сторона канавки
    float Bk() const; // внешнняя сторона канавки
    float lr() const; // длина разрезанной резинки
    float Dr() const; // диаметр, если хочется подобрать целую резинку
    // для целой резинки
    void set_Dro(float Dro); // установить внешний диаметр резинки
    void set_ako(float ako); // установить внутреннюю сторону канавки

    float bko() const; // внутренняя сторона канавки
    float Ako() const; // внешнняя сторона канавки
    float Bko() const; // внешнняя сторона канавки
};

#endif // RECTRUBBER_H
