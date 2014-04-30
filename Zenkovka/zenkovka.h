#ifndef ZENKOVKA_H
#define ZENKOVKA_H

class Zenkovka
{
    float its_h;
    float its_dgv;
    float its_hgv;
    float its_dv;
    float its_dz;
    float its_Dz;
    float its_hm;
public:
    Zenkovka();
//    Zenkovka(float h, float dgv, float hgv, float dv, float dz);
    float alphaG() const;
    float Dz() const;
    float Hz() const;
    float hO() const;
    float HzO() const;
    float dm() const;
    float dmO() const;
    void set_h(float h);
    void set_dgv(float dgv);
    void set_hgv(float hgv);
    void set_dv(float dv);
    void set_dz(float dz);
    void set_Dz(float Dz);
    void set_hm(float hm);
};

#endif // ZENKOVKA_H
