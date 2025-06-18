# BrodBoost-C

BrodBoost-C is a breadboard power supply that connects via USB Type-C and delivers selectable 5 V and 3.3 V outputs. Its compact design minimizes the need for additional wiring, cable modifications, or bulky bench supplies. The device features independent voltage adjustments for each rail, a manual on/off switch, an LED indicator, and built-in fuse protection, making it a practical solution for projects using standard 2.54 mm breadboards. The 3.3 V regulator is based on the TPS63001, a switching step-down DC-DC converter.

BrodBoost-C is a project of Axiometa, information available on the [website](https://axiometa.ai/product/brodboost-c-breadboard-power-supply/).

![Breadboost-C_169_WHITE](https://github.com/user-attachments/assets/59b5c114-ff39-4866-92a3-557cc846a3fc)

# Overview
![DEVICE DETAILS](https://github.com/user-attachments/assets/e2553f77-0dc2-4a73-ba9e-4dec003fd8eb)

# Compatibility
![DIMESNIONS](https://github.com/user-attachments/assets/8241ae8f-ab78-4637-b16f-194884aaa682)

# Voltage Selection
Both voltage rails can be independently selected or simultaneously set to 5.0 V or 3.3 V by moving around the jumper cap. Although the jumper cap design has received mixed opinions, it is implemented here as a safety feature and to be cautios of BOM. The design requires deliberate jumper cap movement, which helps prevent accidental voltage changes from 3.3 V to 5.0 V that might occur if a switch were used.

![vselect](https://github.com/user-attachments/assets/dd815332-34fa-4bdf-a241-7f7f6947cfd4)

# Schematic
A USB-C receptacle accepts a USB-C cable. The power rails include a series ferrite bead for noise suppression, a 1 A polyfuse for short-circuit protection, and two decoupling capacitors (1 µF and 100 nF). The 5 V from the USB-C port is configured by pulling the CC1 and CC2 lines to ground through 5.1 kΩ resistors.

The power then flows through a series power switch and a parallel red power LED. A step-down conversion from 5 V to 3.3 V is performed using the TPS63001, a switching step-down DC-DC converter.

Both voltage outputs (5.0 V and 3.3 V) are routed to two 1×3 2.54 mm headers, where the middle pin is the selected net and either side may be used for short-circuiting the respective rail. Additionally, a separate header provides access to 5 V, 3.3 V, ground, and USB data lines for debugging, testing, or experimenting with USB data.

![schematicbbc](https://github.com/user-attachments/assets/16ba4ac2-2593-42f3-8a06-1e0e64a7ebab)

# PCB Design
BrodBoost-C is a two-layer PCB measuring 11.4 mm by 54.0 mm, designed to maximize trace width and optimize the switching regulator's ground return path. This layout comfortably supports the nominal device current of approximately 1 A.

![PCB_Layout](https://github.com/user-attachments/assets/e58fe133-33df-4d85-9706-40200bba8730)

