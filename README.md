# Mesh-IT
Mesh-IT is a handheld LoRa mesh messaging device designed for offline communication. It is built around the Seeed Studio Xiao ESP32-S3 and the Wio-Sx1262 LoRa Module
The Device Has a 2.8-inch colour TFT display, a 5x7 keyboard matrix, joystick navigation, GPS support, and a custom transparent 3D-printed enclosure
# Why I made it 
I wanted to build something that feels like a real product, not something held by tape and hopes.
I made this to solve a critical problem: communication in rural areas
I chose LoRa for a reason, it has excellent range and is low power, and it's cheap, costing around 60$ for 1 unit of Mesh-IT
# Project Images
## Zine 
<img width="322" height="452" alt="ZINE PAGE&#39;" src="https://github.com/user-attachments/assets/34a33abc-fa87-46fa-a572-58b1bb5d610c" />

## PCB
<img width="1191" height="788" alt="Screenshot 2026-06-12 205714" src="https://github.com/user-attachments/assets/c7d9d96f-2b8f-473c-87dd-9572fddcce1d" />

## Enclosure render
<img width="395" height="206" alt="image" src="https://github.com/user-attachments/assets/218a156f-e5f5-49ea-812a-2be417c6faad" />

# Repository structure
This repo is divided into 3 main folders
1. Assets: Contains the zine page, PCB photo,B and  OM Link
2. Hardware: contains the KiCad files, Gerber files, and enclosure files
3. Software: contains the Meshtastic source code used for the project
# BOM
| Name of the modules and components                                                                  | qauntity          | Column1 | Cost in INR     | Cost in USD | Vender             | payment gateway   | Link to the components(Shortned)                                                             | Notes                                         |   |   |   |
|-----------------------------------------------------------------------------------------------------|-------------------|---------|-----------------|-------------|--------------------|-------------------|----------------------------------------------------------------------------------------------|-----------------------------------------------|---|---|---|
| Seed Studio XIAO ESP32S3 & Wio-SX1262 Kit                                                           | 1 unit            |         | 1250Rs          | 13.36 USD   | RoboCraze          | Cashfree Payments | https://tinyurl.com/5bukd4ad                                                                 |                                               |   |   |   |
| NOVA 105050 3000mAh 3.7V Micro LiPo Battery pack with Protection                                    | 1 unit            |         | 448Rs           | 4.79 USD    | Robu.in            | Razorpay          | https://tinyurl.com/mr3fhkuk                                                                 |                                               |   |   |   |
| 2.8-inch SPI Screen Module TFT Interface 240 x 320                                                  | 1 unit            |         | 502Rs           | 5.36 USD    | Robu.in            | Razorpay          | https://tinyurl.com/cd7x465m                                                                 |                                               |   |   |   |
| MCP23017 IO Expander                                                                                | 1 units           |         | 295X2 =590Rs    | 6.30 USD    | Sharvi electronics | Razorpay          | https://tinyurl.com/5buam5mn                                                                 | Footprint made, cross verification to be done |   |   |   |
| 6x6x8mm Tactile Push Button Switch                                                                  | 35 units          |         | 1.42X35=49.7Rs  | 0.53 USD    | Robu.in            | Razorpay          | https://tinyurl.com/6n4hz5ta                                                                 |                                               |   |   |   |
| header pins male and female                                                                         | approx 3-4 strips |         | 150~            | 1.62 USD    | Sharvi electronics | Razorpay          | (https://tinyurl.com/5bj7v66y)-(https://tinyurl.com/y262sv7j)-(https://tinyurl.com/3wr45e22) |                                               |   |   |   |
| 1N4148 SMD Diodes                                                                                   | 35 units          |         | 2.31x35=80.85Rs | 0.86 USD    | Robu.in            | Razorpay          | https://tinyurl.com/5cmwptxd                                                                 |                                               |   |   |   |
| 0.1uf 50V Electrolytic Capacitor 4�7 mm                                                             | 2 units           |         | 1.8x2=3.6Rs     | 0.038 USD   | Sharvi electronics | Razorpay          | https://tinyurl.com/yf9rr7jz                                                                 |                                               |   |   |   |
| 4.7k? Resistors                                                                                     | 2 units           |         | 1.78x4=7.12Rs   | 0.076 USD   | Robu.in            | Razorpay          | https://tinyurl.com/njw2wvwy                                                                 |                                               |   |   |   |
| 5V buzzer                                                                                           | 1 unit            |         | 5Rs             | 0.053 USD   | Robu.in            | Razorpay          | https://tinyurl.com/ycxt2xyt                                                                 |                                               |   |   |   |
| Type-C USB 5V 3.1A Boost Step-Up Power Module Lithium Battery Charging Protection Board LED Display | 1 unit            |         | 199Rs           | 2.13 USD    | RoboticsDNA        | Razorpay          | https://shorturl.at/6hUbp                                                                    |                                               |   |   |   |
| K1-1504SA-03-Hroparts-SMD,10x10mm Multi-Directional Switches ROHS                                   | 1 unit            |         | Rs53            | 0.56 USD    | Robu.in            | Razorpay          | https://tinyurl.com/2dr539dm                                                                 | Wil need to check pinout with Multimeter      |   |   |   |
| 868MHZ 3dbi antenna for lora                                                                        | 1 Unit            |         | 172Rs           | 1.84 USD    | Sharvi electronics | Razorpay          | https://tinyurl.com/3zvpm4hj                                                                 |                                               |   |   |   |
| 15CM SMA Female to IPEX1 Connector Cable Thread 13mm RG1.13                                         | 1 unit            |         | 123Rs           | 1.32USD     | Robu.in            | Razorpay          | https://tinyurl.com/32b22wph                                                                 |                                               |   |   |   |
| 10k Ohm 0.25W Metal Film Resistor                                                                   | 1 unit            |         | 0.35Rs          | 0.37 USD    | Robu.in            | Razorpay          | https://tinyurl.com/w53xawx6                                                                 |                                               |   |   |   |
| L89HA GPS                                                                                           | 1 unit            |         | 808RS           | 8.57 USD    | Robocraze          | U pay             | https://tinyurl.com/3yfzxkyc                                                                 |                                               |   |   |   |
| MAX17048                                                                                            | 1 unit            |         | 339RS           | 3.6 USD     | RoboCraze          | Cashfree Payments | https://tinyurl.com/mvp69xfj                                                                 |                                               |   |   |   |
| 4 Pin JST-XH Single Side Female Polarized Header with 300mm Wire -2.54mm pitch                      | 1 unit            |         | 12Rs            | 0.13 USD    | Sharvi electronics | Razorpay          | https://tinyurl.com/bdf56mhs                                                                 |                                               |   |   |   |
| 4 Pin JST-XH Male Straight 2515 Connector 2.54mm Pitch                                              | 1 unut            |         | 3.25            | 0.34 USD    | Sharvi electronics | Razorpay          | https://tinyurl.com/2yn7nenw                                                                 |                                               |   |   |   |
| 1k Ohm 0.25W,1/4W Metal Film Resistor                                                               | 1 unit            |         | 0.90RS          | 0.94 USD    | Robu.in            | Razorpay          | https://tinyurl.com/4bdfaym5                                                                 |                                               |   |   |   |
| Sub-Miniature Toggle Switch (Pack of 5)                                                             | 1 Unit            |         | 66RS            | 0.69 USD    | RoboCraze          | U pay             | https://tinyurl.com/4rav2k23                                                                 |                                               |   |   |   |
| SS14 skotty diode                                                                                   | 1 Unit            |         | 16Rs            | 0.17 USD    | Robu.in            | Razorpay          | https://tinyurl.com/3fuxp2pn                                                                 |                                               |   |   |   |
| SS8050                                                                                              | 1 Unit            |         | 6Rs             | 0.7 USD     | Robu.in            | Razorpay          | https://tinyurl.com/pu2hbnr5                                                                 |                                               |   |   |   |
| Transparent Soft Silicone Switch Cap For 6X6mm Switches                                             | 35 Units          |         | 160Rs           | 1.69 USD    | Sharvi electronics | Razorpay          | https://tinyurl.com/6brves79                                                                 |                                               |   |   |   |
| Black Rubber Cap for 10x10x9mm Five Way Switch                                                      | 1 Unit            |         | 18Rs            | 0.20 USD    | RoboticsDNA        | Razorpay          | https://shorturl.at/rFPS5                                                                    |                                               |   |   |   |
| PCB                                                                                                 | 1unit             |         | 640 Rs          | 6.80 USD    | JLCPCB             | N/A               | N/A                                                                                          |                                               |   |   |   |
| TOTAL                                                                                               |                   |         | 5740 RS         | 60.85 USD   | ===                |                   |                                                                                              |                                               |   |   |   |
#   How to assemble it
1. First, take the display and align it with the cutout for the display and screw it in
2. Then put the heat inserts in the backplate
3. Then insert the switch on the right side of the enclosure
4. Then wire the switch between the battery input and the charging module, the input
5. Then glue the Charging module onto the little platform near Xiao
6. Then solder the charging module's power path to the 5V pin and GND, situated on the top left
7. and solder the bat-in
8. Then cover the battery with Kapton tape, then stick it on the back of the PCB in the designated cutout using ddouble-sidedtape 
9. Then align the PCB carefully and screw everything in
# Flashing custom firmware
To flash the firmware, you will need to open the Meshtastic web flasher (https://flasher.meshtastic.org/)
Then, in the select target section, select Seed Studio Xiao, then select your firmware file and hit flash
# Timeline
Schematic and research took me around 25 hours
and making the PCB took around 45 hours
and 3d enclosure took around 30 hours of trial and error

# Current STATUS
1. PCB design is complete
2. Enclosure is complete
3. Gerber files are included
4. Zine page is complete
5. Physical build and firmware testing are still pending
# Credits
Special thanks to the Meshtastic team for open-source software
# licence
This project is open-source and released under the MIT license


