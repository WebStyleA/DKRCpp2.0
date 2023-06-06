#include "StandardTariff.h"

StandardTariff::StandardTariff(const std::string& name, float subscriptionFee, int customersCount)
    : Tariff(name, subscriptionFee, customersCount) {}

float StandardTariff::getStandardDiscount() const {

    return 0.05f;
}