#pragma once

class FaithAccount : public Account {
public:
    FaithAccount(int _id, string _name);
    FaithAccount(int _id, string _name, int _balance);

public:
    void AddBalance(int money);
};