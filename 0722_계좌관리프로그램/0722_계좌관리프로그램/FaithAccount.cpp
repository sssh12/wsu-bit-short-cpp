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
        throw "잘못된 금액이 입력됐습니다.";
    }

    balance += money + (int)(money * 0.1);
}
