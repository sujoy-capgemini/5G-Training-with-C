# 5G Core Components: AMF, SMF, and UPF

## Overview

The 5G Core (5GC) architecture is designed to be modular and service-based. Three key components in the 5GC are:

- **AMF**: Access and Mobility Management Function  
- **SMF**: Session Management Function  
- **UPF**: User Plane Function  

These components work together to manage signaling, session establishment, and user data routing.

---

## Component Details

### 1. AMF (Access and Mobility Management Function)

- **Responsibilities**:
  - Handles registration and connection management
  - Manages mobility and access control
  - Authenticates users
  - Routes signaling messages to appropriate functions (e.g., SMF)

- **Interfaces**:
  - Communicates with UE via N1
  - Communicates with SMF via N11

---

### 2. SMF (Session Management Function)

- **Responsibilities**:
  - Manages session establishment and modification
  - Allocates IP addresses to UEs
  - Controls and configures UPF
  - Handles QoS and policy enforcement

- **Interfaces**:
  - Communicates with AMF via N11
  - Communicates with UPF via N4

---

### 3. UPF (User Plane Function)

- **Responsibilities**:
  - Routes user data packets between UE and external networks
  - Performs packet inspection and forwarding
  - Enforces QoS and traffic shaping
  - Anchors user plane traffic

- **Interfaces**:
  - Communicates with SMF via N4
  - Connects to data network via N6

---

## Data Flow: AMF → SMF → UPF

1. **UE initiates registration** with the network; AMF handles signaling and authentication.  
2. **AMF contacts SMF** to establish a session and allocate IP resources.  
3. **SMF configures UPF** to route user data traffic.  
4. **UPF forwards user data** between UE and external data networks.

This modular approach allows flexible deployment and efficient handling of control and user plane separation in 5G networks.
