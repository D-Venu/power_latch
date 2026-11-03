# Arduino Firmware

## Sketch

The original sketch supplied by the project team is stored in [`power_latch.ino`](power_latch.ino). It is preserved as supplied; no logic changes have been made.

## Hardware and pin assignments stated in the project

| Function | Pin / connection |
|---|---|
| Reed switch | D3, configured as `INPUT_PULLUP` |
| Relay control | D5, configured as `OUTPUT` |
| Push button | D11, configured as `INPUT_PULLUP` |

## What the supplied sketch does

- Reads the reed switch on D3.
- Configures the reed switch and button inputs with internal pull-up resistors.
- Contains a 20 ms debounce routine that updates `lastStableState`.
- Drives the relay output on D5 according to the reed input.
- When D11 reads LOW, sets `iteration` to 1, writes LOW to D5 and blocks execution with `delay(10000)`.
- After the delay, the loop continues and reads the inputs again.

## Code-review observations

These are observations from reading the supplied sketch, not changes made to it:

1. The debounced value `lastStableState` is updated, but the relay logic later reads `digitalRead(reedPin)` directly. Therefore, the debounced state is not actually used for the relay decision.
2. The relay output is written in several places in the same loop. The later reed-switch and button sections can overwrite the earlier `iteration`-based output.
3. The button handling uses a blocking 10-second delay. During that delay, the sketch does not continuously process reed-switch changes or button input.
4. The code's electrical ON/OFF result depends on whether the actual relay module input is active-LOW or active-HIGH. Verify this using the low-voltage setup and module documentation.
5. The sketch does not include explicit button edge detection or button debouncing.
6. The exact correspondence between reed-switch HIGH/LOW and physical locked/unlocked position depends on the magnet, switch contact arrangement and wiring.

Because of these points, the source code should not be assumed to implement every intended behaviour robustly without further testing. The original sketch remains unchanged for traceability.

## Before modifying or deploying

- Confirm the exact relay board's trigger polarity.
- Confirm which physical latch position produces LOW and HIGH on D3.
- Test the button and automatic mode with the low-voltage demonstration loads only.
- If improving the sketch, retain a copy of this original version and document the changes.
- Do not use this sketch as evidence of a mains-safe appliance controller.

## Libraries

No external Arduino library is included in the supplied sketch.