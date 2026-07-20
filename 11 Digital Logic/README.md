# Digital Logic

## Overview

Digital Logic is the foundation of all digital electronics. It processes information using only two logic levels:

- **LOW (0)**
- **HIGH (1)**

Unlike analog electronics, which works with continuously varying voltages, digital logic operates using fixed logic states. Every microcontroller, processor, memory chip, FPGA, and automotive ECU is built from digital logic.

---

# Why Digital Logic Exists

Electronic systems must make reliable decisions.

Examples:

- Is the brake pedal pressed?
- Is the door open?
- Should the fuel injector turn ON?
- Is engine temperature too high?

Digital logic allows these decisions to be made using combinations of simple logic gates.

---

# Physical Meaning

Inside a digital IC are millions (or billions) of MOSFETs.

Each MOSFET behaves like an electronic switch.

- Switch OFF → Logic 0 (LOW)
- Switch ON → Logic 1 (HIGH)

By connecting many switches together, engineers build logic gates.

Examples:

- NOT
- AND
- OR
- XOR

These gates form larger circuits such as:

- Adders
- Multiplexers
- Memory
- CPU
- Entire Microcontrollers

---

# Basic Logic Gates

## NOT Gate

Produces the opposite output.

Truth Table

| Input | Output |
|------|--------|
| 0 | 1 |
| 1 | 0 |

---

## AND Gate

Output is HIGH only when all inputs are HIGH.

| A | B | Output |
|---|---|--------|
|0|0|0|
|0|1|0|
|1|0|0|
|1|1|1|

Series-switch analogy:
Both switches must be ON.

---

## OR Gate

Output is HIGH if any input is HIGH.

| A | B | Output |
|---|---|--------|
|0|0|0|
|0|1|1|
|1|0|1|
|1|1|1|

Parallel-switch analogy:
Either switch can complete the path.

---

## XOR Gate

Output is HIGH only when inputs are different.

| A | B | Output |
|---|---|--------|
|0|0|0|
|0|1|1|
|1|0|1|
|1|1|0|

Commonly used for comparison and error detection.

---

# Embedded Systems Relevance

Digital logic is used everywhere inside a microcontroller.

Examples:

- CPU instruction execution
- Arithmetic operations
- Memory access
- Peripheral control
- Sensor processing
- Decision making
- Communication protocols

Without digital logic, a microcontroller cannot function.

---

# Automotive ECU Applications

Digital logic enables:

- Engine control
- Brake system decisions
- Airbag triggering
- Seatbelt warning
- Door lock control
- Dashboard displays
- Communication (CAN, UART, SPI, I²C)

Example:

Vehicle Moving

AND

Seat Belt Not Fastened

↓

Seat Belt Warning ON

---

# Communication Protocols

Protocols such as:

- UART
- SPI
- I²C
- CAN

Transmit data as sequences of HIGH and LOW logic levels.

---

# Key Operating Conditions

## Supply Voltage

Digital ICs require the correct operating voltage.

Common values:

- 5 V
- 3.3 V
- 1.8 V

---

## Logic Levels

Inputs must fall within valid voltage ranges.

Typical example (5 V system):

- Near 0 V → Logic LOW
- Near 5 V → Logic HIGH

Voltages between valid ranges may produce unpredictable behavior.

**Note:** Actual thresholds depend on the logic family (TTL, CMOS, etc.) and the specific device.

---

## Noise Margin

Digital circuits tolerate small voltage variations without changing logic states.

This improves reliability compared to analog systems.

---

## Timing

Signals must arrive at the correct time.

Poor timing may cause incorrect operation in high-speed systems.

---

# Digital Logic vs Analog Electronics

| Feature | Digital Logic | Analog Electronics |
|----------|--------------|-------------------|
| Signal | HIGH / LOW | Continuous |
| Noise Immunity | Higher | Lower |
| Main Use | Computation & Control | Signal Processing |

---

# Logic Gate vs Comparator

| Feature | Logic Gate | Comparator |
|----------|------------|-----------|
| Input | Digital | Analog |
| Output | Digital | Digital-like |
| Purpose | Logical operations | Voltage comparison |

---

# Digital Logic vs Relay Logic

| Feature | Digital Logic | Relay Logic |
|----------|--------------|------------|
| Speed | Very Fast | Slow |
| Size | Integrated ICs | Large Mechanical Parts |
| Reliability | High | Contact Wear |
| Power Consumption | Lower | Higher |

---

# Common Misconceptions

### ❌ Digital means exactly 0 V and 5 V.

✔ Wrong.

Digital circuits recognize voltage ranges, not exact voltages.

---

### ❌ Digital logic is only used in computers.

✔ Wrong.

Used in:

- Microcontrollers
- Automotive ECUs
- PLCs
- Consumer Electronics
- Communication Systems

---

### ❌ Logic gates are separate chips inside every MCU.

✔ Wrong.

Modern microcontrollers integrate millions of logic gates on one silicon chip.

---

### ❌ Digital systems are completely immune to noise.

✔ Wrong.

They are more resistant than analog systems, but excessive noise can still cause errors.

---

### ❌ Digital logic replaces analog electronics.

✔ Wrong.

Most embedded systems use both:

- Analog circuits for sensing and signal conditioning.
- Digital logic for computation and decision making.

---

# Interview Questions

### What is Digital Logic?

Digital logic is the processing of information using two logic levels, LOW (0) and HIGH (1).

---

### Why is Digital Logic used in microcontrollers?

Because it enables reliable computation, decision making, memory operations, and communication.

---

### What are Logic Gates?

Logic gates are electronic circuits that perform basic logical operations on digital inputs.

---

### Why are MOSFETs used?

MOSFETs act as fast, low-power electronic switches that implement digital logic.

---

### Where is Digital Logic used inside an ECU?

- CPU
- Memory
- Sensor processing
- Communication
- Decision making
- Control algorithms

---

### Difference between Analog and Digital Signals?

Analog:
- Continuous values

Digital:
- Discrete logic levels (HIGH and LOW)

---

# Key Takeaways

- Digital logic uses only HIGH and LOW states.
- MOSFETs implement logic gates.
- Logic gates build CPUs, memory, and microcontrollers.
- Digital logic enables computation, communication, and control.
- Automotive ECUs rely on digital logic for processing sensor data and controlling vehicle functions.
