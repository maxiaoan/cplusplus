// brass.h  -- bank account classes
#ifndef BRASS_H_
#define BRASS_H_
#include <string>
// Brass Account Class
class Brass
{
private:
    std::string fullName;
    long acctNum;
    double balance;
public:
    Brass(const std::string & s = "Nullbody", long an = -1,
                double bal = 0.0);
    void Deposit(double amt);
    virtual void Withdraw(double amt);//Virtual methods 
    double Balance() const;
    virtual void ViewAcct() const;//virtual methods
    virtual ~Brass() {}
};

//Brass Plus Account Class derivate from Brass
class BrassPlus : public Brass
{
private:
    double maxLoan;	//addition 3 data member
    double rate;
    double owesBank;
public:
    BrassPlus(const std::string & s = "Nullbody", long an = -1,
            double bal = 0.0, double ml = 500,
            double r = 0.11125);
    BrassPlus(const Brass & ba, double ml = 500, 
		                        double r = 0.11125);
    virtual void ViewAcct()const;//virtual methods
    virtual void Withdraw(double amt);//virtual methods
    void ResetMax(double m) { maxLoan = m; }	//Addition 3 function member
    void ResetRate(double r) { rate = r; };
    void ResetOwes() { owesBank = 0; }
};

#endif
