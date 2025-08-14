# PDCP (Packet Data Convergence Protocol) Layer in 5G

## Introduction
The PDCP layer is a sublayer of the Radio Protocol Stack in 5G NR (New Radio). It resides above the RLC (Radio Link Control) layer and below the SDAP (Service Data Adaptation Protocol) layer in the user plane, and above RLC in the control plane.

## Functions of the PDCP Layer
- **Header Compression**: Reduces the size of IP headers using techniques like ROHC (Robust Header Compression).
- **Security**: Provides encryption and integrity protection for user and control plane data.
- **Transfer of Data**: Handles transmission and reception of PDCP SDUs (Service Data Units).
- **Duplicate Detection**: Identifies and discards duplicate packets.
- **Reordering**: Ensures in-sequence delivery of packets.
- **Discards**: Removes packets that exceed delay thresholds.
- **PDCP SN Management**: Manages sequence numbers for data packets.
- **Timer-Based Discard**: Discards packets based on timer expiration.

## Features
- Supports both user plane and control plane data.
- Works with both LTE and 5G NR.
- Ensures secure and efficient data transmission.
- Facilitates handover by buffering and forwarding PDCP SDUs.

## Role in the Protocol Stack
The PDCP layer interfaces with:
- **Above**: SDAP (in user plane) or RRC (in control plane)
- **Below**: RLC layer

It receives data from upper layers, applies compression and security, and forwards it to the RLC layer for transmission. On reception, it performs integrity checks, decompression, and delivers data to upper layers.

## Summary
The PDCP layer is essential for secure and efficient data handling in 5G. It ensures data integrity, reduces overhead, and supports mobility through handover mechanisms.

---