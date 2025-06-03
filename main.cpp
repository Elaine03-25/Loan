#include <iostream>
#include <iomanip> 
#include "Loan.h"
using namespace std;
int main() {
    double rate;
    int years;
    double amount;
	int graceperiod;
	int answer;
    cout << "�п�J�~�Q�v (�Ҧp 2.5): ";
    cin >> rate;
    cout << "�п�J�U�ڦ~�� (�Ҧp 5): ";
    cin >> years;
    cout << "�п�J�U�ڪ��B (�Ҧp 100000): ";
    cin >> amount;
    cout << "�O�_���e����?(�O:1/�_:2)";
	cin >> answer;
    if (answer == 1) {
		cout << "�п�J�e���� (�Ҧp 3): ";
		cin >> graceperiod;
    }
    Loan loan(rate, years, amount,graceperiod);
    double monthly = loan.getMonthpay();
    double total = loan.getTotalpay();
    cout << fixed << setprecision(2); 
    cout << "�C����ú���B: $" << monthly << endl;
    cout << "�`�ٴڪ��B: $" << total << endl;
    if (answer == 1) {
        double graceperiodpayin = loan.getGraceperiodpayin();
	    double graceperiodpayout = loan.getGraceperiodpayout();
        cout << "�e�������C����ú���B: $" << graceperiodpayin << endl;
        cout << "�e������C����ú���B: $" << graceperiodpayout << endl;
    }
	cout << "�e�����`�@�ݥI���B: $" << loan.getGraceperiodtotalpay() << endl;
    return 0;
}