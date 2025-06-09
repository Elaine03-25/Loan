#ifndef LOAN_H
#define LOAN_H

class Loan {
private:
    double yearrate;  //�~�Q�v
    int number;  //�~��
    double money;  //�U�ڪ��B
    int graceperiod;

public:
    // �غc�l
    Loan();
    Loan(double rate, int years, double amount);

    // �s���禡�]Getter�^
    double getYearrate() const;
    int getNumber() const;
    double getMoney() const;
	int getGraceperiod() const;

    // �ק�禡�]Setter�^
    void setYearrate(double rate);
    void setNumber(int years);
    void setMoney(double money);
	void setGraceperiod(int g);

    // �\��禡
    double getMonthpay() const;  //�C��ݥI���B
    double getGraceperiodpayin()const;  //�e�������ݥI���B
	double getGraceperiodpayout()const;  //�e������ݥI���B
};
#endif