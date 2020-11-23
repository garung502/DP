#ifndef DUCK_H
#define DUCK_H


class Duck
{
public:
    Duck();
    virtual void swim();
    virtual void display();
    virtual void fly() = 0;
    virtual void quack() = 0;
};

#endif // DUCK_H
