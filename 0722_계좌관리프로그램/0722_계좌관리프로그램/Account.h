#pragma once

class Account {
protected:
    int type;
    int id;
    string name;
    int balance;

public:
    Account(int _id, string _name);
    Account(int _id, string _name, int _balance);

public:
    int getId() const;
    string getName() const;
    int getBalance() const;
    int getType() const;

    virtual void AddBalance(int money);
    void MinBalance(int money);

    virtual void Print() const;
    virtual void Println() const;
};