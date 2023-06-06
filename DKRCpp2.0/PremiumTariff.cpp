#include "PremiumTariff.h"

PremiumTariff::PremiumTariff(const std::string& name, float subscriptionFee, int customersCount)
    : Tariff(name, subscriptionFee, customersCount) {}

float PremiumTariff::getPremiumDiscount() const {
    return 0.15f;  
}