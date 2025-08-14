# 5G MAC Layer Overview

## What is the MAC Layer?

The **MAC (Medium Access Control)** layer is part of Layer 2 in the 5G NR protocol stack. It sits between the **Physical Layer (PHY)** and the **Radio Link Control (RLC)** layer and is responsible for managing access to the physical medium, scheduling transmissions, and ensuring efficient use of radio resources.

---

## Key Functions of the MAC Layer

- **Scheduling**: Allocates uplink and downlink resources to UEs.
- **Multiplexing/Demultiplexing**: Combines data from different logical channels into transport blocks.
- **HARQ (Hybrid Automatic Repeat Request)**: Provides error correction through retransmissions.
- **Random Access Procedure**: Supports initial access and handover.
- **Priority Handling**: Manages data flows based on QoS requirements.
- **Discontinuous Reception (DRX)**: Enables power saving by allowing UEs to sleep periodically.

---

## MAC Architecture

The MAC layer interacts with:

- **PHY Layer** (below): Sends and receives transport blocks.
- **RLC Layer** (above): Receives SDUs (Service Data Units) for transmission.
- **Scheduler**: Determines resource allocation for UEs.

---

## MAC PDU Structure

A MAC PDU (Protocol Data Unit) consists of:

1. **MAC Header**:
   - Contains subheaders for each logical channel or control element.
   - Indicates the type and length of each payload.

2. **MAC Payload**:
   - Contains data from logical channels (e.g., RLC SDUs).
   - May include control elements (e.g., Buffer Status Report, Power Headroom Report).

3. **Padding**:
   - Ensures the PDU fits the allocated transport block size.

---

## MAC Header Format

Each subheader includes:

- **LCID (Logical Channel ID)**: Identifies the type of payload.
- **Length**: Size of the payload.
- **Type**: Indicates if the subheader is for data or control.

---

## Scheduling in MAC

- **Downlink Scheduling**: gNB decides which UEs receive data and allocates resources.
- **Uplink Scheduling**: gNB grants resources to UEs for transmission.
- **Dynamic Scheduling**: Based on buffer status, QoS, and channel conditions.

---

## HARQ Process

- **Retransmissions**: If a transmission fails, MAC layer uses HARQ to resend data.
- **Soft Combining**: Combines original and retransmitted data to improve decoding.
- **Multiple HARQ Processes**: Each UE maintains several HARQ processes for parallel transmissions.

---

## Interaction with Other Layers

- **PHY Layer**: Transmits MAC PDUs over the air.
- **RLC Layer**: Provides SDUs to MAC for transmission.
- **SDAP/PDCP**: Higher layers that manage QoS and security.

---

## Summary

| Component       | Role                                      |
|----------------|-------------------------------------------|
| MAC Scheduler   | Allocates resources to UEs                |
| MAC PDU         | Encapsulates data and control elements    |
| HARQ            | Ensures reliable transmission             |
| Logical Channels| Carry different types of data             |

The MAC layer is essential for efficient and reliable communication in 5G NR, enabling dynamic resource allocation, error correction, and support for diverse services.
