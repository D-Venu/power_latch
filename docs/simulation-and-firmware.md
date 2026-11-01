# Simulation and Firmware

## Wokwi simulation

The project notes describe a Wokwi layout containing an Arduino Nano-style board, a single-channel relay representation, a servo motor, an LED and an initial Arduino sketch.

The servo is intended as a visual representation of fan behaviour. A servo demonstrates position changes; it is not a direct electrical or mechanical equivalent of a continuously rotating DC fan.

A simplified simulation may use an Arduino pin as a source for simulated elements. This is only a simulation convenience, not the physical power architecture. In the real circuit, do not use an Arduino GPIO pin to power a fan, servo or other significant load.

**Evidence status:** A simulation layout screenshot is described in the source notes, but a successful run, complete logic test and shareable Wokwi URL are not established.

## Initial firmware state

The sketch visible in the described screenshot includes `Servo.h`, declares a servo object, and has empty `setup()` and `loop()` functions. This is an initial scaffold, not complete control firmware. A final `.ino` file is not established in the available notes.

## Firmware behaviour still to define

- Relay output pin assignments and active-high/active-low behaviour.
- Button input pin and electrical configuration.
- Debounce handling.
- Exact manual-override semantics.
- Initial state after power-up/reset.
- How automatic control is triggered, if included.
- LED output behaviour in simulation.
- Servo movement used to represent fan state.
- Safe behaviour if the input is stuck, disconnected or the controller resets.

Add the actual sketch to `src/arduino/` only when available. Include board/core assumptions, required libraries, pin mapping, relay polarity, wiring reference and test status. Clearly label simulation code so it is not mistaken for physical hardware firmware.
