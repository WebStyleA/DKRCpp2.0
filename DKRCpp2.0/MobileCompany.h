#pragma once
#include <vector>
#include "Tariff.h"

class MobileCompany {
private:
    std::vector<Tariff> tariffs;
public:
    MobileCompany();
    ~MobileCompany() = default;

    void addTariff(const Tariff& tariff);
    int getTotalCustomers() const;
    void sortTariffs();
    std::vector<Tariff> findTariffsInRange(float lower, float upper) const;
    const std::vector<Tariff>& getTariffs() const;

    // Add other necessary methods here...
};