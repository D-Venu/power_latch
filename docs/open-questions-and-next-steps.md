# Open Questions and Next Steps

## Product behaviour

- [ ] Decide whether the fan and light operate together or independently.
- [ ] Define what a momentary button press does: toggle, force a state, or temporarily override.
- [ ] Define what initiates automatic operation, if any.
- [ ] Define the power-up and reset state.

## Intended AC mains application\n\n- [ ] Develop a separate, properly engineered mains-side design for room AC circuits (such as fan and light loads); this is the intended application, not the low-voltage demonstration.\n- [ ] Verify whether the exact relay module is rated for the intended AC voltage, load current, load type and inrush current; do not assume AC suitability from the relay marking alone.\n- [ ] Review isolation, creepage/clearance, enclosure, wiring, strain relief, earthing where applicable, and overcurrent protection with a qualified person.\n- [ ] Ensure the final mains implementation complies with applicable local electrical codes and safety requirements.\n- [ ] Do not connect the current prototype directly to 220 V mains without a separately validated, properly enclosed design and qualified supervision.\n\n## Electrical design

- [ ] Record exact Arduino Nano clone variant.
- [ ] Identify exact relay module and confirm input polarity.
- [ ] Confirm relay contact ratings and suitability for the intended AC room loads, including fan motor inrush; separately verify the 12 V demonstration load ratings.
- [ ] Record the 12 V demonstration fan model/current and identify representative intended room-load ratings.
- [ ] Record LED board voltage/current and driver requirements.
- [ ] Verify battery output voltage, polarity and current capability under intended load.
- [ ] Document how Arduino and relay module receive their required supply.
- [ ] Finalize low-voltage demonstration wiring and protection; develop and independently review mains wiring/protection before any AC implementation.

## Simulation and firmware

- [ ] Confirm Wokwi simulation runs successfully.
- [ ] Save/share the Wokwi project URL.
- [ ] Complete and test the simulation sketch.
- [ ] Decide whether the servo is only a visual status representation.
- [ ] Complete physical firmware separately if it differs from the simulation sketch.

## Physical implementation

- [ ] Confirm whether battery cable was modified; document polarity verification if so.
- [ ] Confirm whether perfboard has been soldered and inspect its layout.
- [ ] Verify continuity and absence of unintended shorts before powering the circuit.
- [ ] Photograph completed wiring and prototype, if completed.
- [ ] Record actual physical tests and results.

## Design Thinking evidence

- [ ] Add genuine interview/observation evidence if user research was conducted.
- [ ] Otherwise, keep target-user needs and problem claims labelled as hypotheses.
- [ ] Record how the selected concept was chosen, including criteria if comparison occurred.
- [ ] Conduct user evaluation if feasible and document resulting changes.

## Publishing checklist

- [ ] Replace/supplement conceptual system diagram with final verified circuit diagram.
- [ ] Add original photos and diagrams with captions.
- [ ] Add firmware only after confirming which version is final and tested.
- [ ] Add Wokwi link, if available.
- [ ] Add test evidence and distinguish simulation from physical results.
- [ ] Decide whether to add a repository license.
- [ ] Check photographs for personal information before publishing publicly.
