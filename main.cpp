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
    cout << "請輸入年利率 (例如 2.5): ";
    cin >> rate;
    cout << "請輸入貸款年數 (例如 5): ";
    cin >> years;
    cout << "請輸入貸款金額 (例如 100000): ";
    cin >> amount;
    cout << "是否有寬限期?(是:1/否:2)";
	cin >> answer;
    if (answer == 1) {
		cout << "請輸入寬限期 (例如 3): ";
		cin >> graceperiod;
    }
    Loan loan(rate, years, amount,graceperiod);
    double monthly = loan.getMonthpay();
    double total = loan.getTotalpay();
    cout << fixed << setprecision(2); 
    cout << "每月應繳金額: $" << monthly << endl;
    cout << "總還款金額: $" << total << endl;
    if (answer == 1) {
        double graceperiodpayin = loan.getGraceperiodpayin();
	    double graceperiodpayout = loan.getGraceperiodpayout();
        cout << "寬限期內每月應繳金額: $" << graceperiodpayin << endl;
        cout << "寬限期後每月應繳金額: $" << graceperiodpayout << endl;
    }
	cout << "寬限期總共需付金額: $" << loan.getGraceperiodtotalpay() << endl;
    return 0;
}