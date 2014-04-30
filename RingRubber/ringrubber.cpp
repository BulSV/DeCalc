#include "ringrubber.h"
#include <qmath.h>

#define PI (4.0*qAtan(1))

RingRubber::RingRubber()
    : its_ar(0)
    , its_br(0)
    , its_k(2.0/3.0)
    , its_dk(0)
    , its_Dr(0)
{
}

float RingRubber::Hk() const
{
    return (its_k*its_ar);
}

float RingRubber::dko() const
{
    return(its_Dr - its_br*(1.0 + 1.0/its_k));
}

float RingRubber::Dk() const
{
    return (its_dk + 2.0*its_br/its_k);
}

float RingRubber::Dko() const
{
    return(its_Dr - its_br*(1.0 - 1.0/its_k));
}

float RingRubber::lr() const
{
    return (PI*(its_dk + its_br*(1.0 + 1.0/its_k)));
}

float RingRubber::Dr() const
{
    return (its_dk + its_br*(1.0 + 1.0/its_k));
}

float RingRubber::k() const
{
    return its_k;
}

float RingRubber::kDefault() const
{
    return (2.0/3.0);
}

void RingRubber::set_ar(float ar)
{
    its_ar = ar;
}

void RingRubber::set_br(float br)
{
    its_br = br;
}

void RingRubber::set_k(float k)
{
    its_k = k;
}

void RingRubber::set_dk(float dk)
{
    its_dk = dk;
}

void RingRubber::set_Dr(float Dr)
{
    its_Dr = Dr;
}

