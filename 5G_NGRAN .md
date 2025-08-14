# NG-RAN (Next Generation Radio Access Network)

## Overview
- Standard 5G RAN architecture
- Uses gNB (Next Generation Node B) split into:
  1. CU (Central Unit)
  2. DU (Distributed Unit)
- Connects to the 5G Core (5GC)

---

## Key 5GC Components

### AMF (Access and Mobility Management Function)
- Handles signaling, registration, connection, and mobility management

### UPF (User Plane Function)
- Manages user data traffic routing

---

## Types of NG-RAN

### 1. gNB
- CU
- DU

### 2. ng-eNB

---

## CU (Central Unit)
- Handles non-real-time functions
- Manages:
  - RRC (Radio Resource Control)
  - Mobility Control
  - Session Management
- Connects to the 5G Core via the NG interface

---

## DU (Distributed Unit)
- Handles real-time functions
- Manages:
  - MAC (Medium Access Control)
  - RLC (Radio Link Control)
  - PHY (Physical Layer)
- Connects to CU via the F1 interface
