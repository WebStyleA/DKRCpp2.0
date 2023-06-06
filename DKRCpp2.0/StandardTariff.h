
#pragma once
#include "Tariff.h"

class StandardTariff : public Tariff {
public:
    StandardTariff(const std::string& name, float subscriptionFee, int customersCount);

   
    float getStandardDiscount() const;
};