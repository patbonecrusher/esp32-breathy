# Breathy demo

## HW

SparkFun ESP32 thing plus

## HW setup

Connect the negative pin (cathode) of the LED, indicated as the flat edge of the LED to ground, shown as the blue wire.
Connect the positive pin (anode) of the LED, indicated as the rounded edge of the LED to a 100Ω resistor.
Connect the free end of the resistor to pin D5 on the ESP32, shown as the red wire.


## How it was created

```bash
mkdir esp32-breath && cd esp32-breath
pio project init —board  esp32thing_plus
```
