#pragma once

class ContriAccount: public Account {
protected:
    int contribution;

public:
    ContriAccount(int _id, string _name);
    ContriAccount(int _id, string _name, int _balance, int _contribution);

public:
    int getContriBution() const;

public:
    void AddBalance(int money);
    void Print() const;
    void Println() const;
};
