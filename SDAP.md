# Service Data Adaptation Protocol (SDAP) Layer in 5G

## Introduction
The Service Data Adaptation Protocol (SDAP) is a sublayer in the 5G protocol stack, located above the Packet Data Convergence Protocol (PDCP) layer. It is responsible for mapping Quality of Service (QoS) flows to Data Radio Bearers (DRBs) and ensuring that QoS requirements are met.

## Functions of the SDAP Layer
- **QoS Flow Mapping**: Maps QoS flows to appropriate DRBs based on QoS identifiers (QFI).
- **QoS Enforcement**: Ensures that data packets are handled according to their QoS characteristics.
- **Header Management**: Adds and removes SDAP headers that contain QoS Flow Identifiers.
- **Support for Multiple QoS Flows**: Allows multiple QoS flows to be multiplexed over a single DRB.

## QoS Handling
- Each QoS flow is identified by a QoS Flow Identifier (QFI).
- SDAP uses the QFI to determine how to treat each packet.
- The mapping between QoS flows and DRBs is configured by the Radio Resource Control (RRC) layer.

## Role in the Protocol Stack
- SDAP sits above the PDCP layer and below the IP layer.
- It receives IP packets from the upper layers and maps them to DRBs via PDCP.
- It ensures that the QoS requirements of each flow are maintained throughout transmission.

## Summary
SDAP is a key component in 5G for enabling differentiated services and maintaining QoS. It plays a vital role in ensuring that applications with different requirements (e.g., video streaming vs. emergency services) receive appropriate treatment.

---