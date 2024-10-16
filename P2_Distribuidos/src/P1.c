#include "stub.h"

int main(int argc, char** argv){
    
    stub_send();

    while (get_clock_lamport() != 5) {
        sleep(0.1)
        continue;
    }

    stub_send();

    while (get_clock_lamport() != 6) {
        sleep(0.1)
        continue;
    }

    printf("P1 shutting down");
}