#include "rectrubber.h"
#include <qmath.h>

#define PI (4.0*qAtan(1))

RectRubber::RectRubber()
    : its_ar(0)
    , its_br(0)
    , its_R(3)
    , its_k(2.0/3.0)
    , its_ak(0)
    , its_bk(0)
    , its_Dro(0)
    , its_ako(0)
{
}

void RectRubber::set_ar(float ar)
{
    its_ar = ar;
}

void RectRubber::set_br(float br)
{
    its_br = br;
}

void RectRubber::set_R(float R)
{
    its_R = R;
}

void RectRubber::set_k(float k)
{
    its_k = k;
}

float RectRubber::Hk() const
{
    return (its_k * its_ar);
}

float RectRubber::k() const
{
    return its_k;
}

float RectRubber::kDefault() const
{
    return (2.0/3.0);
}

float RectRubber::R() const
{
    return its_R;
}

void RectRubber::set_ak(float ak)
{
    its_ak = ak;
}

void RectRubber::set_bk(float bk)
{
    its_bk = bk;
}

float RectRubber::Ak() const
{
    return (its_ak + 2 * its_br / its_k);
}

float RectRubber::Bk() const
{
    return (its_bk + 2 * its_br / its_k);
}

float RectRubber::lr() const
{
    if(2 * its_R <= its_ak && 2 * its_R <= its_bk)
        return (2 * (its_ak + 2 * its_br / its_k + its_bk - its_R * (4 - PI)));
    else
        return -1;
}

float RectRubber::Dr() const
{
    if(2 * its_R <= its_ak && 2 * its_R <= its_bk)
        return (lr() / PI);
    else
        return -1;
}

void RectRubber::set_Dro(float Dro)
{
    its_Dro = Dro;
}

void RectRubber::set_ako(float ako)
{
    its_ako = ako;
}

float RectRubber::bko() const
{
    if(2 * its_R <= its_ako)
        return (PI * its_Dro / 2 - its_ako - 2 * its_br / its_k + its_R * (4 - PI));
    else
        return -1;
}

float RectRubber::Ako() const
{
    return (its_ako + 2 * its_br / its_k);
}

float RectRubber::Bko() const
{
    return (bko() + 2 * its_br / its_k);
}
