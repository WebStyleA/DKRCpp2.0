#include "InternetOnlyTariff.h"

InternetOnlyTariff::InternetOnlyTariff(const std::string& name, float subscriptionFee, int customersCount)
    : Tariff(name, subscriptionFee, customersCount) {}

int InternetOnlyTariff::getInternetVolume() const {

    return 100;  
}