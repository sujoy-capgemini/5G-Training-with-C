# Radio Link Control (RLC) Layer in 5G

## Introduction
The Radio Link Control (RLC) layer is part of the data link layer in the 5G protocol stack. It operates above the MAC layer and below the PDCP layer. The RLC layer is responsible for ensuring reliable data transfer and managing segmentation and reassembly of data packets.

## Functions of the RLC Layer
- **Segmentation and Reassembly**: Splits large PDCP Service Data Units (SDUs) into smaller RLC Protocol Data Units (PDUs) and reassembles them at the receiver.
- **Error Correction**: Uses Automatic Repeat Request (ARQ) to detect and retransmit erroneous or lost PDUs.
- **Concatenation**: Combines multiple SDUs into a single PDU for efficient transmission.
- **In-sequence Delivery**: Ensures that data is delivered in the correct order.
- **Duplicate Detection**: Identifies and discards duplicate PDUs.
- **Flow Control**: Manages data flow to prevent buffer overflow.

## RLC Modes
The RLC layer operates in three modes:
- **Transparent Mode (TM)**: No header is added; used for control messages like broadcast.
- **Unacknowledged Mode (UM)**: Provides segmentation and reassembly without retransmission.
- **Acknowledged Mode (AM)**: Provides reliable transmission using ARQ and retransmission.

## Role in the Protocol Stack
The RLC layer receives data from the PDCP layer and prepares it for transmission by the MAC layer. It ensures that data is correctly segmented, ordered, and error-free before passing it down. On the receiving side, it reassembles and delivers data to the PDCP layer.

## Summary
The RLC layer plays a critical role in ensuring reliable and efficient data transmission in 5G. Its support for multiple modes allows it to adapt to different types of data and service requirements.

---