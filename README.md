# Power Latch

*A Design Thinking and electronics-prototyping project exploring relay-based control of room AC power circuits, demonstrated safely with low-voltage DC loads.*

> **Project status: Working low-voltage demonstration; mains application not implemented or verified.** The physical prototype has been demonstrated operating 12 V DC loads (fan and LED) in a working video. This validates the demonstrated low-voltage setup, not a connection to room mains wiring. The intended application is switching high-voltage AC supply lines for room loads such as fans and lights.

## Overview

Power Latch is intended to provide control of high-voltage AC power lines supplying room appliances such as fans and lights. The prototype was demonstrated using a **12 V DC fan** and an **LED light board** as low-voltage stand-ins, chosen for a safer course presentation rather than connecting the system to 220 V mains in the hostel room. The control concept uses an **Arduino Nano**, a **5 V two-channel relay module**, and a **momentary push button** for manual interaction. The 12 V battery was used for the demonstration loads.

The work combines Design Thinking with electronics prototyping: framing a user problem, exploring alternative concepts, selecting accessible components, drawing circuit representations, experimenting in Wokwi, and planning physical implementation.

## At a glance

| Item | Current project direction |
|---|---|
| Project type | Design Thinking + electronics prototyping |
| Controller | Arduino Nano clone |
| Switching | Two-channel 5 V relay module; exact board behaviour/rating to verify |
| Input | Momentary tactile push button |
| Intended application | Switching high-voltage AC supply lines for room loads such as fans and lights |
| Demonstration loads | 12 V DC fan and LED light board (low-voltage presentation setup) |
| Intended load supply | Battery labelled 12 V, 12000 mAh |
| Simulation | Initial Wokwi layout with Nano-style board, relay, servo and LED |
| Firmware | Initial sketch only; complete tested firmware not established |

## Intended application vs. demonstration setup\n\nThe intended application is control of high-voltage AC supply lines feeding room appliances (for example, ceiling/room fans and lights). For the course demonstration, the team used a 12 V DC fan and LED light board instead of connecting to 220 V mains in the hostel room. The low-voltage demonstration must not be described as a mains installation or as proof that a mains-connected version has been built or tested.\n\nA relay can provide switched contacts, but whether this particular relay module and overall design are suitable for a specific AC mains load depends on verified contact ratings, load type/inrush, creepage and clearance, isolation, enclosure, wiring, protection and applicable electrical safety requirements. Mains compatibility is therefore a design and safety-validation task—not an automatic guarantee.\n\n## Problem being explored

This project explores whether a simple microcontroller-and-relay arrangement can provide a practical, affordable alternative to repeated manual appliance switching while retaining a physical control option.

**Working problem framing (hypothesis, not validated research):** People who want a simple and affordable way to control everyday appliances may benefit from a microcontroller-based controller that preserves manual interaction.

The available project record does not establish completed interviews, surveys or structured observations. Claims about user behaviour, cost savings or energy savings should therefore remain hypotheses until supported by evidence.

## Design principle

**Automation should not remove the user's ability to intervene manually.** The momentary push button is included to explore manual override. Its exact behaviour—toggle, force a state, or temporarily override—has not yet been finalized or validated.

## Conceptual system architecture

```mermaid
flowchart LR
    U[User] --> B[Momentary push button]
    B --> A[Arduino Nano control logic]
    A -->|control signal| R[5 V relay module]
    P[Nominal 12 V battery] --> C[Relay contacts]
    R --> C
    C --> F[12 V DC fan]
    C --> L[LED light board]
```

This is a conceptual architecture, not a verified wiring diagram. The final control arrangement must confirm whether room fan and light circuits are switched together or independently. The low-voltage DC demonstration does not establish a mains-ready design. The battery powers the intended loads; it is not the relay module's 5 V control supply.

## Design Thinking process

| Stage | Current documentation |
|---|---|
| Empathize | Potential user groups and needs identified as hypotheses; formal research not documented |
| Define | A simple, affordable appliance-control need framed |
| Ideate | Manual, app/IoT, timer, sensor and Arduino/relay approaches discussed |
| Prototype | Components identified, circuit representations discussed/created, initial Wokwi layout started |
| Test | Test plan proposed; completed end-to-end results not available |

See [Design Thinking process](docs/design-thinking-process.md).

## Hardware identified

- Arduino Nano clone.
- Two-channel relay module; blue relays marked `JQC3F-05VDC-C`, with control labels `VCC`, `GND`, `IN1`, `IN2`.
- Battery labelled 12 V, 12000 mAh, with DC barrel-style output.
- 12 V DC fan.
- LED light board (full electrical rating not documented).
- Momentary tactile push button.
- Small perfboard (approximately 2 × 8 cm) and connecting wires.

See [hardware inventory](docs/hardware-inventory.md) and [bill of materials](hardware/bill-of-materials.md). Component availability does not establish that the complete circuit has been assembled or tested.

## Simulation and firmware

An initial Wokwi layout has been described with an Arduino Nano-style board, relay, servo and LED. The servo is a visual stand-in for fan behaviour in the simulation; it is not electrically equivalent to a continuously rotating DC fan. A complete tested sketch and shareable Wokwi link have not been established.

See [simulation and firmware notes](docs/simulation-and-firmware.md). The `src/arduino/` folder is a placeholder until the actual sketch is available and reviewed.

## Implementation status

| Work item | Status based on available project notes |
|---|---|
| Project direction and intended loads | Established |
| Physical components identified in project photographs | Evidence of components available |
| Relay and push-button representations | Discussed/created |
| Wokwi layout | Started; successful run not established |
| Arduino firmware | Initial sketch only; complete tested firmware not established |
| Final physical wiring / soldered perfboard | Not confirmed |
| End-to-end operation of both loads | Not confirmed |
| Manual-override behaviour | Not finalized or tested |
| User validation and measured energy savings | Not documented |

“Not confirmed” means the available project record does not establish completion; it does not prove the work has never been done.

## Testing

A working video of the low-voltage DC prototype is available to the team and should be added as evidence. A structured test log with measurements is not yet documented. See [Testing and results](docs/testing-and-results.md).

## Safety

Battery and motor circuits can cause overheating, short circuits or damage if wired incorrectly. Verify battery polarity and actual voltage with a multimeter; do not infer polarity from wire colour. Keep the 12 V load path separate from the 5 V relay-control supply. Do not use an Arduino GPIO pin to power a real fan or other load. Verify relay contact ratings against each load's operating and startup current, and use appropriate protection, insulation and strain relief. This documentation does not establish that the design has been safety-tested. Do not connect mains voltage as part of this prototype without a properly engineered, rated and safely enclosed design and qualified supervision.

## Repository structure

- `docs/` — Design Thinking process, system design, hardware, simulation, testing and next steps.
- `hardware/` — Preliminary bill of materials.
- `simulation/` — Wokwi documentation.
- `diagrams/` — Circuit-diagram placeholders.
- `assets/` — Component and prototype-photo placeholders.
- `src/arduino/` — Firmware placeholder.
- `testing/` — Test evidence and records.

## Next steps

1. Add the actual circuit diagram and original component/prototype photographs.
2. Finalize and explain manual-override behaviour.
3. Confirm relay trigger polarity, wiring and electrical ratings.
4. Complete the Wokwi model and add its share link, if available.
5. Add the real Arduino sketch once complete and tested.
6. Record physical tests with expected result, actual result, date and supporting evidence.
7. Add genuine user research or clearly retain the problem framing as a hypothesis.

## License

No license is included yet. Decide how you want others to reuse the documentation, diagrams and code before adding one. Public visibility does not by itself grant permission to reuse the work.
