This project reads light levels from four analog sensors.

Specifically, it is an implementation of the [M5Stack PbHUB](https://shop.m5stack.com/products/i-o-hub-1-to-6-expansion-unit-stm32f0) to read analog values from four [M5Stack LIGHT sensors](https://docs.m5stack.com/en/unit/LIGHT).
This project is the basis for a Lego sun tracker.
The tracker will use the [M5Stack ATOM Motion base](https://docs.m5stack.com/en/atom/atom_motion) along with two [Kittenbot Geekservo continuous rotation servos](https://www.aliexpress.us/item/3256802685917966.html).

Uses the [M5Stack Pb.HUB library](https://github.com/m5stack/M5Stack/tree/master/examples/Unit/PbHUB) to simplify managing the hardware.

This has been tested on the [M5Stack Atom Lite](https://docs.m5stack.com/en/core/atom_lite) and works perfectly.
