This is a port of Zak Kembles nwatch firmware for the Argex WatchX.

From users /u/sasapea3 on Reddit

I tried to port NWatch source code. All except the fact that USB connection state can not be handled appropriately due to hardware problem and only one game is operated. It does not correspond to BLE / Sensor's added with watchX.

Caution:

The only purpose of this task is to allow you to experience Zak's UI.

It is different from the goal of watchX.

I used it for three days only for that purpose. I do not want to use more time.

2018-07-07 Updates

    change. button position.

    change. adc ref 3.3V to 2.56V.

    update. power save mode. (bug)

    update. usb connection state (fix)

2018-07-08 Last Udates

    Sleep on power supply only, but change not to sleep when USB connection with PC is enabled. (For development use)

    USB is stopped while sleeping for power saving.

    Not used for power saving (Can not use?) Shut off USART power.

    Power save operation at idle is prohibited due to MCU specification mismatch.

    Fixed a bug that the alarm does not start when sleeping.
