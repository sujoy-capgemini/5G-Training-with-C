# 5G RAN - gNB Overview

## What is gNB?

- **gNodeB (gNB)** is the 5G base station that connects **User Equipment (UE)** to the **5G Core (5GC)**.
- It replaces the **eNodeB** from LTE and supports advanced features.
- It is a part of the **5G Radio Access Network (RAN)**.

## Key Features

- **gNB** stands for **Next Generation Node B**
- It connects user devices (UE) to the 5G Core Network.
- It consists of three main components:
  1. **CU (Central Unit)**
  2. **DU (Distributed Unit)**
  3. **RU (Radio Unit)**

## 📱 Real-Time Example

Suppose I am in Kolkata using a 5G smartphone and watching a 4K video. Here's how gNB works:

1. My phone (**UE**) sends a request to the nearest 5G tower (**gNB**).
2. The **RU** receives the request and converts it to digital data.
3. The **DU** performs real-time tasks like error checking and data distribution.
4. The **CU** handles session management and forwards the request to the **5G Core Network**.

The video data is fetched from the internet and passed through the following path:

**CU → DU → RU**
