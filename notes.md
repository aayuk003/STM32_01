# STM32 Notes

## What is STM32?

STM32 is a family of 32-bit ARM Cortex-M microcontrollers developed by STMicroelectronics.

---

## Why STM32?

- Faster than Arduino UNO
- More RAM
- More Flash
- Better peripherals
- Used in industries

---

## What is GPIO?

GPIO means

General Purpose Input Output

GPIO pins can

- Read digital signals
- Output digital signals

---

## Why PC13?

Blue Pill onboard LED is connected to PC13.

Writing LOW

turns LED ON.

Writing HIGH

turns LED OFF.

---

## HAL

HAL means

Hardware Abstraction Layer.

Instead of writing register-level code,

HAL provides ready-made functions.

Example

HAL_GPIO_TogglePin()

toggles a GPIO pin.

---

## Infinite Loop

while(1)

runs forever.

Microcontrollers never stop executing code.

---

## Delay

HAL_Delay(500);

Waits

500 milliseconds.

---

## Toggle

HAL_GPIO_TogglePin()

If LED is ON

↓

OFF

If OFF

↓

ON

Hence LED blinks.
