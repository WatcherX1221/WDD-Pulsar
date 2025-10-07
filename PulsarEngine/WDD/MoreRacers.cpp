#include <kamek.hpp>
#include <PulsarSystem.hpp>
#include <MarioKartWii/Race/Raceinfo/RaceInfo.hpp>

namespace Pulsar {

namespace WDD {
void ModifyRacerCount(RacedataScenario& scenario) {
    scenario.players[13];

}
kmCall(0x8085d888, ModifyRacerCount);
}
}