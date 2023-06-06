
#pragma once
#include <string>

class Tariff {
protected:
    std::string name;
    float subscriptionFee;
    int customersCount;
public:
    Tariff();
    Tariff(const std::string& name, float subscriptionFee, int customersCount);
    virtual ~Tariff() = default;

    void setName(const std::string& name);
    void setSubscriptionFee(float subscriptionFee);
    void setCustomersCount(int customersCount);

    std::string getName() const;
    float getSubscriptionFee() const;
    int getCustomersCount() const;

    friend std::ostream& operator<<(std::ostream& os, const Tariff& tariff);
    virtual std::string toString() const;
};