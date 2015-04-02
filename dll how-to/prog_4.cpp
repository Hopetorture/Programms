#include "prog_4.h"


Prog_4::Prog_4()
{
}

bool Prog_4::test()
{
    qDebug()<<"hello";
    return true;
}

bool Prog_4::Not(bool first)
{
    if(first==true)
        return false;
    else
        return true;

}

void Prog_4::Not()
{
  qDebug()<<"In logic, negation, also called logical complement, is an operation that takes a proposition p to another proposition 'not' p";
}


bool Prog_4::Logical_conjunction(bool first, bool second)
{
    if(first==true && second==true)
        return true;
    if(first==true && second!=true)
        return false;
    if(first!=true && second==true)
        return false;
    if(first!=true && second!=true)
        return false;


}

void Prog_4::Logical_conjunction()
{
   qDebug() <<"Logical conjunction is an operation on two logical values, typically the values of two propositions, that produces a value of true if both of its operands are true.";


}

bool Prog_4::Logical_disjunction(bool first, bool second)
{
    if(first==true && second==true)
        return true;
    if(first==true && second!=true)
        return true;
    if(first!=true && second==true)
        return true;
    if(first!=true && second!=true)
        return false;
}

void Prog_4::Logical_disjunction()
{
    qDebug()<<"Logical disjunction is an operation on two logical values, typically the values of two propositions, that produces a value of true if at least one of its operands is true.";
}

bool Prog_4::Logical_implication(bool first, bool second)
{
    if(first==true && second==true)
        return true;
    if(first==true && second!=true)
        return false;
    if(first!=true && second==true)
        return true;
    if(first!=true && second!=true)
        return true;
}

void Prog_4::Logical_implication()
{
    qDebug()<<"Logical implication or the material conditional are both associated with an operation on two logical values, typically the values of two propositions, that produces a value of false just in the singular case the first operand is true and the second operand is false.";
}

bool Prog_4::Logical_equality(bool first, bool second)
{
    if(first==true && second==true)
        return true;
    if(first==true && second!=true)
        return false;
    if(first!=true && second==true)
        return false;
    if(first!=true && second!=true)
        return true;

}

void Prog_4::Logical_equality()
{
    qDebug()<<"Logical equality (also known as biconditional) is an operation on two logical values, typically the values of two propositions, that produces a value of true if both operands are false or both operands are true.";
}

bool Prog_4::Exclusive_disjunction(bool first, bool second)
{

    if(first==true && second==true)
        return false;
    if(first==true && second!=true)
        return true;
    if(first!=true && second==true)
        return true;
    if(first!=true && second!=true)
        return false;

}

void Prog_4::Exclusive_disjunction()
{
    qDebug()<<"Exclusive disjunction is an operation on two logical values, typically the values of two propositions, that produces a value of true if one but not both of its operands is true.";
}

bool Prog_4::NAND(bool first, bool second)
{
    if(first==true && second==true)
        return false;
    if(first==true && second!=true)
        return true;
    if(first!=true && second==true)
        return true;
    if(first!=true && second!=true)
        return true;
}

void Prog_4::NAND()
{
    qDebug()<<"The logical NAND is an operation on two logical values, typically the values of two propositions, that produces a value of false if both of its operands are true. In other words, it produces a value of true if at least one of its operands is false.";
}

bool Prog_4::NOR(bool first, bool second)
{
    if(first==true && second==true)
        return false;
    if(first==true && second!=true)
        return false;
    if(first!=true && second==true)
        return false;
    if(first!=true && second!=true)
        return true;
}

void Prog_4::NOR()
{
    qDebug()<<"The logical NOR is an operation on two logical values, typically the values of two propositions, that produces a value of true if both of its operands are false. In other words, it produces a value of false if at least one of its operands is true";
}






