# Testing and Results

## Current evidence status

A working physical prototype demonstration has been reported and is evidenced by a video: the system operated the 12 V DC fan and LED demonstration loads. Add that video and supporting photographs to this repository so the evidence is accessible. This demonstrates the low-voltage DC setup only; it does not establish a 220 V AC/mains-connected installation or its safety.

| Test | Expected result | Actual result | Current status |
|---|---|---|---|
| Arduino startup | Controller starts in a defined state | Not documented | Not verified |
| Relay activation | Relay changes contact state when commanded | Not documented | Not verified |
| LED switching (low-voltage demo) | LED demonstration load changes state as intended | Working prototype video reported; detailed test log/measurements not yet added | Demonstrated; supporting evidence to upload |
| Fan switching (12 V DC demo) | Demonstration fan changes state as intended | Working prototype video reported; detailed test log/measurements not yet added | Demonstrated; supporting evidence to upload |
| Push-button input | Press produces specified override action | Behaviour/result not documented | Not verified |
| Combined/independent control (demo) | Demonstration loads follow the implemented control behaviour | Working prototype video reported; exact behaviour should be described alongside evidence | Demonstrated; details to document |
| Simulation run | Wokwi circuit runs without errors | Layout screenshot described; run result not documented | Not verified |
| Power stability | No unintended resets or switching | Not documented | Not verified |
| Repeated operation | Switching remains consistent | Not documented | Not verified |

## Test record template

```text
Test ID:
Date/time:
Hardware or simulation revision:
Objective:
Setup and supply conditions:
Expected result:
Actual observed result:
Measurements (with units and instrument):
Pass / fail / blocked:
Issue or deviation:
Change made:
Retest result:
Evidence filename/link:
```

## Suggested verification order

1. Review schematic and component datasheets before applying power.
2. Verify supply rails and polarity independently.
3. Test controller and button input without connecting loads.
4. Verify relay input polarity and relay operation using an appropriate safe test setup.
5. Verify load specifications and switching path independently.
6. Test the chosen combined/independent control behaviour.
7. Exercise repeated cycles and record unexpected resets, noise or heating.
8. Test the exact manual-override behaviour and power-up/reset state.

Do not mark a test as passed based on a component photograph or an unrun simulation diagram. Preserve failures and design changes as part of the iteration history.

## Results summary

No measured test results are entered here because none are established in the available project record.
