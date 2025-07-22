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
        throw "�߸��� �ݾ��� �Էµƽ��ϴ�.";
    }

    int donate = (int)(money * 0.1);
    balance += (money - donate);
    contribution += donate;
}

void ContriAccount::Print() const {
    cout << "���¹�ȣ: " << id << "\t�̸�: " << name << "\t�ܾ�: ";
    cout << balance << "\t��α�: " << contribution << endl;
}
void ContriAccount::Println() const {
    cout << "[���¹�ȣ]: " << id << endl;
    cout << "[��    ��]: " << name << endl;
    cout << "[��    ��]: " << balance << endl;
    cout << "[�� �� ��]: " << contribution << endl;
}