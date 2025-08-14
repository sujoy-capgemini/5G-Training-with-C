# Throughput, Resource Blocks, and Resource Elements in 5G

## Introduction
In 5G NR (New Radio), throughput is a key performance metric that indicates the rate at which data is successfully transmitted over the network. It is closely tied to physical layer resources such as Resource Blocks (RBs) and Resource Elements (REs).

This document provides a beginner-friendly explanation of how throughput is calculated and how it relates to RBs and REs.

## Definitions

### Resource Element (RE)
A Resource Element is the smallest unit in the time-frequency grid. It corresponds to one subcarrier in one OFDM symbol.

### Resource Block (RB)
A Resource Block consists of:
- **12 subcarriers** in the frequency domain
- **14 OFDM symbols** in the time domain (for normal cyclic prefix)

So, one RB contains:
- **12 × 14 = 168 REs**

### Throughput
Throughput is the amount of data transmitted per unit time, typically measured in bits per second (bps).

## Throughput Calculation

### Key Factors
Throughput depends on:
- **Number of RBs**
- **Modulation scheme** (e.g., QPSK, 16-QAM, 64-QAM, 256-QAM)
- **Coding rate**
- **Number of MIMO layers**
- **Slot duration and bandwidth**

### Simplified Formula
```text
Throughput = (Number of RBs) × (REs per RB) × (Bits per RE) × (Coding Rate) × (Number of Slots per second) × (MIMO Layers)
