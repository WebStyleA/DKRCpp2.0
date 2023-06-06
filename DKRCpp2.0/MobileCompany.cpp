#include "MobileCompany.h"
#include <algorithm>

MobileCompany::MobileCompany() {}

void MobileCompany::addTariff(const Tariff& tariff) {
    tariffs.push_back(tariff);
}

int MobileCompany::getTotalCustomers() const {
    int total = 0;
    for (const auto& tariff : tariffs) {
        total += tariff.getCustomersCount();
    }
    return total;
}

void MobileCompany::sortTariffs() {
    std::sort(tariffs.begin(), tariffs.end(),
        [](const Tariff& a, const Tariff& b) {
            return a.getSubscriptionFee() < b.getSubscriptionFee();
        });
}

std::vector<Tariff> MobileCompany::findTariffsInRange(float lower, float upper) const {
    std::vector<Tariff> result;
    for (const auto& tariff : tariffs) {
        if (tariff.getSubscriptionFee() >= lower && tariff.getSubscriptionFee() <= upper) {
            result.push_back(tariff);
        }
    }
    return result;
}

const std::vector<Tariff>& MobileCompany::getTariffs() const {
    return tariffs;
}