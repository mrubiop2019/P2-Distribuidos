#include "stub.h"




stub_send();

while (get_clock_lamport() != 9) {
    sleep(0.1)
    continue;
}

stub_send();

while (get_clock_lamport() != 10) {
    sleep(0.1)
    continue;
}

printf("P3 shutting down");