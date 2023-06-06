#pragma once
#include "Tariff.h"

class PremiumTariff : public Tariff {
public:
    PremiumTariff(const std::string& name, float subscriptionFee, int customersCount);

    // Additional method for the PremiumTariff
    float getPremiumDiscount() const;
};