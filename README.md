# Private Candle 
###### Private candle is a wifi deauther that start the attack when the light is turned on. It creates disconnected spaces to enjoy the present.

![GitHub Logo](/img/rendu1.png)

# Why? 
###### I live most of my time connected. It is the first thing I do when I wake up, and the last too. Event if I am not behind a terminal, I am still available if someone wants to communicate with me. I sometimes answer professional e-mails at 1am or 2am. 
###### But I am not the only one to do that and that's the real problem. Since the smartphones came in our lives, the society started to change deeply. All waiting rooms, or wainting spaces in general, are filled with people staring at their smartphones. Some new physical, mental or social symptoms appeared, like *FOMO*, *blurring* or **post-truth**. 

# How?
###### We must reunite with our physicality and momentary stop our digital presence. That is why I designed a candlestick that scrambles the network when you light the candle on. This object was made with standards electronic pieces and 3d prints which makes its construction accessible to any maker. 

# Instructions
## Electronic
#### You will need: 
* [Battery case ](https://www.bastelgarage.ch/solar-lipo/18650-batteriefach-batteriehalter-mit-anschlusskabel)
* [Li-ion akku](https://www.bastelgarage.ch/solar-lipo/14500-3-7v-li-ion-akku-750mah-icr14500)
* [Battery transformator](https://www.bastelgarage.ch/solar-lipo/sparkfun-lipo-battery-manager-battery-babysitter)
* [Jumpers](https://www.bastelgarage.ch/kabel-litzen/kabel-leitungen/flachkabel-idc-fc-regenbogen-40p-28awg)
* [A mosfet transistor](https://www.play-zone.ch/en/sparkfun-mosfet-power-control-kit.html)
* [A switch](https://www.bastelgarage.ch/schiebeschalter-dpdt-ein-ein-6-polig?search=switch)
* [Ir sensor](https://www.bastelgarage.ch/ir-infrarot-flammensensor?search=ir%20sensor)

## Wiring
![GitHub Logo](/img/wiring.png)

## Code 
#### esp8266 (Master)
Download zip or `git clone https://github.com/spacehuhn/esp8266_deauther.git`
Flash *irSensorSwitch.ino* into the first esp8266 (the master). 

#### esp8266 (Slave)

  Download [here](https://github.com/spacehuhn/esp8266_deauther) the deauther from spacehuhn. 

  Or
  `git clone https://github.com/spacehuhn/esp8266_deauther.git`
  
  Open *deauth.ino* with Arduino IDE. 

  Build and flash the seconde esp (the slave)

  Now display the debugger and type into the serial command box. 

  `write autostart.txt scan -a`
  and then
  `write autostart.txt attack -da`

## 3D Print

3D print this [stl file](https://www.thingiverse.com/thing:4119505)
![GitHub Logo](/img/plan.png)
