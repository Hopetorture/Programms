#ifndef PROG_4_H
#define PROG_4_H

#include "prog_4_global.h"
#include <QDebug>

class PROG_4SHARED_EXPORT Prog_4
{

public:
    Prog_4();

    bool test();
    bool Not(bool first);
    void Not();
    bool Logical_conjunction(bool first,bool second);
    void Logical_conjunction();
    bool Logical_disjunction(bool first,bool second);
    void Logical_disjunction();
    bool Logical_implication(bool first,bool second);
    void Logical_implication();
    bool Logical_equality(bool first,bool second);
    void Logical_equality();
    bool Exclusive_disjunction(bool first,bool second);
    void Exclusive_disjunction();
    bool NAND(bool first,bool second);
    void NAND();
    bool NOR(bool first, bool second);
    void NOR();




};

#endif // PROG_4_H
