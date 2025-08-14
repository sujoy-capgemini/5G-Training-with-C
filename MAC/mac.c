#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_UE 3
#define MAX_GRANT 100 // bytes per UE

typedef struct UE {
    int ue_id;
    int data_to_send;      // bytes waiting in buffer
    int grant_allocated;   // bytes granted by MAC
    char mac_state[50];    // Scheduled or Waiting
} UE;

// Initialize UEs with some data
void initializeUEs(UE ue_list[]) {
    for (int i = 0; i < NUM_UE; i++) {
        ue_list[i].ue_id = 101 + i;
        ue_list[i].data_to_send = (i + 1) * 120; // 120, 240, 360 bytes
        ue_list[i].grant_allocated = 0;
        strcpy(ue_list[i].mac_state, "Waiting");
    }
}

// MAC layer scheduler: simple round-robin
void macScheduler(UE ue_list[]) {
    for (int i = 0; i < NUM_UE; i++) {
        if (ue_list[i].data_to_send > 0) {
            int grant = (ue_list[i].data_to_send >= MAX_GRANT) ? MAX_GRANT : ue_list[i].data_to_send;
            ue_list[i].grant_allocated = grant;
            ue_list[i].data_to_send -= grant;
            strcpy(ue_list[i].mac_state, "Scheduled");
        } else {
            strcpy(ue_list[i].mac_state, "Idle");
        }
    }
}

// Print MAC layer status
void printMACStatus(UE ue_list[]) {
    printf("\n--- MAC Layer Scheduling ---\n");
    for (int i = 0; i < NUM_UE; i++) {
        printf("UE %d | Data Left: %d bytes | Grant: %d bytes | State: %s\n",
               ue_list[i].ue_id,
               ue_list[i].data_to_send,
               ue_list[i].grant_allocated,
               ue_list[i].mac_state);
    }
}

int main() {
    UE ue_list[NUM_UE];

    initializeUEs(ue_list);
    macScheduler(ue_list);
    printMACStatus(ue_list);

    return 0;
}
