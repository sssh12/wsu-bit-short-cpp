#include "std.h"

ContriAccount::ContriAccount(int _id, string _name):
    Account(_id, _name), contribution(0) {
    type = 3;
}
ContriAccount::ContriAccount(int _id, string _name, int _balance, int _contribution):
    Account(_id, _name, _balance), contribution(_contribution) {
    type = 3;
}

int ContriAccount::getContriBution() const { 
    return contribution; 
}

void ContriAccount::AddBalance(int money) {
    if (money <= 0) {
        throw "잘못된 금액이 입력됐습니다.";
    }

    int donate = (int)(money * 0.1);
    balance += (money - donate);
    contribution += donate;
}

void ContriAccount::Print() const {
    cout << "계좌번호: " << id << "\t이름: " << name << "\t잔액: ";
    cout << balance << "\t기부금: " << contribution << endl;
}
void ContriAccount::Println() const {
    cout << "[계좌번호]: " << id << endl;
    cout << "[이    름]: " << name << endl;
    cout << "[잔    액]: " << balance << endl;
    cout << "[기 부 금]: " << contribution << endl;
}