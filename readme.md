# 📡 5G Overview – Training Topics

Welcome to the **5g-overview** branch of the `5G-Training-with-C` repository! This branch summarizes all major concepts and components of 5G technology covered by Sujoy.

---

## 🏗️ 5G Architecture & Deployment Models

- **NSA (Non-Standalone)**: Combines LTE and 5G NR; uses LTE for control and 5G for data.
- **SA (Standalone)**: Pure 5G deployment with 5G Core (5GC) and gNB.
- **CU/DU Split**:
  - **CU (Central Unit)**: Handles higher-layer protocols (PDCP, SDAP).
  - **DU (Distributed Unit)**: Manages lower-layer protocols (RLC, MAC, PHY).
- **gNB (Next Generation Node B)**: 5G base station with CU/DU architecture.

---

## 🧬 Protocol Layers in 5G

### ⚙️ PHY (Physical Layer)
- Modulation, coding, beamforming  
- Resource allocation and HARQ  
- Converts bits to radio signals

### 🧵 MAC (Medium Access Control)
- Scheduling and multiplexing  
- HARQ retransmissions  
- Logical channel prioritization

### 📦 RLC (Radio Link Control)
- Segmentation and reassembly  
- ARQ and error correction  
- Transparent, UM, and AM modes

### 🔐 PDCP (Packet Data Convergence Protocol)
- Header compression (ROHC)  
- Encryption and integrity protection  
- Reordering and duplicate detection

### 🧭 SDAP (Service Data Adaptation Protocol)
- QoS flow mapping to DRBs  
- SDAP header management  
- QoS enforcement

---

## 🧰 System Platform Layer

### 🧠 CSPL (Common System Platform Layer)
- Message queue manager  
- Timer and memory management  
- Event dispatcher and threading APIs

---

## 📈 Throughput & Resource Mapping

- **Resource Block (RB)**: 12 subcarriers × 14 OFDM symbols  
- **Resource Element (RE)**: Smallest unit of transmission  
- **Throughput Calculation**: Based on RBs, REs, modulation, coding rate, MIMO layers

---

## 📘 Usage

This branch is designed for beginner-level software engineers working in C and 5G development. Each topic is documented in Markdown files for easy reference and learning.

Feel free to explore the files and contribute improvements!
