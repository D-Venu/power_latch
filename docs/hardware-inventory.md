# Hardware Inventory

This inventory combines the component details supplied in the project discussion with the material-selection slide. It distinguishes the low-voltage demonstration from the intended AC appliance-control application.

| Component | Details/evidence | Role | Remaining checks |
|---|---|---|---|
| Arduino Nano | Identified by the team as the physical controller; shown in material-selection slide | Reads inputs and controls relay | Record exact board variant and supply arrangement |
| Magnetic reed switch + magnet | Shown on material-selection slide | Detects door/latch position change | Confirm contact type and exact placement |
| Two-channel relay module | Shown in slide; blue relays marked `JQC3F-05VDC-C`; labels include `VCC`, `GND`, `IN1`, `IN2` | Switches the load circuit | Team-provided contact rating: 10 A, 250 V AC / 30 V DC; verify exact module datasheet, load category and trigger polarity |
| Momentary push button | Identified in project workflow; connects to D11 and GND per presentation | Temporary manual override | Confirm exact override-resume logic in firmware |
| 12 V battery | Labelled 12 V, 12000 mAh in earlier project notes; shown on slide | Powers low-voltage demonstration loads | Verify output voltage, polarity and protection |
| 5 V rechargeable battery | Shown on material-selection slide | Role in final circuit not confirmed | Identify whether it powered controller, relay, or was only a considered component |
| DC fan | 12 V demonstration fan shown in slide | Low-voltage test load | Record exact model and startup/running current if available |
| LED light board | Shown in project evidence | Low-voltage demonstration load | Confirm voltage/current requirements |
| PCB/perfboard | Board/assembly shown in slide and prototype imagery | Supports circuit connections | Confirm final populated/soldered state and inspect continuity |
| Door latch and mounting hardware | Shown on material-selection slide | Physical mechanism associated with room securing | Document how magnet and reed switch are positioned relative to it |
| Connecting wires/USB cable | Visible in component/prototype imagery | Signal, supply and interconnect wiring | Confirm wiring against final schematic; do not infer polarity from colour |

## Control connections reported in the presentation

| Component | Arduino connection | Purpose |
|---|---|---|
| Reed switch | D3 and GND | Lock-state detection |
| Relay module IN1 | D5 | Relay control |
| Push button | D11 and GND | Manual override |

These are reported pin assignments, not a substitute for checking the final circuit and firmware.

## Intended AC application and safety

The intended product would control AC mains supply lines for room appliances such as fans and lights. The physical demonstration used a 12 V DC fan and LED light board instead of a 220–240 V mains connection. No mains-connected implementation or safety verification is claimed.

The team supplied the relay contact specification as 10 A, 250 V AC / 30 V DC. Verify this against the exact module documentation and assess motor inrush, load category, isolation, PCB spacing, enclosure, wiring, overcurrent protection and local requirements with a qualified person before considering any mains application. A contact rating alone does not make the complete system mains-safe.

## Power notes

- The relay module's control supply is nominally 5 V; the 12 V battery is associated with the demonstration loads. Do not connect 12 V to a 5 V relay VCC input.
- Verify the Arduino's power source and common/control-ground arrangement from the actual schematic.
- Measure and record actual supply voltage and load current if test instruments and records are available.
- Keep all testing low-voltage unless a separate mains design has been professionally reviewed and safely implemented.