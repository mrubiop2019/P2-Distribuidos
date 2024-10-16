#include "stub.h"


int main(int argc, char** argv){

    server_init();

    while (get_clock_lamport() != 3) {
        sleep(0.1)
        continue;
    }

    stub_send();

    while (get_clock_lamport() != 7) {
        sleep(0.1)
        continue;
    }

    stub_send();

    while (get_clock_lamport() != 11) {
        sleep(0.1)
        continue;
    }

    printf("P2 shutting down");

}