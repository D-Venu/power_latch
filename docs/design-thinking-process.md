# Design Thinking Process

This document summarizes the Design Thinking process based on the project notes and the team's description of the physical demonstration. It separates known design decisions from research or measurements that have not yet been documented.

## 1. Empathize: intended users and potential needs

The project is aimed at people who use room appliances such as fans and lights and may want appliances to switch off when they secure and leave a room. Potential user groups discussed include students in hostels/shared accommodation and people seeking a simple, affordable alternative to more elaborate smart-home systems.

Potential needs include convenience, affordability, simple operation, reliable switching and a way to manually override automation.

**Evidence limitation:** Formal interviews, surveys or structured observations have not yet been documented in this repository. These user needs should be treated as the project's initial assumptions until the final report or research evidence supports them.

## 2. Define: problem framing

The project addresses the possibility of room appliances being left running when a person secures and leaves the room, while aiming to avoid making the user rely entirely on a new manual habit.

**Working problem statement:** How might we make it easier to manage room fan and light power when a person locks or unlocks a room, while preserving a simple manual override?

This is the project's framing, not a result proven by formal user research.

## 3. Ideate: concepts considered

| Concept | Rationale | Status in available project notes |
|---|---|---|
| Conventional manual switching | Familiar and straightforward | Discussed as a baseline |
| App-based / IoT control | Could allow remote operation | Considered as an alternative; not identified as the selected implementation |
| Timer-based control | Could switch appliances at set times | Considered as an alternative |
| Sensor-based automation | Could react to room conditions | Broad alternative discussed |
| Latch/door-state sensing with Arduino and relay | Connects appliance control to the locked/unlocked state | Selected project direction |

The available notes do not establish a formal scored comparison or user-preference study.

## 4. Prototype: material selection and implementation

The selected concept uses a magnetic reed switch and magnet to detect a change in door/latch position. An Arduino Nano processes that input and controls a relay module. A push button provides temporary manual override.

The team-provided pin mapping is:
- Reed switch: D3 and GND.
- Relay module input IN1: D5.
- Push button: D11 and GND.

The material-selection slide shows a rechargeable 5 V battery, relay module, magnetic reed switch, Arduino Nano, 12 V battery, fan, PCB/perfboard assembly and latch hardware. The role of the 5 V rechargeable battery in the final circuit still needs confirmation.

The intended application is AC room-appliance control. For the course demonstration, the team used a 12 V DC fan and LED light board rather than connecting to 220–240 V mains.

## 5. Test: reported demonstration behaviour

The team reports that the demonstration shows:
- Locking the room turns the fan and light OFF.
- Unlocking the room turns the fan and light ON.
- The push button temporarily overrides automatic control.
- The fan and light are controlled together.

A working demonstration video has been supplied in the project conversation, but it has not yet been added or linked in this repository. Structured test logs, measurements, repeatability data and the exact condition for ending the temporary override still need to be recorded.

No mains-connected test, measured energy savings or formal user-validation results are claimed.

## 6. Learnings and opportunities for growth

The project connects a physical action—securing or releasing a room—with an automatic appliance-control response. The manual override is an important usability feature because users may need to depart from the automatic state.

Useful next steps are to add the final report and media evidence, document the exact override behaviour, publish the final circuit and firmware, repeat the low-voltage tests with a test log, and gather genuine user feedback. Any future AC implementation must be separately reviewed for load suitability and electrical safety by a qualified person.

## Summary

Power Latch has a defined concept, selected hardware and a reported working low-voltage demonstration. The public record will become stronger as the final report, photographs/video, firmware, circuit diagram and repeatable test records are added. Do not present assumed user needs as research findings or the low-voltage demo as a verified mains installation.