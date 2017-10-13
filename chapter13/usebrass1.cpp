// usebrass1.cpp -- testing bank account classes
// compile with brass.cpp
#include <iostream>
#include "brass.h"

int main()
{
    using std::cout;
    using std::endl;

    Brass Piggy("Porcelot Pigg", 381299, 4000.00);//initialize Piggy objetct
    BrassPlus Hoggy("Horatio Hogg", 382288, 3000.00);//and invoke constructor
    Piggy.ViewAcct();	//invoke ViewAcct() via Object
    cout << endl;
    Hoggy.ViewAcct();	//invoke ViewAcct()
    cout << endl;
    cout << "Depositing $1000 into the Hogg Account:\n";
    Hoggy.Deposit(1000.00);
    cout << "New balance: $" << Hoggy.Balance() << endl;
    cout << "Withdrawing $4200 from the Pigg Account:\n";
    Piggy.Withdraw(4200.00);
    cout << "Pigg account balance: $" << Piggy.Balance() << endl;
    cout << "Withdrawing $4200 from the Hogg Account:\n";
    Hoggy.Withdraw(4200.00);
    Hoggy.ViewAcct();
	// std::cin.get();
    return 0; 
}
