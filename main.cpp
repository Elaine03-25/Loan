#include <iostream>
#include <iomanip> 
#include <cmath>
#include "Loan.h"
using namespace std;
int main() {
    double rate;
    double years;
    double amount;
    double graceperiod;
    double answer;
    cout << "�п�J�~�Q�v (�Ҧp 2.5): ";
    cin >> rate;
    cout << "�п�J�U�ڦ~�� (�Ҧp 5): ";
    cin >> years;
    cout << "�п�J�U�ڪ��B (�Ҧp 100000): ";
    cin >> amount;
    cout << "�O�_���e����?(�O:1/�_:2)";
    cin >> answer;
    Loan loan(rate, years, amount);
    if (answer == 1) {
        cout << "�п�J�e���� (�Ҧp 3): ";
        cin >> graceperiod;
        loan.setGraceperiod(graceperiod);
        double graceperiodpayin = loan.getGraceperiodpayin();
        double graceperiodpayout = loan.getGraceperiodpayout();
        cout << fixed << setprecision(2);
        cout << "�e�������C����ú���B: $" << graceperiodpayin << endl;
        cout << "�e������C����ú���B: $" << graceperiodpayout << endl;
    }
    else {
        double monthly = loan.getMonthpay();
        cout << fixed << setprecision(2);
        cout << "�C����ú���B: $" << monthly << endl;
    }
    return 0;
}
