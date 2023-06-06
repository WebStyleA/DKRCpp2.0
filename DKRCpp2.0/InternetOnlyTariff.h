#pragma once
#include "Tariff.h"

class InternetOnlyTariff : public Tariff {
public:
    InternetOnlyTariff(const std::string& name, float subscriptionFee, int customersCount);

    // Additional method for the InternetOnlyTariff
    int getInternetVolume() const;
};