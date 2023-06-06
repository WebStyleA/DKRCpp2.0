#include "MobileCompany.h"
#include "Logger.h"
#include "Tariff.h"
#include "StandardTariff.h"
#include "PremiumTariff.h"
#include "InternetOnlyTariff.h"
#include <iostream>

int main() {
    MobileCompany company;
    Logger logger("log.txt",2);


    company.addTariff( StandardTariff ("Standard Tariff", 100.0, 200));
    company.addTariff( PremiumTariff ("Premium Tariff", 120.0, 210));
    company.addTariff( InternetOnlyTariff(" Internet Only Tariff", 120.0, 300));


  
    int totalCustomers = company.getTotalCustomers();
    std::cout << "Total number of customers: " << totalCustomers << std::endl;
    logger.log("Total number of customers: " + std::to_string(totalCustomers));

    company.sortTariffs();

    std::cout << "Tariffs after sorting: " << std::endl;
    logger.log("Tariffs after sorting: ");
    for (const auto& tariff : company.getTariffs()) {
        std::cout << tariff.toString() << std::endl;
        logger.log(tariff.toString());
    }

    float lower = 150.0;
    float upper = 250.0;
    auto tariffsInRange = company.findTariffsInRange(lower, upper);


    std::cout << "Tariffs in range (" << lower << ", " << upper << "):" << std::endl;
    logger.log("Tariffs in range (" + std::to_string(lower) + ", " + std::to_string(upper) + "):");
    for (const auto& tariff : tariffsInRange) {
        std::cout << tariff.toString() << std::endl;
        logger.log(tariff.toString());
    }

    return 0;
}