#include "zenkovka.h"
#include <qmath.h>

#define PI (4.0*qAtan(1))

#define debugus0

#ifdef debugus
#include <QDebug>
#endif

Zenkovka::Zenkovka()
    : its_h(0)
    , its_dgv(0)
    , its_hgv(0)
    , its_dv(0)
    , its_dz(0)
    , its_hm(1.0)
{
}

//Zenkovka::Zenkovka(float h, float dgv, float hgv, float dv, float dz)
//    : its_h(h)
//    , its_dgv(dgv)
//    , its_hgv(hgv)
//    , its_dv(dv)
//    , its_dz(dz)
//{
//}

float Zenkovka::alphaG() const
{
#ifdef debugus
    qDebug() << "PI =" << PI;
    qDebug() << "180.0/PI =" << 180.0/PI;
    qDebug() << "qAtan( (2.0*its_hgv)/(its_dgv - its_dv) ) =" << qAtan( (2.0*its_hgv)/(its_dgv - its_dv) );
    qDebug() << "float Zenkovka::alphaG() const: " << (float)( 180.0 - 2.0*(180.0/PI)*qAtan( (2.0*its_hgv)/(its_dgv - its_dv) ) );
#endif
    return (float)( 180.0 - 2.0*(180.0/PI)*qAtan( (2.0*its_hgv)/(its_dgv - its_dv) ) );
}

float Zenkovka::Dz() const
{
    if(alphaG() >= 90.0)
    {
        return ( 2*its_h + its_dgv );
    }
    else
    {
//        return ( 2*(its_h + its_hgv) + its_dv );
        return (its_dz + 2*Hz());
    }
}

float Zenkovka::Hz() const
{
    if(alphaG() >= 90.0)
    {
        return ( its_h + (its_dgv - its_dz)/2 );
    }
    else
    {
//        return ( its_h + its_hgv );
        return (its_hgv + its_h - (its_dz - its_dv)*(its_dgv - its_dv)/(4*its_hgv));
    }
}

float Zenkovka::hO() const
{
    if(alphaG() >= 90.0)
    {
//        return ((Dz() - its_dgv)/2);
        return ((its_Dz - its_dgv)/2);
    }
    else
    {
//        return (its_dv/2 - its_hgv);
        return (HzO() - its_hgv +(its_dz - its_dv)*(its_dgv - its_dv)/(4*its_hgv));
    }
}

float Zenkovka::HzO() const
{
//    return ((Dz() - its_dz)/2);
    return ((its_Dz - its_dz)/2);
}

float Zenkovka::dm() const
{
    float temp = Dz() - 2.0*its_hm*tan(PI/4.0);
    if(temp < 0/*its_dz*/)
        temp = its_dz;
    return temp;
}

float Zenkovka::dmO() const
{
    float temp = its_Dz - 2.0*its_hm*tan(PI/4.0);
    if(temp < its_dz)
        temp = its_dz;
    return temp;
}

void Zenkovka::set_h(float h)
{
    its_h = h;
}

void Zenkovka::set_dgv(float dgv)
{
    its_dgv = dgv;
}

void Zenkovka::set_hgv(float hgv)
{
    its_hgv = hgv;
}

void Zenkovka::set_dv(float dv)
{
    its_dv = dv;
}

void Zenkovka::set_dz(float dz)
{
    its_dz = dz;
}

void Zenkovka::set_Dz(float Dz)
{
    its_Dz = Dz;
}

void Zenkovka::set_hm(float hm)
{
    its_hm = hm;
}
