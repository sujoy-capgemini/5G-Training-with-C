#include <stdio.h>
#include <string.h>

typedef struct UE {
    int ue_id;
    char ue_state[50];
} UE;

// Step 1: Preamble Transmission
void PreambleTransmission(UE *ue) {
    printf("UE %d: Sending Preamble Transmission (MSG1)\n", ue->ue_id);
    strcpy(ue->ue_state, "Preamble Sent");
}

// Step 2: Random Access Response (RAR)
void RandomAccessResponse(UE *ue) {
    printf("UE %d: Received Random Access Response (MSG2)\n", ue->ue_id);
    strcpy(ue->ue_state, "RAR Received");
}

// Step 3: RRC Connection Request
void RRC_ConnectionRequest(UE *ue) {
    printf("UE %d: Sending RRC Connection Request (MSG3)\n", ue->ue_id);
    strcpy(ue->ue_state, "RRC Request Sent");
}

// Step 4: RRC Connection Setup
void RRC_ConnectionSetup(UE *ue) {
    printf("UE %d: Received RRC Connection Setup (MSG4)\n", ue->ue_id);
    strcpy(ue->ue_state, "RRC Setup Complete");
    printf("UE %d: RACH Procedure Complete ✅\n", ue->ue_id);
}

int main() {
    UE ue1;
    UE *ptr = &ue1;
    ptr->ue_id = 101;
    strcpy(ptr->ue_state, "IDLE");

    PreambleTransmission(ptr);
    RandomAccessResponse(ptr);
    RRC_ConnectionRequest(ptr);
    RRC_ConnectionSetup(ptr);

    return 0;
}
