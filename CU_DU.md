# CU and DU in 5G RAN

## Overview

In 5G Radio Access Network (RAN), the base station known as **gNB (Next Generation Node B)** is split into functional units to improve flexibility, scalability, and performance. These units are:

- **CU (Central Unit)**
- **DU (Distributed Unit)**

This split architecture allows operators to deploy parts of the RAN in centralized data centers while keeping latency-sensitive functions closer to the user.

---

## CU (Central Unit)

### What is CU?

The **Central Unit (CU)** is a logical node in the 5G RAN architecture responsible for non-real-time and higher-layer functions.

### Key Functions of CU:

- **RRC (Radio Resource Control)**: Manages connection setup, reconfiguration, and release.
- **SDAP (Service Data Adaptation Protocol)**: Maps QoS flows to data radio bearers.
- **PDCP (Packet Data Convergence Protocol)**: Handles encryption, header compression, and integrity protection.
- **Mobility Management**: Supports handovers and session continuity.
- **Session Management**: Coordinates with the 5G Core for session setup and modification.

### Interfaces:

- **NG Interface**: Connects CU to the 5G Core Network (AMF/SMF).
- **F1-C Interface**: Control interface between CU and DU.

---

## DU (Distributed Unit)

### What is DU?

The **Distributed Unit (DU)** is a logical node responsible for real-time and lower-layer functions. It is typically deployed closer to the radio units and user equipment.

### Key Functions of DU:

- **MAC (Medium Access Control)**: Handles scheduling and HARQ.
- **RLC (Radio Link Control)**: Ensures reliable data transfer.
- **PHY (Physical Layer)**: Manages modulation, coding, and transmission.
- **Real-Time Processing**: Performs latency-sensitive operations.

### Interfaces:

- **F1-U Interface**: User plane interface between DU and CU.
- **F1-C Interface**: Control plane interface between DU and CU.
- **Radio Interface**: Connects DU to RU (Radio Unit).

---

## CU-DU Split Architecture

### How They Work Together:

1. **CU** handles control and session management functions.
2. **DU** performs real-time data transmission and scheduling.
3. Communication between CU and DU occurs over the **F1 interface**, which includes:
   - **F1-C**: Control messages
   - **F1-U**: User data

This split allows centralized control with distributed data processing, enabling efficient resource utilization and low-latency communication.

---

## Benefits of CU-DU Split

- **Scalability**: Centralized CU can manage multiple DUs.
- **Flexibility**: Easier to deploy and upgrade components independently.
- **Performance**: Real-time functions are handled closer to the user.
- **Cost Efficiency**: Optimized use of cloud and edge resources.

---

## Summary

| Component | Location        | Functions                          | Interfaces       |
|-----------|------------------|-------------------------------------|------------------|
| CU        | Centralized      | RRC, PDCP, SDAP, Mobility, Session  | NG, F1-C         |
| DU        | Edge/Distributed | MAC, RLC, PHY, Real-Time Processing | F1-U, F1-C, Radio |

This modular architecture is a key enabler of 5G's performance, flexibility, and scalability.
