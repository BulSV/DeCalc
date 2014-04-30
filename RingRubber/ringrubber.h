#ifndef RINGRUBBER_H
#define RINGRUBBER_H

class RingRubber
{
    float its_ar; // высота резинки
    float its_br; // ширина резинки
    float its_k; // ск-ко объёма внутри металла
    float its_dk; // внутренний диаметр канавки
    float its_Dr; // внешний диаметр резинки
public:
    RingRubber();
    float Hk() const; // глубина канавки
    float dko() const; // внутренний диаметр канавки при целой резинке
    float Dk() const; // внешний диаметр канавки при разрезанной резинке
    float Dko() const; // внешний диаметр канавки при целой резинке
    float lr() const; // длина разрезанной резинки
    float Dr() const; // диаметр, если хочется подобрать целую резинку

    float k() const;
    float kDefault() const;

    void set_ar(float ar);
    void set_br(float br);
    void set_k(float k);
    void set_dk(float dk);
    void set_Dr(float Dr);
};

#endif // RINGRUBBER_H
