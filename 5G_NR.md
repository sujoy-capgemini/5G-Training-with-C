
# 5G NR (New Radio) Overview

## What is 5G NR?

**5G NR (New Radio)** is the global standard for a unified, more capable 5G wireless air interface developed by 3GPP. It is designed to support a wide range of services, devices, and deployments.

---

## 5G NR Protocol Stack

The 5G NR protocol stack is divided into three main layers:

---

### 📶 Layer 1: Physical Layer (PHY)

- Responsible for actual transmission and reception of data over the air.
- Handles modulation, coding, beamforming, and MIMO.
- Converts digital signals to radio waves and vice versa.
- Interfaces with Layer 2 via transport channels.

---

### 🧰 Layer 2: Data Link Layer

Layer 2 is subdivided into three sublayers:

#### 1. MAC (Medium Access Control)
- Controls access to the physical channel.
- Handles scheduling, HARQ, and multiplexing.
- Interfaces with PHY and RLC.

#### 2. RLC (Radio Link Control)
- Ensures reliable data transfer.
- Performs segmentation, reassembly, and error correction.
- Operates in three modes: Transparent, Unacknowledged, and Acknowledged.

#### 3. PDCP (Packet Data Convergence Protocol)
- Handles header compression and encryption.
- Ensures data integrity and security.
- Interfaces with Layer 3 and RLC.

---

### 🧠 Layer 3: Network Layer

Layer 3 includes:

#### 1. RRC (Radio Resource Control)
- Manages connection setup, reconfiguration, and release.
- Controls mobility, handover, and QoS.
- Interfaces with NAS and Layer 2.

#### 2. NAS (Non-Access Stratum)
- Handles signaling between UE and core network.
- Manages authentication, registration, and session management.
- Communicates with AMF in the 5G Core.

---

## Summary

| Layer | Name           | Functions                                 |
|-------|----------------|-------------------------------------------|
| L1    | Physical        | Transmission, modulation, coding         |
| L2    | MAC, RLC, PDCP  | Scheduling, reliability, encryption       |
| L3    | RRC, NAS        | Connection control, mobility, signaling   |

---
