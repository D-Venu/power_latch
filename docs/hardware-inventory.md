# Hardware Inventory

The table records components explicitly identified in the project notes. It is not a verified final bill of materials.

| Component | Details in project notes | Intended role | Remaining checks |
|---|---|---|---|
| Arduino Nano clone | Physical board photographed | Main controller | Confirm exact board variant, pinout and power arrangement |
| Two-channel relay module | Physical module photographed; blue relays marked `JQC3F-05VDC-C`; labels include `VCC`, `GND`, `IN1`, `IN2` | Switch load circuit(s) | Confirm model, trigger polarity, contact ratings and supply requirements |
| Li-ion battery | Labelled 12 V, 12000 mAh; barrel-style DC output | Intended load supply | Verify actual output voltage, polarity, current capability and protection |
| DC fan | Physical fan photographed; label indicates 12 V DC | Fan load | Record exact model and operating/startup current |
| LED light board | Physical board photographed | Light load | Confirm required voltage, current and driver/current-limiting requirement |
| Tactile push button | Momentary push button identified | Manual override input | Confirm wiring, pull-up/pull-down arrangement, debounce and intended behaviour |
| Perfboard | Small board, approximately 2 × 8 cm, photographed | Organize connections | Confirm whether populated/soldered; inspect clearances and continuity |
| Connecting wires | Red and black load wires visible in photographs | Connections | Confirm conductor gauge, insulation, routing and polarity by measurement |

## Important distinctions

- The physical relay module is identified as a 5 V module; the intended battery/load supply is nominally 12 V. These are separate power requirements.
- A two-channel module does not prove that two independent appliance controls have been implemented.
- A momentary button is not a maintained/latching switch. Its behaviour must be implemented in firmware.
- A component photograph establishes availability, not successful integration into a working circuit.

## Power and wiring checks

1. Verify battery output polarity and voltage with a multimeter. Do not rely on wire colour.
2. Confirm the relay module's exact supply and input requirements from its markings/datasheet.
3. Keep the 12 V load path separate from the 5 V relay-control supply.
4. Check relay contact ratings against fan and LED load currents, including motor startup current.
5. Confirm the LED board's electrical requirements.
6. Use appropriate wire, insulation, strain relief and overcurrent protection.

The project notes mention the possibility of cutting the battery's barrel cable to access conductors, but do not confirm that this was done. Record any modification and verify polarity before use.
