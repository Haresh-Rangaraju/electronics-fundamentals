# Electronics Fundamentals

A structured learning repository for developing the **electronics and hardware fundamentals** required for embedded systems and automotive electronics engineering.

This repository documents the electronic concepts needed to understand, analyse, and debug the hardware side of embedded systems.

---

## Purpose

The purpose of this repository is to build the electronics foundation required to:

- Understand electronic components
- Understand basic electronic circuits
- Understand voltage and current behaviour
- Understand semiconductor devices
- Understand digital electronics
- Understand signals and hardware behaviour
- Interpret electronic measurements
- Connect electronics concepts with embedded systems
- Support hardware debugging and validation

---

## Repository Structure

```text
electronics-fundamentals/
│
├── README.md
│
├── phase-1/
│   └── Phase 1 learning documentation
│
└── phase-2/
    └── Phase 2 supporting electronics documentation
```

---

# Phase 1 — Electronics Foundation

Phase 1 establishes the basic electronics knowledge required for embedded engineering.

Major areas include:

- Diodes
- Diode applications
- BJTs
- BJT applications
- MOSFETs
- MOSFET applications
- Voltage regulators
- Power supply fundamentals
- Op-amp basics
- Comparators
- Digital logic
- Logic gates
- Electronics revision and integration

The focus is on understanding **how electronic components and circuits behave**.

---

# Phase 2 — Supporting Electronics

Phase 2 is primarily an **Embedded Engineering Depth** phase.

Therefore, electronics topics are included only where they directly support deeper embedded understanding.

Relevant areas include:

- PWM behaviour and applications
- ADC data acquisition and processing
- Hardware behaviour during debugging
- Hardware vs software fault identification

These topics support the understanding of how MCU firmware interacts with physical hardware.

---

## Learning Progression

```text
Electronic Component
        ↓
Circuit
        ↓
Electrical Signal
        ↓
Hardware Behaviour
        ↓
MCU Interface
        ↓
Embedded System
```

The objective is to understand both the electrical behaviour and its relevance to embedded systems.

---

## Scope

This repository focuses specifically on **electronics and hardware fundamentals**.

Microcontroller architecture and peripheral configuration are primarily documented in:

- `microcontroller-fundamentals`

C and firmware concepts are primarily documented in:

- `embedded-c-fundamentals`

Automotive-specific concepts are primarily documented in:

- `automotive-fundamentals`

---

## Repository Principle

Electronics topics should remain focused on **electronics**.

Microcontroller-specific material should not be duplicated here merely because a topic is used by an MCU.

For example:

- MCU register configuration → `microcontroller-fundamentals`
- Embedded C implementation → `embedded-c-fundamentals`
- Electrical behaviour of a signal/circuit → `electronics-fundamentals`

This keeps the repositories clearly separated.

---

## Roadmap Role

This repository provides the hardware foundation supporting:

```text
Electronics
    ↓
Embedded Systems
    ↓
Automotive Electronics
    ↓
Automotive Embedded Systems
```

---

## Author

**Haresh R.**

BE Electronics and Communication Engineering
