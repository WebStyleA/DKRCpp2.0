#include "Tariff.h"
#include <sstream>

Tariff::Tariff() : name(""), subscriptionFee(0), customersCount(0) {}

Tariff::Tariff(const std::string& name, float subscriptionFee, int customersCount)
    : name(name), subscriptionFee(subscriptionFee), customersCount(customersCount) {}

void Tariff::setName(const std::string& name) {
    this->name = name;
}

void Tariff::setSubscriptionFee(float subscriptionFee) {
    this->subscriptionFee = subscriptionFee;
}

void Tariff::setCustomersCount(int customersCount) {
    this->customersCount = customersCount;
}

std::string Tariff::getName() const {
    return this->name;
}

float Tariff::getSubscriptionFee() const {
    return this->subscriptionFee;
}

int Tariff::getCustomersCount() const {
    return this->customersCount;
}

std::ostream& operator<<(std::ostream& os, const Tariff& tariff) {
    return os << tariff.toString();
}

std::string Tariff::toString() const {
    std::stringstream ss;
    ss << "Tariff{name=" << this->name
        << ", subscriptionFee=" << this->subscriptionFee
        << ", customersCount=" << this->customersCount << "}";
    return ss.str();
}