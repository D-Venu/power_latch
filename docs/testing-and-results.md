# Testing and Results

## Evidence available

The repository includes the material-selection image at `assets/prototype/material-selection-slide.png` and links to the team's working demonstration video:

[Watch the Power Latch prototype demonstration](https://youtu.be/SxAZail_Stw)

The reported physical demonstration uses a 12 V DC fan and an LED light board; it does not establish a 220–240 V mains-connected build or its safety.

## Demonstrated behaviour reported by the team

| Scenario | Expected/observed behaviour described by the team | Evidence status |
|---|---|---|
| Room/latch locked | Fan and light switch OFF automatically | Reported as evident in the demonstration video; detailed test log not yet recorded |
| Room/latch unlocked | Fan and light switch ON automatically | Reported as evident in the demonstration video; detailed test log not yet recorded |
| Push button pressed | Temporarily overrides automatic control | Reported by the team; exact override-resume condition still needs documenting |
| Fan and light | Controlled together | Confirmed by the team |
| Demonstration load type | 12 V DC fan and LED light board | Low-voltage demonstration; no mains test claimed |

These are documented as team-reported demonstration behaviour. A dated test record, measured results and relevant video timestamps can be added when available.

## Verification matrix

| Test | Current status | Next evidence to record |
|---|---|---|
| Arduino startup and reset state | Not separately documented | Startup state and any unexpected relay activation |
| Reed switch response | Behaviour described; raw readings not recorded | Magnet/switch state and Arduino input readings |
| Relay input polarity | Not documented | Module trigger logic and relay state |
| Lock → OFF | Demonstrated behaviour reported | Video timestamp and repeat-cycle result |
| Unlock → ON | Demonstrated behaviour reported | Video timestamp and repeat-cycle result |
| Push-button temporary override | Demonstrated behaviour reported; resume condition unclear | Button action, duration/termination condition and return to automatic mode |
| Combined fan/light control | Confirmed as team-reported behaviour | Video timestamp and repeat-cycle result |
| Power stability/repeated cycles | No structured results recorded | Number of cycles, supply conditions, failures/resets |
| Mains operation/safety | Not performed/verified in project evidence | Do not attempt without separate qualified design and safety review |

## Test record template

```text
Test ID:
Date/time:
Hardware/firmware revision:
Objective:
Setup and supply conditions:
Expected result:
Actual observed result:
Measurements (units and instrument):
Pass / fail / blocked:
Issue or deviation:
Change made:
Retest result:
Evidence filename/link and timestamp:
```

## Results summary

A working low-voltage demonstration is reported by the team and linked above. Structured measurements, repeatability data, energy-savings measurements, formal user-validation results and mains safety verification are not documented here. These should remain unclaimed unless supporting evidence is added.