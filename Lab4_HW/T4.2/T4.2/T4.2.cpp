#include "Infrastructure.h"

int main()
{
    Address a1("A.I. Cuza", "Craiova");
    Driver d1("David Stan", a1);
    Engine e1(115);
    Car c1("Nissan", e1, d1);

    cout << "--- CAR INFO ---" << endl;
    c1.showCar();
    c1.startCar();
    c1.stopCar();

    cout << endl << "--- BUS INFO ---" << endl;
    Driver busDriver("Vasile Ionescu", Address("Bd. Decebal", "Craiova"));
    Bus bus("DJ-99-VIC", busDriver);
    bus.addCommuter(Commuter("Maria"));
    bus.addCommuter(Commuter("Luca"));
    bus.addCommuter(Commuter("Elena"));
    bus.showBus();

    cout << endl << "Removing passenger Luca..." << endl;
    bus.removeCommuter("Luca");
    bus.showBus();

    cout << endl << "--- BUS STATION ---" << endl;
    BusStation station("Valea Rosie");
    station.addBus(bus);
    station.showStation();

    return 0;
}