#include "std.h"

FaithAccount::FaithAccount(int _id, string _name) : Account(_id, _name) {
    type = 2;
}
FaithAccount::FaithAccount(int _id, string _name, int _balance) 
    : Account(_id, _name, _balance) {
    type = 2;
}

void FaithAccount::AddBalance(int money) {
    if (money <= 0) {
        throw "�߸��� �ݾ��� �Էµƽ��ϴ�.";
    }

    balance += money + (int)(money * 0.1);
}
